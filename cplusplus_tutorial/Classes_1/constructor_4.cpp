// member initialization
#include <iostream>
using namespace std;

class Circle {
    double radius;
  public:
    Circle(double r);
    double area() {return radius*radius*3.14159265;}
};

Circle::Circle(double r)
{
    radius = r; 
}


class Cylinder {
    Circle base;
    double height;
  public:
    Cylinder(double r, double h) : base(r) {height = h;}
    // We cannot have  Cylinder(double r, double h) { Circle base (r); height = h;}
    // nor Cylinder(double r, double h) { Circle base; height = h;}
    // since Circle has no default constructor
    // Because objects of class Circle can only be constructed with a parameter, Cylinder's constructor 
    // needs to call base's constructor, and the only way to do this is in the member initializer list.
    
    double volume() {return base.area() * height;}
};

int main () {
  Cylinder foo (10,20);

  cout << "foo's volume: " << foo.volume() << '\n';
  return 0;
}
