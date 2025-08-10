// const objects
#include <iostream>
using namespace std;

class MyClass {
    int x;
  public:
    MyClass(int val) : x(val) {}
    const int& get() const {return x;}
};

// A C++ program can be made easier to read and maintain by using references rather 
// than pointers. A C++ function can return a reference in a similar way as it 
// returns a pointer.
// When a function returns a reference, it returns an implicit pointer to its 
// return value. This way, a function can be used on the left side of an 
// assignment statement.


void print (const MyClass& arg) {
  cout << arg.get() << '\n';
}

int main() {
  MyClass foo (10);
  print(foo);

  return 0;
}