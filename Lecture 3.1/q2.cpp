#include <iostream>
#include <string.h>

using namespace std;


class Customer{
private:
    int cust_id;
    char cust_name[50];
    int cust_age;
    char cust_city[50];
    char cust_mobile_number[20];
    int cust_simcard_validity;
    char cust_telecom_brand_name[50];

public:
    void inpCustomerDtl() {
        cout << "Enter customer id: ";
        cin >> this->cust_id;
        cout << "Enter customer Name: ";
        cin >> this->cust_name;
        cout << "Enter customer Age: ";
        cin >> this->cust_age;
        cout << "Enter customer City: ";
        cin >> this->cust_city;
        cout << "Enter customer Mobile Number: ";
        cin >> this->cust_mobile_number;
        cout << "Enter customer Simcard Validity: ";
        cin >> this->cust_simcard_validity;
        cout << "Enter customer Telecom Brand Name: ";
        cin >> this->cust_telecom_brand_name ;
        cout << "------------------------------" << endl;
    }

    void displayRecord(Customer record[], int size) {
        for (int i = 0; i < size; i++) {
            cout << "Customer id: " << record[i].cust_id << endl
                 << "Customer Name: " << record[i].cust_name << endl
                 << "Customer Age: " << record[i].cust_age << endl
                 << "Customer City: " << record[i].cust_city << endl
                 << "Customer Mobile Number: " << record[i].cust_mobile_number << endl
                 << "Customer Simcard Validity: " << record[i].cust_simcard_validity << endl
                 << "Customer Telecom Brand Name: " << record[i].cust_telecom_brand_name << endl
                 << "---------------------------------------------" << endl;
        }
    }
};


int main(){
   Customer c[5];

  c[0].inpCustomerDtl();
  c[1].inpCustomerDtl();
  c[2].inpCustomerDtl();
  c[3].inpCustomerDtl();
  c[4].inpCustomerDtl();
  c[4].displayRecord(c,5);


  return 0;
}