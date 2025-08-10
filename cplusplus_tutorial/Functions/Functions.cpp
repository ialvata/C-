// function example
#include <iostream>
using namespace std;

int addition (int a, int b)
{
  int r;
  r=a+b;
  return r;
}

void printmessage (void)
{
  cout << "I'm a function!\n";
}

// Functions cannot be called before they are declared. That is why, 
// in all the previous examples of functions, the functions were always 
// defined before the main function, which is the function from where the 
// other functions were called. If main were defined before the other 
// functions, this would break the rule that functions shall be declared 
// before being used, and thus would not compile.

void odd (int x); 
// Initial declaration - Now,the function may be better specified after main.
void even (int x);


int main ()
{
    int z,a=5,b=3;
    z = addition (a,b);
    cout << "The result is " << z<<"\n";
    printmessage();// we need the parenthesis to call the function!
    int x = 123;
    int& y = x;
    x = 456;
    cout << "x = " << x <<", y = " << y <<"\n";
    // both x and y now hold the value of 456
    cout << " y = 789 \n";
    y = 789;
    cout << "x = " << x <<", y = " << y <<"\n";
    // both x and y now hold the value of 789

}

void odd (int x)
{
  if ((x%2)!=0) cout << "It is odd.\n";
  else even (x);
}

void even (int x)
{
  if ((x%2)==0) cout << "It is even.\n";
  else odd (x);
}