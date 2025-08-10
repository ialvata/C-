#include <iostream>
using namespace std;

namespace first
{
  int x = 5;
}

namespace second
{
  double x = 3.1416;
}
// using and using namespace have validity only in the same block in which 
// they are stated or in the entire source code file if they are used 
// directly in the global scope. For example, it would be possible to first 
// use the objects of one namespace and then those of another one by 
// splitting the code in different blocks.
int main () {
  {
    using namespace first;
    cout << x << '\n';
  }
  {
    using namespace second;
    cout << x << '\n';
  }
  return 0;
}


// It is common to instead see:
// std::cout << "Hello world!";
// Whether the elements in the std namespace are introduced with using 
// declarations or are fully qualified on every use does not change the 
// behavior or efficiency of the resulting program in any way. It is mostly 
// a matter of style preference, although for projects mixing libraries, 
// explicit qualification tends to be preferred.
