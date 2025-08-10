// cin with strings
#include <iostream>
#include <string>
using namespace std;

int main ()
{
    // To get an entire line from cin, there exists a function, 
    // called getline, that takes the stream (cin) as first argument,
    // and the string variable as second. Only carriage return stops cin.
    // you should always use getline to get input in your console programs
    // instead of extracting from cin.
  string mystr,mystr_2;
  cout << "What's your name? ";
  getline (cin, mystr);
  cout << "Hello " << mystr << ".\n";
  cout << "What is your favorite team? ";
  getline (cin, mystr_2);
  cout << "I like " << mystr_2 << " too!\n";
  //return 0;
}