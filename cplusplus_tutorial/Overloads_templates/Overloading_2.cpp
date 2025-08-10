// function template
#include <iostream>
using namespace std;

template <class T>
T sum (T a, T b)
{
  T result;
  result = a + b;
  return result;
}

template <class T, class U>
bool are_equal (T a, U b)
{
  return (a==b);
}

template <class T, int N>
T fixed_multiply (T val)
{
  return val * N;
}


int main () {
    // int i=5, j=6, k;
    // double f=2.0, g=0.5, h;
    // k=sum<int>(i,j);
    // h=sum<double>(f,g);
    // cout << k << '\n';
    // cout << h << '\n';

    if (are_equal(10,10.000))
        // Note that this example uses automatic template parameter 
        // deduction in the call to are_equal:
        // are_equal(10,10.0)
        // It's equivalent to: are_equal<int,double>(10,10.0)

        cout << "x and y are equal\n";
    else
        cout << "x and y are not equal\n";


    int x = 2;
    cout << fixed_multiply<int,2>(10) << '\n';
    // cout << fixed_multiply<int,x>(10) << '\n';
    // above does not work since the value of template parameters is 
    // determined on compile-time to generate a different instantiation of the 
    // function fixed_multiply, and thus the value of that argument is never 
    // passed during runtime. We must use a constant, instead of variable 'x'.

    return 0;
}