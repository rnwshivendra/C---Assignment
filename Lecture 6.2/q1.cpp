#include <iostream>
using namespace std;


class Shape {
public:
    virtual double calculate() = 0;
};


class Circle : public Shape {
private:
    double radius;

public:

    Circle(double r){
      this->radius = r;
  }

    double calculate(){
        return 3.14 * radius * radius;
    }
};


class Triangle : public Shape {
private:
    double base;
    double height;

public:

    Triangle(double b, double h){
      this->base = b;
      this->height = h;
  }

    double calculate(){
        return 0.5 * base * height;
    }
};


class Rectangle : public Shape {
private:
    double length;
    double width;

public:

    Rectangle(double l, double w){
      this->length = l;
      this->width = w;
  }


    double calculate(){
        return length * width;
    }
};

int main() {

    Circle circle(5);
    Triangle triangle(4, 6);
    Rectangle rectangle(3, 7);


    cout << "Area of Circle: " << circle.calculate() << endl;
    cout << "Area of Triangle: " << triangle.calculate() << endl;
    cout << "Area of Rectangle: " << rectangle.calculate() << endl;

    return 0;
}
