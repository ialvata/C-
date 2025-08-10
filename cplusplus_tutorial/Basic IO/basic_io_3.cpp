// stringstreams
#include <iostream>
#include <string>
#include <sstream>

// type called stringstream that allows a string to be treated as a stream,
// and thus allowing extraction or insertion operations from/to strings in
// the same way as they are performed on cin and cout.

using namespace std;

int main ()
{
  string mystr;
  float price=0;
  int quantity=0;

  cout << "Enter price: ";
  getline (cin,mystr);
  stringstream(mystr) >> price;// does not handle £,€,$ symbols...
  cout << "Enter quantity: ";
  getline (cin,mystr);
  stringstream(mystr) >> quantity;
  cout << "Total price: " << price*quantity << endl;
  return 0;
}