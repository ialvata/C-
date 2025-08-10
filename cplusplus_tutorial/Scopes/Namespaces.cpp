// Namespaces allow us to group named entities that otherwise would 
// have global scope into narrower scopes, giving them namespace scope.
// This allows organizing the elements of programs into 
// different logical scopes referred to by names.

// namespaces
#include <iostream>
using namespace std;

namespace foo
{
  int value() { return 5; }
}

namespace bar
{
  const double pi = 3.1416;
  double value() { return 2*pi; }
}
// Namespaces can be split: Two segments of a code, belonging to the same 
// namespace, can be declared at different times.
namespace foo
{
  const double pi = 3.14159265359;
}
int main () {
  cout << "foo::value() -> " << foo::value() << '\n';
  cout << "bar::value() -> " << bar::value() << '\n';
  cout << "bar::pi -> " << bar::pi << '\n';
  cout << "foo::pi -> " << foo::pi << '\n';
  return 0;
}