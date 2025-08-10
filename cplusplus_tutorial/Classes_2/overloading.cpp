// overloading operators example
#include <iostream>
using namespace std;

class CVector {
  public:
    int x,y;
    CVector () {}; // default constructor
    CVector (int a, int b) : x(a), y(b) {}
    CVector operator + (const CVector&); 
    // we're making operator+ a member function
};

// Logic of 'const type&' input arg:
// -> 'const' prevents from changing the input arg
// -> '&' (passing by reference) makes not copying the input arg into a new 
// variable. It can be more efficient than passing by value.

CVector CVector::operator+ (const CVector& param) {
  CVector temp;
  // for a and b CVector variables,
  // a.operator+ (b) <=> a + b
  // so, x is just a.x, since operator+ is a member function of CVector.
  temp.x = x + param.x;
  cout<<" x of LHS of + = "<< x <<"\n";
  temp.y = y + param.y;
  cout<<" y of LHS of + = "<< y <<"\n";
  return temp;
}

int main () {
  CVector foo (3,0);
  CVector bar (1,2);
  CVector result;
  result = foo + bar;
  cout << result.x << ',' << result.y << '\n';
  return 0;
}