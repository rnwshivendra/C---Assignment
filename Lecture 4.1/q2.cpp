#include <iostream>
#include <string.h>

using namespace std;

class P {
public:
    float temperature;
    void set(float temperature) {
        this->temperature = temperature;
    }
};

class Q: public P {
public:
    float toFehrenheit() {
        return (this->temperature * 9 / 5) + 32;
    }
};

class R: public Q {
public:
    float toKelvin() {
        return this->temperature + 273.15;
    }
};

int main() {
    float temperature;
    cout << "Enter temperature in Celsius: ";
    cin >> temperature;

    P p;
    Q q;
    R r;

    p.set(temperature);
    q.set(temperature);
    r.set(temperature);

    cout << "Temperature in Fahrenheit: " << q.toFehrenheit() << endl;
    cout << "Temperature in Kelvin: " << r.toKelvin() << endl;

    return 0;
}