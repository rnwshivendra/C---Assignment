#include <iostream>
using namespace std;

class Cricket {
public:
    virtual int getTotalOvers() {
        return 0; 
    }
};

class T20Match : public Cricket {
public:
    int getTotalOvers(){
        return 20; 
    }
};

class TestMatch : public Cricket {
public:
    int getTotalOvers(){
        return 90;
    }
};

int main() {
    T20Match t20;
    TestMatch test;

    cout << "Total overs in T20 match: " << t20.getTotalOvers() << endl;
    cout << "Total overs in Test match: " << test.getTotalOvers() << endl;

    return 0;
}
