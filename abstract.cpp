#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0; 
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        cout << "Drawing Square" << endl;
    }
};

int main() {
    Circle c;
    Square s;
    Shape *shape1 ;
    shape1= &c;
    Shape *shape2 ;
    shape2= &s;

    shape1->draw();
    shape2->draw();


    return 0;
}