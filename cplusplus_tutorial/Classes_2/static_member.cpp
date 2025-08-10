// static members in classes
#include <iostream>
using namespace std;

class Dummy {
  public:
    static int n; // every instance has the same value for n
    Dummy () { n++; }; 
    // default constructor: receives nothing, and increments n
};

int Dummy::n=0; // initialising n with value 0
// static members have the same properties as non-member variables but they 
// enjoy class scope. For that reason, and to avoid them to be declared several 
// times, they cannot be initialized directly in the class, but need to be 
// initialized somewhere outside it. 
// Classes can also have static member functions. These represent the same: members 
// of a class that are common to all object of that class, acting exactly as 
// non-member functions but being accessed like members of the class. Because they 
// are like non-member functions, they cannot access non-static members of the 
// class (neither member variables nor member functions). They neither can use the 
// keyword this.



int main () {
  Dummy a; // this increases n by 1
  Dummy b[5]; // this increases n by 5
  cout <<"value of n, before dynamic memory pointer : "<< a.n << '\n';
  Dummy * c = new Dummy; 
  cout <<"value of n, after dynamic memory pointer : "<< Dummy::n << '\n';
  delete c;
  return 0;
}