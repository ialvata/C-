#include <iostream>
#include <array>

// g++ -std=c++2a -o chapter_1/numeric_lim chapter_1/numeric_lim.cpp 

int main(){
    using std::cout, std::endl;
    std::array<int,3> array_var {1,2,3};
    cout << "Array size = " << array_var.size() << "\n";
    cout << "Array element at pos 2 = " << array_var[2] << endl;

}
