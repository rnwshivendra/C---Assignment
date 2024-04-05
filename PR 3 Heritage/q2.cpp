#include <iostream>

using namespace std;

class A{
  public : 
  int number;

  A(int number){
    this->number = number;
  }
};

class B: public A{
  public:
     B(int a): A(a){}
     void getSq(){
          cout << "Square of number is: " << number*number << endl;
     }
};

class C: public A{
  public:
      C(int a): A(a){}
     void getCube(){
          cout << "Cube of number is: " << number*number*number << endl;
     }
};


int main(){


    B b(2); 
  C c(3);

  b.getSq();
  c.getCube();

}
