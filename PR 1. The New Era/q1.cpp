#include <iostream>

using namespace std;

class Distance {
    int feet;
    int inch;

public:
    void set(int feet, int inch) {
        this->feet = feet;
        this->inch = inch;
    }

    Distance add_distance(Distance o2) {
        Distance temp;
        temp.inch = this->inch + o2.inch;
        temp.feet = this->feet + o2.feet;
        while (temp.inch >= 12) {
            temp.feet++;
            temp.inch -= 12;
        }
        return temp;
    }

    void display() {
        cout << feet << " feet " << inch << " inches";
    }
};

int main() {
    Distance o1, o2, o3;
    o1.set(8, 12);
    o2.set(3, 22);
    o3 = o1.add_distance(o2);
    o3.display();
    return 0;
}
