// classes and uniform initialization
#include <iostream>
using namespace std;

class Circle {
    double radius;
  public:
    Circle(double r) { radius = r; } //non-default constructor
    double circum() {return 2*radius*3.14159265;}
};

int main () {
  Circle foo (10.0);   // functional form
  Circle bar = 20.0;   // assignment init. // only valid for constructor w/ 1  arg
  Circle baz {30.0};   // uniform init.
  Circle qux = {40.0}; // POD-like

  cout << "foo's circumference: " << foo.circum() << '\n';
  cout << "bar's circumference: " << bar.circum() << '\n';
  cout << "qux's circumference: " << qux.circum() << '\n';
  return 0;
}