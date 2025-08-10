// classes example
#include <iostream>
using namespace std;

class Rectangle {
    int width, height; // the access specifier is private by default
  public:
    void set_values (int,int);
    int area() {return width*height;}
};

void Rectangle::set_values (int x, int y) {
  width = x;
  height = y;
}

int main () {
  Rectangle rect;
  int n,m;
  cout<<"What value for n? \n";
  cin >> n;
  cout<<"What value for m? \n";
  cin >> m;
  rect.set_values (n,m);
  cout << "area: " << rect.area()<<"\n";
  return 0;
}