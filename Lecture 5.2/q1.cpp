#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int val){
      this->value = val;
    }

    bool operator<(Number num2) const {
        return value < num2.value;
    }

    int getValue(){
        return value;
    }
};

int main() {
    Number num1(9);
    Number num2(8);

    if (num1 < num2) {
        cout << "num2 contains a higher value: " << num2.getValue() << endl;
    } else {
        cout << "num1 contains a higher value: " << num1.getValue() << endl;
    }

    return 0;
}
