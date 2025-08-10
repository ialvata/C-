// When returning a reference, be careful that the object being referred to 
// does not go out of scope. So it is not legal to return a reference to local var. 
// But you can always return a reference on a static variable.

#include <iostream>
 
using namespace std;

// int& func_1() {
//     int q;
//     q=0;
//     return q; // Compile time error
//     // warning: reference to local variable ‘q’ returned
// }


int& func_2() {
    static int x;
    x=0;
    return x; // Safe, x lives outside this scope
}

int main(){
    cout<< func_2()<< endl;
}