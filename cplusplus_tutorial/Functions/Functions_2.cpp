#include <iostream>
using namespace std;

void duplicate_by_ref (int& a, int& b, int& c)
{
    // When a variable is passed by reference, what is passed is no 
    // longer a copy, but the variable itself, the variable identified 
    // by the function parameter, becomes somehow associated with 
    // the argument passed to the function, and any modification on 
    // their corresponding local variables within the function are 
    // reflected in the variables passed as arguments in the call.

    a*=2;
    b*=2;
    c*=2;
}

void duplicate_by_value (int a, int b, int c)
{
    // Calling a function with parameters taken by value causes copies 
    // of the values to be made. This is a relatively inexpensive operation 
    // for fundamental types such as int, but if the parameter is of a 
    // large compound type, it may result on certain overhead.

    a*=2;
    b*=2;
    c*=2;
}

int divide (int a, int b=2)// an example of a default value (b=2)
{
    int r;
    r=a/b;
    return (r);
}

int main ()
{
    int x=1, y=3, z=7;
    cout << "x=" << x << ", y=" << y << ", z=" << z;
    cout<<"\nDuplicating by value\n";
    duplicate_by_value (x, y, z);
    cout << "x=" << x << ", y=" << y << ", z=" << z; // no change
    cout<<"\nDuplicating by ref\n";
    duplicate_by_ref (x, y, z);
    cout << "x=" << x << ", y=" << y << ", z=" << z<<"\n"; 
    // values have changed


  return 0;
}