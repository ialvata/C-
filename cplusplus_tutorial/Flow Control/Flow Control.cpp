// after compilation, run: ./"Flow Control"/"Flow Control"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main ()
{
    // int n = 10;

    // while (n>0) {
    //     cout << n << ", ";
    //     --n;
    // }
    // cout << "liftoff!\n";

    // string str;
    // do {
    //     cout << "Enter text: (to exit, type 'goodbye')";
    //     getline (cin,str);
    //     cout << "You entered: " << str << '\n';
    // } while (str != "goodbye");

    // for (int n=10; n>0; n--) {
    //     cout << n << ", ";
    // }
    //     cout << "liftoff!\n";
    
    // for (int n=0, i=10; n!=i; ++n, --i)
    // {
    //     cout<< "n = "<<n<<" i= "<<i<<"\n";
    // }

    // string str {"Hello!"};
    // for (char c : str) // 'auto c' would also work
    // {
    //     cout << "[" << c << "]";
    // }
    //     cout << '\n';

    // for (int n=10; ; n--) 
    // // no condition: none of the 
    // // 3 elements are mandatory
    // {
    //     cout << n << ", ";
    //     if (n==2)
    //     {
    //         cout << "countdown aborted!";
    //         break;
    //     }
    // }

    // for (int n=10; n>0; n--) {
    //     if (n==5) continue; 
    //     // continue -> to the start of the following iteration
    //     cout << n << ", ";
    // }
    //     cout << "liftoff!\n";

    // unconditional jump with goto statement
    // int n=10;
    // mylabel: // we're labelling this line
    // cout << n << ", ";
    // n--;
    // if (n>0) 
    //     goto mylabel; // jump to line labelled 'mylabel'
    // cout << "liftoff!\n";

    string x;
    int num;
    cout << "Enter a number: ";
    getline(cin,x);
    stringstream(x) >> num;
    switch (num) {
    case 1: // in case x==1, and will run all cases below until default
    cout << "Case 1\n";
    case 2: // in case x==2, and will run all cases below until default
    cout << "Case 2\n";
    case 12:// in case x==12
    cout << "x is 1, 2 or 3\n";
    break;
    default:
    cout << "x is not 1, 2 nor 3";
    }

}