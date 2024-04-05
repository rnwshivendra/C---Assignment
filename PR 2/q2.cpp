#include <iostream>
#include <string.h>

using namespace std;

class Billing {
    int item_number;
    char item_name[50];
    int quantity;
    int price;
    int discount;
    char id[50];
    char password[50];
    int verified;

public: 
    Billing() {
        verified = 0;
        strcpy(id, "user");
        strcpy(password, "user@123");
    }

    void setDetails(int item_number, const char item_name[], int quantity, int price, int discount) {
        if(verified == 0) {
            cout << "Login first"<< endl;
            return;
        }

        this->item_number = item_number;
        strcpy(this->item_name, item_name);
        this->quantity = quantity;
        this->price = price;
        this->discount = discount;
    }

    void getAllRecord() {
        if(verified == 0) {
            cout << "Login first" << endl;
            return;
        }

        cout << "item_number: " << item_number << endl
             << "item_name: " << item_name << endl
             << "quantity: " << quantity << endl
             << "price: " << price << endl
             << "discount: " << discount << endl;
    }

    void verifyAccount(const char* id, const char* password) {
        if(strcmp(this->id, id) == 0 && strcmp(this->password, password) == 0) {
            verified = 1;
            cout << "Logged in successfully !!" << endl;
        } else {
            cout << "Invalid ID or Password" << endl;
        }
    }
};

int main() {

    char id[50];
    char password[50]; 
    int size;

    cout << "Enter user id: ";
    cin >> id;
    cout << "Enter password: ";
    cin >> password;

    Billing b1[size];

    b1[0].verifyAccount(id, password);

    cout << "Enter the number of bills: ";
    cin >> size;

    int item_number;
    char item_name[50];
    int quantity;
    int price;
    int discount;

    for(int i = 0; i < size; i++) {
        cout << "item_number: ";
        cin >> item_number;
        cout << "item_name: ";
        cin >> item_name;
        cout << "quantity: ";
        cin >> quantity;
        cout << "price: ";
        cin >> price;
        cout << "discount: ";
        cin >> discount;

        b1[i].setDetails(item_number, item_name, quantity, price, discount);
    }

    for(int i = 0; i < size; i++) {
        b1[i].getAllRecord();
    }
}
