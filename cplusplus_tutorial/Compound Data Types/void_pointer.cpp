// increaser
#include <iostream>
using namespace std;

void increase (void* p_input, int psize)
{
    if ( psize == sizeof(char) )
    { 
        char* pchar;
        pchar=(char*)p_input; 
        cout<< "*pchar = "<< *pchar<<"\n";
        // we're creating a char pointer, 
        //that points to same data as p_input
        ++(*pchar); //dereferencing
        cout<< "*pchar = "<< *pchar<<"\n";
        ++(*pchar); //it seems that it follows the abc order.
        cout<< "*pchar = "<< *pchar<<"\n";
        
    }
    else if (psize == sizeof(int) )
    {
        int* pint;
        pint=(int*)p_input;
        // we're creating a int pointer, 
        //that points to same data as p_input
        ++(*pint);
    }
}

int main ()
{
  char a = 'a';
  int b = 1602;
  increase (&a,sizeof(a));
  increase (&b,sizeof(b));
  cout << a << ", " << b << '\n';
  return 0;
}