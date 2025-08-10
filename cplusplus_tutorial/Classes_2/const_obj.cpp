// constructor on const object
#include <iostream>
using namespace std;

class MyClass {
  public:
    int x;
    MyClass(int val) : x(val) {}
    int get() {return x;}
    // The member functions of a const object can only be called if they are 
    // themselves specified as const members; in the example above, member 
    // get (which is not specified as const) cannot be called from foo. 
    // int get() const {return x;} // uncomment this line for get to 
    // be a const member
};

int main() {
  const MyClass foo(10);
// foo.x = 20;            // not valid: x cannot be modified
  cout << foo.x << '\n';  // ok: data member x can be read
  return 0;
}