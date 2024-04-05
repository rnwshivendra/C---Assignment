#include <iostream>
#include <string.h>

using namespace std;


class X{
    public: 
    int a;
    int b;
    int c;
};

class Y: public X{
    public: 
        void setData(int a,int b, int c){
            this->a = a;
            this->b = b;
            this->c = c;
        }

        void getData(){
            cout << "a: " << a << endl
                 << "b: " << b << endl
                 << "c: " << c << endl;
        }
};


int main(){

    Y d1;

    d1.setData(2,3,4);
    d1.getData();

    return 0;
}