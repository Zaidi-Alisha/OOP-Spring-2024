#include <iostream>
#include <vector>
#include <string>

using namespace std;

class MenuItem {
private:
    string foodName;
    double foodPrice;

public:
    //Parameterized constructor 
    MenuItem(const string& name, double price) : foodName(name), foodPrice(price) {}

    //Getter
    string getFoodName() const {
        return foodName;
    }

    double getFoodPrice() const {
        return foodPrice;
    }
};

class Menu {
private:
    vector<MenuItem> items;

public:
    //Adding menu item
    void addItem(const MenuItem& item) {
        items.push_back(item);
    }

    //Removing menu item
    void removeItem(const string& itemName) {
        for (auto it = items.begin(); it != items.end(); ++it) {
            if (it->getFoodName() == itemName) {
                items.erase(it);
                break;
            }
        }
    }

    //Displaying the entire menu
    void displayMenu() const {
        cout << "Menu:\n";
        for (const MenuItem& item : items) {
            cout << item.getFoodName() << " - $" << item.getFoodPrice() << endl;
        }
    }
};

class Order {
private:
    vector<MenuItem> items;
    double totalPrice;

public:
    //Default Constructor
    Order() : totalPrice(0) {}

    //Adding menu item to order
    void addItem(const MenuItem& item) {
        items.push_back(item);
        totalPrice += item.getFoodPrice();
    }

   //Getting total price of order
    double getTotalPrice() const {
        return totalPrice;
    }
};

class Payment {
private:
    double amount;

public:
    //Parameterized Constructor
    Payment(double amt) : amount(amt) {}

    //Getter 
    double getAmount() const {
        return amount;
    }
};

class RestaurantOrderingSystem {
private:
    Menu menu;

public:
    //Add menu item to the restaurant's menu
    void addToMenu(const MenuItem& item) {
        menu.addItem(item);
    }

    //Removing menu item from the restaurant's menu
    void removeFromMenu(const string& itemName) {
        menu.removeItem(itemName);
    }

    //Displaying the restaurant's menu
    void displayMenu() const {
        menu.displayMenu();
    }

    //Place order
    Order placeOrder(const vector<MenuItem>& items) {
        Order order;
        for (const MenuItem& item : items) {
            order.addItem(item);
        }
        return order;
    }

    //Generating payment 
    Payment generatePayment(const Order& order) {
        double totalPrice = order.getTotalPrice();
        //Applying any discounts, taxes, etc.
        return Payment(totalPrice);
    }
};

int main() {

    RestaurantOrderingSystem restaurant;

    //Adding items to the menu
    MenuItem item1("Pasta", 5.43);
    MenuItem item2("Lasagne", 7.29);
    restaurant.addToMenu(item1);
    restaurant.addToMenu(item2);

    //Displaying the menu
    cout << "Restaurant Menu:\n";
    restaurant.displayMenu();

    //Placing an order
    vector<MenuItem> orderItems = {item1, item2};
    Order order = restaurant.placeOrder(orderItems);

    //Generating payment
    Payment payment = restaurant.generatePayment(order);
    cout << "Total payment amount: $" << payment.getAmount() << endl;

    return 0;
}//end main