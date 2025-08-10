// example on this
#include <iostream>
using namespace std;

class Dummy {
  public:
    bool isitme (Dummy& param);
};

bool Dummy::isitme (Dummy& param)
// param is going to be a pointer to input arg
{
  cout<<"param address = "<<&param<<"\n";
  cout<<"this = "<<this<<"\n";
  if (&param == this) return true; // true if param is a pointer to parent object
  // this represents a pointer to the object whose member function 
  // is being executed
  else return false;
}

int main () {
  Dummy a;
  Dummy* b = &a; // b is a pointer to a.
  cout<<"b address = "<<&b<<"\n";
  cout<<"a address = "<<&a<<"\n";
  if ( b->isitme(a) ) // param is going to be a pointer to a.
    cout << "yes, &a is b\n";
  return 0;
}