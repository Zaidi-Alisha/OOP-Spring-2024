/**
 *Programmer: Alisha Zaidi
 *Date: 10 February, 2024
 *23k-0025
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Book {
    string title;
    string author;
    int year;
    string genre;

    Book(string t, string a, int y, string g) : title(t), author(a), year(y), genre(g) {}
};

//Making function to display books
void displayBook(const Book& book) {
    cout << "Title: " << book.title << endl;
    cout << "Author: " << book.author << endl;
    cout << "Year: " << book.year << endl;
    cout << "Genre: " << book.genre << endl;
}//end display books function

//Making function to add book
void addBook(vector<Book>& books) {
    string title;
    string author;
    string genre;
    int year;

    cout << "Enter the title of the book: ";
    getline(cin, title);
    cout << "Enter the author: ";
    getline(cin, author);
    cout << "Enter the year of publication: ";
    cin >> year;
    cin.ignore();
    cout << "Enter the genre: ";
    getline(cin, genre);

    books.push_back(Book(title, author, year, genre));
    cout << "Book has been added" << endl;
}//ending adding book function

//Making function to update a book
void updateBook(vector<Book>& books) {
    string title;
    cout << "Enter the title that you want to update: ";
    getline(cin, title);

    bool found = false;
    for (size_t i = 0; i < books.size(); ++i) {
        if (books[i].title == title) {
            cout << "Enter new book details:" << endl;
            string newTitle, newAuthor, newGenre;
            int newYear;
            cout << "Enter updated book title: ";
            getline(cin, newTitle);
            cout << "Enter new book author: ";
            getline(cin, newAuthor);
            cout << "Enter updated year of publication: ";
            cin >> newYear;
            cin.ignore();
            cout << "Enter updated book genre: ";
            getline(cin, newGenre);

            books[i] = Book(newTitle, newAuthor, newYear, newGenre);
            found = true;
            break;
        }//ending if
    }//ending for loop

    if (!found) {
        cout << "Book not found!" << endl;
    }//ending if
}//ending function to update book

Book* findBookByTitle(const vector<Book>& books, const string& title) {
    for (const Book& book : books) {
        if (book.title == title) {
            return &book;
        }//ending if
    }//ending for loop
    return nullptr;
}//ending function to find book by its title

Book* findBookByAuthor(const vector<Book>& books, const string& author) {
    for (const Book& book : books) {
        if (book.author == author) {
            return &book;
        }//ending if
    }ending for loop
    return nullptr;
}//ending function to find book by author

int main() {
    vector<Book> books;
    int choice;

    while (true) {
        cout << "1. Add book" << endl;
        cout << "2. Update book" << endl;
        cout << "3. Find book by title" << endl;
        cout << "4. Find book by author" << endl;
        cout << "5. Display all books" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                addBook(books);
                break;
            case 2:
                updateBook(books);
                break;
            case 3: {
                string title;
                cout << "Enter book title: ";
                getline(cin, title);
                Book* book = findBookByTitle(books, title);
                if (book) {
                    displayBook(*book);
                }//ending if 
                else {
                    cout << "Book not found!" << endl;
                }//ending else
                break;
            }//ending case
            case 4: {
                Book* findBookByAuthor(const vector<Book>& books, const string& author) {
                    for (const Book& book : books) {
                        if (book.author == author) {
                            return &book;
                        }//ending if
                    }//ending for loop
                    return nullptr;
                }//ending case
}//ending main
