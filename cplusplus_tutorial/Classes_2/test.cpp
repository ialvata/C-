#include <iostream>


int main() {
int n = 5; 
int &r = n;
int *p = &r;
std::cout <<" *P = "<< *p <<"\n";
std::cout <<" r = "<< r <<"\n";
std::cout <<" &r = "<< &r <<"\n";
std::cout <<" &n = "<< &n <<"\n";
}