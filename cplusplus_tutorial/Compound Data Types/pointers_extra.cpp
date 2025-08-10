#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;
int main()
{
    char v[] = "Hello"; //v=={'H','e','l','l','o','\0'}
    cout<<typeid(v).name()<<"\n"; //  typeinfo
    // to demangle this code, run
    // c++filt -t <code> on the bash
    char* p_char= v;
    char* p_char_2 = &v[1];
    cout<<"p_char: "<<p_char<<"\n";
    // exceptionally, instead of a memory address, 
    // in c++, when passing a char pointer to cout,
    // we get all the values until the end \0 null terminated char array.
    cout<<"p_char_2: "<<p_char_2<<"\n";
    // everything from v[1] to end of the char array.
    cout<<"p_char_2 memory address: "<<(void *)p_char_2<<"\n";
    // we must cast to void *
    cout<<"p_char_2: "<<*p_char_2<<"\n";
}
