// using
#include <iostream>
using namespace std;

namespace first
{
  int x = 5;
  int y = 10;
}

namespace second
{
  double x = 3.1416;
  double y = 2.7183;
}

namespace third
{
  double x = 3.2;
  double y = 2.8;
  double z = -1.3;
}

int main () {
    using second::x;
    using second::y;
    cout << "x -> " << x << '\n';
    cout << "y -> " << y << '\n';
    cout << "second::x -> " << first::x << '\n';
    cout << "first::y -> " << first::y << '\n';
    using namespace third; 
    // it will not work, since we had already imported the variables x, and y.
    // in the same code block
    cout << "using namespace third;"<< '\n';
    cout << "x -> " << x << '\n';
    cout << "y -> " << y << '\n';
    cout << "z -> " << z << '\n'; 
    // only uses third for z, which hadn't been loaded before.
  return 0;
}