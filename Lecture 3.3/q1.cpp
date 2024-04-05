#include <iostream>
#include <string.h>

using namespace std;

class Diamond{
   int id;
   char name[50];
   int staff_quantity;
   int company_revenue;
   int comp_import_raw_diamonds;
   int comp_export_diamonds;
   char ceo[50];


 public:

    Diamond(){}

    Diamond(int id, char name[], int 
    staff_quantity, int company_revenue, int 
    comp_import_raw_diamonds, int 
    comp_export_diamonds, char ceo[]){
      this->id = id;
      strcpy(this->name, name);
      this->staff_quantity = staff_quantity;
      this->company_revenue = company_revenue;
      this->comp_import_raw_diamonds = comp_import_raw_diamonds;
      this->comp_export_diamonds = comp_export_diamonds;
      strcpy(this->ceo ,ceo);
    }

    void getDetails(){
        cout << "id: " << id << endl 
          << "name: " << name << endl
          << "staff_quantity: " << staff_quantity << endl
          << "company_revenue: " << company_revenue << endl
          << "comp_import_raw_diamonds: " << comp_import_raw_diamonds << endl
          << "comp_export_diamonds: " << comp_export_diamonds << endl
          << "ceo: " << ceo << endl
           << "----------------------------" << endl;
    }
};


int main(){
  int size;
  cout << "Enter the size: ";
  cin  >> size; 

  Diamond c[size];

   int id;
   char name[50];
   int staff_quantity;
   int company_revenue;
   int comp_import_raw_diamonds;
   int comp_export_diamonds;
   char ceo[50];


  for(int i=0;i<size;i++){

      cout << "id: ";
      cin >> id;
      cout << "name: ";
      cin >> name ;
      cout << "staff_quantity: "; 
      cin >> staff_quantity;
      cout << "company_revenue: ";
      cin >> company_revenue;
      cout << "comp_import_raw_diamonds: ";
      cin >> comp_import_raw_diamonds;
      cout << "comp_export_diamonds: ";
      cin >> comp_export_diamonds;
      cout << "ceo: ";
      cin >> ceo;

     c[i] = Diamond(id, name, staff_quantity, company_revenue, comp_import_raw_diamonds, 
     comp_export_diamonds, ceo);

  }

  for(int i=0;i<size;i++){
      c[i].getDetails();
  }

  return 0;
}

