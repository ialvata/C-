// example: class constructor
#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
  public:
    Rectangle (int,int);
    int area () {return (width*height);}
};

// notice the constructor below: it has no output/returning type, not even void.
// Constructors never return values, they simply initialize the object,
// with a name that matches the class name i.e. Rectangle Rectangle
Rectangle::Rectangle (int a, int b) {
  width = a;
  height = b;
}
// class Rectangle has no member function set_values, and has instead a constructor that 
// performs a similar action: it initializes the values of width and height with the 
// arguments passed to it.
// Constructors cannot be called explicitly as if they were regular member functions. 
// They are only executed once, when a new object of that class is created.


int main () {
  Rectangle rect (3,4);
  Rectangle rectb (5,6);
  cout << "rect area: " << rect.area() << endl;
  cout << "rectb area: " << rectb.area() << endl;
  return 0;
}