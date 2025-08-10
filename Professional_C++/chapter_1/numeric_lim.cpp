#include <iostream>
#include <limits>

// g++ -std=c++2a -o chapter_1/numeric_lim chapter_1/numeric_lim.cpp 

void print_num_lims(){
    std::cout<< "Max int value "<<std::numeric_limits<int>::max()<<"\n";
    std::cout<< "min float value "<<std::numeric_limits<float>::min()<<"\n";
}

int main(){
    print_num_lims();

}
