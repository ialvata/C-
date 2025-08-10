// Note that the asterisk (*) used when declaring a pointer only means that it is a 
// pointer (it is part of its type compound specifier), and should not be confused with 
// the dereference operator seen a bit earlier, but which is also written with an 
// asterisk (*). They are simply two different things represented with the same sign.

#include <iostream>
using namespace std;

int main ()
{
  int firstvalue, secondvalue;
  int * mypointer = &firstvalue;
  int * mypointer_2;
  // for variables other than pointers, or arrays, we must use 
  // the address of the variable to initialise the pointer.
  // mypointer points to firstvalue
  *mypointer = 10;
  mypointer = &secondvalue;// mypointer points to secondvalue
  *mypointer = 20;
  mypointer_2 = mypointer;
  // we could have initialised mypointer_2 with
  // int * mypointer_2 = mypointer;
  cout << "firstvalue is " << firstvalue << '\n';
  cout << "secondvalue is " << secondvalue << '\n';
  cout << "mypointer_2 is " << mypointer_2 << '\n';
  return 0;
}