#include <iostream>

using namespace std;

class Time{
  int hour;
  int min;
  int sec;

public:
     void getTime(int sec){
         this->hour = sec/3600;
         this->min = (sec%3600) / 60;
         this->sec = (sec%3600) % 60 ;
     }

     void display(){
         cout << hour << ":" << min << ":" << sec;
     }
};


int main(){

  Time o1;
  o1.getTime(4520);
  o1.display();

  return 0;
}