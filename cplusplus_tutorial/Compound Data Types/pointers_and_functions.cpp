// pointers as arguments:
#include <iostream>
using namespace std;

void increment_all (int * start, int* stop)
{
  int * current = start;
  while (current != stop) {
    ++(*current);  // increment value pointed
    cout<< "*start from increment = " <<*start<<"\n";
    cout<< "*current from increment = " <<*current<<"\n";
    ++current;     // increment pointer
  }
}

void print_all (const int* start, const int* stop)
{
  const int * current = start;
  while (current != stop) {
    cout<< "*start from print = " <<*start<<"\n";
    cout<< "*current from print = " <<*current<<"\n";
     //++(*current); // if we uncomment this command, we'll get an error.
    // Because start was passed as a constant pointer, we cannot alter its pointed value.
    // error: increment of read-only location ‘* current’ - > a constant is a read-only location
    ++current;     // increment pointer
  }
}

int main ()
{
  int numbers[] = {10,20,30};
  increment_all (numbers,numbers+3); 
  //numbers is an array <=> pointer to 0th position
  print_all (numbers,numbers+3);
  return 0;
}