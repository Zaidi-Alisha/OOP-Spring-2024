/*Alisha Zaidi
 *23k-0025
 */

#include <iostream>
#include <string>

using namespace std;

//General class
class StationaryShop {
private:
    string items[100];
    int prices[100];
    int itemCount;

public:
    //default constructor
    StationaryShop()
	 {
        itemCount = 0;
    }

   //function to add item
    void addItem(string itemName, int price) {
        items[itemCount] = itemName;
        prices[itemCount] = price;
        itemCount++;
    }//end function

   //function to display item
    void displayItems() {
        cout << "Items available:\n";
        for (int i = 0; i < itemCount; ++i) {
            cout << items[i] << " - Rs" << prices[i] << endl;
        }//end for loop
    }//end function
  
    //function to modify price
    void modifyPrice(string itemName, int newPrice) {
        for (int i = 0; i < itemCount; ++i) {
            if (items[i] == itemName) {
                prices[i] = newPrice;
                cout << "Price for " << itemName << " has been updated to $" << newPrice << endl;
                return;
            }//end if
        }//end for
        cout << "Item not found!" << endl;
    }//end function

    //function to get receipt
     void generateReceipt(string items[], int quantities[], int itemCount) {
        int total = 0;
        cout << "Receipt:\n";
        for (int i = 0; i < itemCount; ++i) {
            cout << items[i] << " - " << quantities[i] << " pcs - $" << quantities[i] * prices[i] << endl;
            total += quantities[i] * prices[i];
        }//end for loop
        cout << "Total: $" << total << endl;
    }//end function
};//end class

int main() {
    StationaryShop shop;
    int choice;
    string itemName;
    int price;
    string receiptItems[100];
    int quantities[100];
    int receiptItemCount = 0;

    //use do while loop
    do {
        cout << "\nStationary Shop Menu:\n";
        cout << "1. Add item\n";
        cout << "2. Display items\n";
        cout << "3. Modify price\n";
        cout << "4. Generate receipt\n";
        cout << "5. Exit the menu\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter item name: ";
                cin >> itemName;
                cout << "Enter price: ";
                cin >> price;
                shop.addItem(itemName, price);
                break;
            case 2:
                shop.displayItems();
                break;
            case 3:
                cout << "Enter item name: ";
                cin >> itemName;
                cout << "Enter new price: ";
                cin >> price;
                shop.modifyPrice(itemName, price);
                break;
            case 4:
                cout << "Receipt:\n";
                shop.generateReceipt(receiptItems, quantities, receiptItemCount);
                break;
            case 5:
                cout << "Program end.\n";
                break;
            default:
                cout << "Invalid input\n";
        }//end switch
    } while (choice != 5);//end while

    return 0;
}//end main