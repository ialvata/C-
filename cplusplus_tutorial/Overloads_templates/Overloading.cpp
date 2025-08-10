// overloading functions
#include <iostream>
using namespace std;

//In C++, two different functions can have the same name if their parameters 
// are different; either because they have a different number of parameters, or 
// because any of their parameters are of a different type. For example:


int operate (int a, int b)
{
  return (a*b);
}

double operate (double a, double b)
{
  return (a/b);
}

template <class SomeType> // class or typename, 
// both are the same in this context
SomeType sum(SomeType a, SomeType b)
{
  return a+b;
}


int main ()
{
  int x=5,y=2;
  double n=5.0,m=2.5;
//   cout << operate (x,y) << '\n';
//   cout << operate (n,m) << '\n';
    cout << sum (x,y) << '\n'; // receives int
    cout << sum (n,m) << '\n'; // receives double
  return 0;
}