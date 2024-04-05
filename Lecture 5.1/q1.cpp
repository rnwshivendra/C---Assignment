#include <iostream>
using namespace std;

class ParentCalculator {
public:
    virtual void calculate() {
        cout << "Error: Insufficient arguments provided." << endl;
    }

    virtual void calculate(int a) {
        cout << "Error: Insufficient arguments provided." << endl;
    }

    virtual void calculate(int a, int b) {
        cout << "Error: Insufficient arguments provided." << endl;
    }

    virtual void calculate(int a, int b, int c) {
        cout << "Error: Insufficient arguments provided." << endl;
    }

    virtual void calculate(int a, int b, int c, int d) {
        cout << "Error: Insufficient arguments provided." << endl;
    }
};

class Calculator : public ParentCalculator {
public:
    void calculate(int a, int b){
        cout << "Division: " << (float)a / b << endl;
    }

    void calculate(int a, int b, int c){
        cout << "Subtraction: " << a - b - c << endl;
    }

    void calculate(int a, int b, int c, int d){
        cout << "Multiplication: " << a * b * c * d << endl;
    }

    void calculate(int a, int b, int c, int d, int e){
        cout << "Addition: " << a + b + c + d + e << endl;
    }
};

int main() {
    Calculator calc;
    calc.calculate(10, 2);         
    calc.calculate(10, 3, 2);      
    calc.calculate(2, 3, 4, 5);     
    calc.calculate(1, 2, 3, 4, 5);

    return 0;
}
