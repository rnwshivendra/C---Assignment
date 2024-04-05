#include <iostream>
#include <string.h>


using namespace std;


class Hotel{
   int id;
   char name[30];
   char type[30];
   int rating;
   int establish_year ;
   int staff_quantity;
   int room_quantity;

 public:
     
    static char location[7];

     void setDetails(){
       cout << "Hotel id: ";
       cin >> id;
       cout << "Hotel name: ";
       cin >> name;
       cout << "Hotel type: ";
       cin >> type;
       cout << "Hotel rating: ";
       cin >> rating;
       cout << "Establish year: ";
       cin >> establish_year;
       cout << "Staff quantity: ";
       cin >> staff_quantity;
       cout << "Room quantity: ";
       cin >> room_quantity;
     }

   void getDetails(Hotel record[],int size){
      for(int i=0;i<size;i++){
          cout << "id :" << record[i].id <<endl
               << "name :" << record[i].name << endl
               << "type :" << record[i].type << endl
               << "rating :" << record[i].rating << endl
               << "location: " << record[i].location << endl
               << "establish_year :" << record[i].establish_year << endl
               << "staff_quantity :" << record[i].staff_quantity << endl
               << "room_quantity :" << record[i].room_quantity << endl;
      }
   }

};


 char Hotel::location[7] = "nvs";



int main(){

   Hotel h1[5];
   h1[0].setDetails();
   h1[1].setDetails();
   h1[2].setDetails();
   h1[3].setDetails();
   h1[4].setDetails();

   h1[4].getDetails(h1,4);



  return 0;
}