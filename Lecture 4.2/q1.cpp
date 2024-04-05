#include <iostream>

using namespace std;


class RBI{
    public: 
        float rate;

        void setRate(float rate){
            this->rate=rate;
        }

        float getROI(){
            cout<<"ROI in RBI is : "<< this->rate<<endl;
            return 0.0;
        }

};

class SBI: public RBI {
    public :
        float getROI(){
             cout<<"Rate of interest SBI :"<< rate<<endl;
             return 0.0 ;
         }
};


class BOB : public RBI{

    public: 
          
         float getROI(){
             cout<< "Rate of Interest BOB : "<< this->rate <<endl;
              return 0.0 ;

         }

 };

 class ICICI : public RBI {
     public :
       float  getROI(){
              cout<< "Rate of interest ICICI :"<< this->rate <<endl ;
              return 0.0 ;
        }

 };


 int main(){
     RBI r1; 
     SBI  s1 ; 
     BOB b1 ;
     ICICI icici ; 

     float rate;
     cout<< "Enter rate: "; 
     cin >> rate;


     r1 . setRate (rate); 
     r1. getROI(); 
     s1.setRate (rate);
     s1. getROI();
     b1.setRate (rate);
     b1 . getROI(); 
     icici.setRate (rate);
     icici. getROI();
    return  0;


}
