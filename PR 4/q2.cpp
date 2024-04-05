#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    float inches;

public:

    void set(int ft , float in ){
      this->feet = ft;
      this->inches = in;
  }


    Distance operator+(Distance d2) {
      Distance temp;

        temp.feet = this->feet + d2.feet;
        temp.inches = this->inches + d2.inches;

        if (temp.inches >= 12.0) {
            temp.inches -= 12.0;
            temp.feet++;
        }

        return temp;
    }

    void display() {
        cout << "Feet: " << feet << " Inches: " << inches << endl;
    }
};

int main() {
    Distance d1; 
    Distance d2;

    d1.set(5, 8.6);
    d2.set(3, 10.2);

    Distance d3 = d1 + d2; 

    cout << "Total Distance (Distance 1 + Distance 2): ";
    d3.display();

    return 0;
}
