// more pointers
#include <iostream>
using namespace std;

int main ()
{
  int numbers[5];
  int * p;
  p = numbers;
  *p = 10;
  cout << "address of 1st element of numbers: " << numbers <<"\n";
  cout << "&numbers[0]: " << &numbers[0] <<"\n";
  cout << "p: " << p <<"\n";
  cout << "*p == numbers[0] : " << (*p == numbers[0]) <<"\n";
  p++; // we move up, to the next memory address, i.e. to numbers[1]
  cout << "p: " << p <<"\n"; // an integer has 4 bytes.
  // notice that the memory moved 4 bytes up. 
  // 0,...,9, a,b,c,d,e,f -> hexadecimal reference. 
  // 8 + 4 = c
  *p = 20;
  cout << "numbers[1] == *p : " << (numbers[1] == *p) <<"\n";
  p = &numbers[2];
  cout << "p: " << p <<"\n";
  *p = 30;
  p = numbers + 3;
  cout << "p: " << p <<"\n";
  *p = 40;
  p = numbers;
  *(p+4) = 50;
  for (int n=0; n<5; n++)
    cout << numbers[n] << ", ";
  return 0;
}

// Pointers and arrays support the same set of operations, with the 
// same meaning for both. The main difference being that pointers can 
// be assigned new addresses, while arrays cannot.
// Remember that if an array, its name can be used just like a 
// pointer to its first element.