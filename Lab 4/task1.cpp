/*
*Programmer: Alisha Zaidi
*Date: 15 Feb, 2024
*Topic: Constructors: Task 1
*/

#include <iostream>
#include <string>

using namespace std;

//Generalized class
class Book {
private:
    string name, author, isbn;
    int total_pages, read;
    
public:
    //Default Constructor
    Book (){
        name = "book";
        author = "abc";
        isbn = "0";
        total_pages = 0;
        read = 0;
    }//ending constructor

    //Parameterized constructor
    Book(string name, string author, string ISBN, int total_pages, int read) {
        this->name = name;
        this->author = author;
        this->isbn = isbn;
        this->total_pages = total_pages;
        this->read = 0;
    }//ending parameterized constructor

    //Making function to update pages
    void update(int pages) {
        read += pages;
        if (read == total_pages) {
            cout << "You have finished the book." << endl;
        }//ending if

        else if (read > total_pages) {
            cout << "You have made an error!" << endl;
        }//ending else if
        
        else {
            cout << "Number of pages read: " << read << endl;
            cout << "Number of pages remaining are: " << total_pages - read << endl;
        }//ending else
    }//closing function
};//end class

int main() {

    //Creating a book object 
    Book book("Harry Potter and the Prisoner of Azkaban", "J.K. Rowling", "95764566565", 500, 165);

    //Updating the pages
    book.update(180);
    return 0;
}//ending main
