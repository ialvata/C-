#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
  public:
    Rectangle ();
    Rectangle (int,int);
    int area (void) {return (width*height);}
};

// The default constructor is the constructor that takes no parameters,
Rectangle::Rectangle () {
  width = 5;
  height = 5;
}

// Constructor overloading
Rectangle::Rectangle (int a, int b) {
  width = a;
  height = b;
}

int main () {
  Rectangle rect (3,4);
  Rectangle rect_default; //initialised without any input args/params
  cout << "rect area: " << rect.area() << endl;
  cout << "rect_default area: " << rect_default.area() << endl;
  return 0;
}