/**
 *Programmer: Alisha Zaidi
 *Date: 10 February, 2024
*/

#include <iostream>
#include <map>
#include <string>

//Making struct for product
struct Product {
    int id;
    std::string name;
    double price;
    int quantity;

    Product(int id, std::string name, double price, int quantity)
        : id(id), name(name), price(price), quantity(quantity) {}
};

class ProductManagement {
private:
    std::map<int, Product> products;

public:
    //Making function to add product
    void addProduct(int id, std::string name, double price, int quantity) {
        products[id] = Product(id, name, price, quantity);
    }//ending funtion

    //Making function to display the product
    void displayProduct(int id) {
        auto it = products.find(id);
        if (it != products.end()) {
            const Product &product = it->second;
            std::cout << "Product ID: " << product.id << '\n';
            std::cout << "Name of product: " << product.name << '\n';
            std::cout << "Price of product: Rs. " << product.price << '\n';
            std::cout << "Quantity: " << product.quantity << '\n';
        }//ending if 
            else {
            std::cout << "Product not found.\n";
        }//ending else
    }//ending function

    //Making function to update the product
        void updateProduct(int id, double newPrice, int newQuantity) {
        auto it = products.find(id);
        if (it != products.end()) {
            Product &product = it->second;
            product.price = newPrice;
            product.quantity = newQuantity;
        }//ending if 
        else {
            std::cout << "Product not found.\n";
        }//ending else
    }//ending function
};//ending class

int main() {
    ProductManagement pms;

    //Adding product
    pms.addProduct(1, "Sample Product", 10.0, 5);

    //Displaying product
    pms.displayProduct(1);

    //Updating product
    pms.updateProduct(1, 12.0, 7);

    //Display the updated product
    pms.displayProduct(1);

    return 0;
}//end main