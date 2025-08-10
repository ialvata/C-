// overloading members on constness
#include <iostream>
using namespace std;


// When an object of a class is qualified as a const object, the access to its data 
// members from outside the class is restricted to read-only, as if all its data 
// members were const for those accessing them from outside the class. Note though, 
// that the constructor is still called and is allowed to initialize and modify 
// these data members.


class MyClass {
    int x;
  public:
    MyClass(int val) : x(val) {}
    const int& get() const {return x;} 
    // returns a const int reference. This function is a const member
    // it seems that we need const on both places.
    int& get() {return x;} // returns an int reference
};

int main() {
  MyClass foo (10);
  const MyClass bar (20);
  foo.get() = 15;         // ok: get() returns int&
// bar.get() = 25;        // not valid: get() returns const int&
  cout <<"foo.get() = "<< foo.get() << '\n';
  cout <<"(const) bar.get() = "<< bar.get() << '\n';
//   The member functions of a const object can only be called if they are 
//   themselves specified as const members; in the example above, member get 
//   (which is not specified as const) cannot be called from bar. 
//   To specify that a member is a const member, the const keyword should follow 
//   the function prototype, after the closing parenthesis for its parameters

  return 0;
}