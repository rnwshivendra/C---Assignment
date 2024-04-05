#include <iostream>
#include <string.h>

using namespace std;

class Cafe{
  int cafe_id;
  char cafe_name[50];
  char cafe_type[50]; 
  int cafe_rating;
  char cafe_location[50];
  int cafe_establish_year;
  int cafe_staff_quantity;

  public: 

    Cafe(){
         this->cafe_id = 1;
         strcpy(this->cafe_name ,"B_town");
         strcpy(this->cafe_type , "Classic");
         this->cafe_rating = 2;
         strcpy(this->cafe_location, "Navsari");
         this->cafe_establish_year = 2011;
         this->cafe_staff_quantity = 10;
        }

    void set(int cafe_id, char cafe_name[], char cafe_type[], int cafe_rating, char cafe_location[], int cafe_establish_year, int cafe_staff_quantity){

         this->cafe_id = cafe_id;
         strcpy(this->cafe_name ,cafe_name);
         strcpy(this->cafe_type , cafe_type);
         this->cafe_rating = cafe_rating;
         strcpy(this->cafe_location, cafe_location);
         this->cafe_establish_year = cafe_establish_year;
         this->cafe_staff_quantity = cafe_staff_quantity;

    }

    void get(){

        cout << "cafe_name: " << cafe_name << endl
             << "cafe_id: " << cafe_id << endl
             << "cafe_type: " << cafe_type << endl
             << "cafe_rating: " << cafe_rating << endl
             << "cafe_location: " << cafe_location << endl 
             << "cafe_establish_year: " << cafe_establish_year << endl
             << "cafe_staff_quantity: " << cafe_staff_quantity << endl;
    }
};



int main(){

    int size;
    cout << "Enter size: " ;
    cin >> size;

    Cafe c[size];

    int cafe_id;
    char cafe_name[50];
    char cafe_type[50]; 
    int cafe_rating;
    char cafe_location[50];
    int cafe_establish_year;
    int cafe_staff_quantity;

    for(int i=0;i<size;i++){

        cout << "Enter cafe id: ";
        cin >> cafe_id;
        cout << "Enter name of cafe: ";
        cin >> cafe_name;
        cout << "Enter the type of cafe: ";
        cin >> cafe_type;
        cout << "Enter rating of cafe: ";
        cin >> cafe_rating;
        cout << "Enter location of cafe: ";
        cin >> cafe_location;
        cout << "Enter establish year: ";
        cin >> cafe_establish_year;
        cout << "Enter staff quantity: ";
        cin >> cafe_staff_quantity;

        c[i].set(cafe_id,cafe_name,cafe_type,cafe_rating,cafe_location,cafe_establish_year,cafe_staff_quantity);

    }

    for(int i=0;i<size;i++){
        c[i].get();
    } 

    return 0;
}