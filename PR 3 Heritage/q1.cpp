#include <iostream>

using namespace std;

class Shape {
public:
    int height;
    int width;

    Shape(int height, int width) {
        this->height = height;
        this->width = width;
    }
};

class Rectangle : public Shape {
    public : 
         Rectangle(int height, int width) : Shape(height, width) {}

         void area() {
         float area = height * width; 
         cout << "Area of the Rectangle: " << area << endl;
    } 
};

class Triangle : public Shape {
public:
    Triangle(int height, int width) : Shape(height, width) {}

    void area() {
        float area = 0.5 * height * width; 
        cout << "Area of the triangle: " << area << endl;
    }
};

int main() {

    Rectangle r(4,5);
    Triangle t(2, 3);

    r.area();
    t.area();

    return 0;
}
