#include <iostream>
#include <string.h>

using namespace std;

class car{
    int id;
    char company_name[50];
    char color[50];
    char model[50];
    int release_year;

    public: 
    void setData(int id, char company_name[],char color[],char model[],int release_year){
        this->id = id;
        strcpy(this->company_name, company_name);
        strcpy(this->color, color);
        strcpy(this->model, model);
        this->release_year = release_year;
    }

    void getData(){
         cout << "id: " << id << endl
              << "company_name: " << company_name << endl
              << "color: " << color << endl
              << "model: " << model << endl
              << "release_year: " << release_year << endl;
    }
};

int main(){

    car c1,c2,c3,c4;

    c1.setData(1,"BMW","Red","S30",2011);
    c1.getData();

    return 0;
}