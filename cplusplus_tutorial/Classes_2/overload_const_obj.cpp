// const objects
#include <iostream>
using namespace std;

class MyClass {
    int x;
  public:
    MyClass(int val) : x(val) {}
    const int& get() const {return x;}
};

void print (const MyClass& arg) {
  cout << arg.get() << '\n';
  // arg is a const object, and as such, it can only access const members
// that's why we have the second const in get definition.
}

int main() {
  MyClass foo (10);
  print(foo);

  return 0;
}