#include <iostream>

namespace name_1::name_2::name_3{
    void foo(){
         std::cout << "Hello, World!" << std::endl;
    }
}
namespace short_name = name_1::name_2::name_3;

int main(){
    name_1::name_2::name_3::foo();
    short_name::foo();

}