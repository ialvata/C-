// i/o example

#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
  int b,p;
  cout << "Please enter an integer value for the base and the power: ";
  cin >> b >> p;
  // cin extraction always considers spaces 
  // (whitespaces, tabs, new-line...) as terminating the 
  // value being extracted, and thus extracting a string means 
  // to always extract a single word, not a phrase or an entire sentence.
  cout << "The base you've entered is " << b
        << "\nthe power you've entered is "<<p;
  cout << "\nand b^p is " << pow(b,p) << ".\n";
  return 0;
}
