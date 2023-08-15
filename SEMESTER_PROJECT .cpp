

#include <iostream>
#include <string>
#include <vector>

// Product class to store information about products
class Product {
private:
    std::string name;
    int quantity;
    double price;

public:
    Product(const std::string& n, int q, double p) : name(n), quantity(q), price(p) {}

    std::string getName() const { return name; }
    int getQuantity() const { return quantity; }
    double getPrice() const { return price; }

    void updateQuantity(int newQuantity) { quantity = newQuantity; }
};

// Inventory class to manage products
class Inventory {
private:
    std::vector<Product> products;

public:
    void addProduct(const Product& product) { products.push_back(product); }

    void listProducts() const {
        std::cout << "Inventory List:\n";
        for (const Product& product : products) {
            std::cout << "Name: " << product.getName() << ", Quantity: " << product.getQuantity() << ", Price: $" << product.getPrice() << "\n";
        }
    }

    // Additional methods for updating, searching, and removing products can be added here
};

int main() {
    Inventory inventory;

    // Add some initial products
    inventory.addProduct(Product("Item A", 10, 29.99));
    inventory.addProduct(Product("Item B", 5, 49.99));
    inventory.addProduct(Product("Item C", 20, 9.99));

    // List products in the inventory
    inventory.listProducts();

    return 0;
}