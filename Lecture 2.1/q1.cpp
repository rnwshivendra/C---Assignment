// Online C++ compiler to run C++ program online
#include <iostream>
#include <string.h>

using namespace std;


class employee{
    int id;
    char name[50];
    int age;
    char role[50];
    int salary;
    char city[50];
    int experience;
    char company_name[50];

    public: 
      void setData(int id,char name[],int age, char role[], int salary, char city[],int experience,char company_name[]){
          this->id = id;
          strcpy(this->name,name);
          this->age = age;
          strcpy(this->role,role);
          this->salary = salary;
          strcpy(this->city,city);
          this->experience = experience;
          strcpy(this->company_name,company_name);
      }

      void getData(){
          cout << "name: " << name << endl 
               << "id: " << id << endl
               << "age: " << age << endl
               << "role: " << role << endl
               << "salary: " << salary << endl
               << "city: " << city << endl
               << "experience: " << experience << endl
               << "company name: " << company_name << endl;
      }

};

int main() {

   employee e1,e2,e3,e4,e5;

   e1.setData(1,"shivendra",21,"developer",200,"gorakhpur",1,"applore");
   e1.getData();

    return 0;
}