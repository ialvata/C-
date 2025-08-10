#include <iostream>
#include <string>
#include <math.h>
#include <vector>

using namespace std;

double power(double x,int y)
{
    return pow(x,y);
}

double sum_of_vector(vector<int> v)
{
    return v[0]+1;
}

void print_square(double x,int y){
    cout << "the power of "<< x <<" to "<<y<<" is "<< power(x,y) <<"!!\n";
}

void print_sum_of_vector(vector<int> v,int cv)
{
    cout<<"sum_of_vector: "<<sum_of_vector(v)<<cv<<"\n";
}

void increment_with_ref()
{
    int v[] {0,1,2,3,4,5};
    int i {0};
    for (auto& element : v) // SUFFIX & means reference TO
    {   
        cout<<v[i]<<"\n";
        ++v[i]; // this changes v[i] and element
        cout<<element<<"\n";
        ++i;

    }
    
}

void increment_with_copy()
{
    int v[] {0,1,2,3,4,5};
    int i {0};
    for (auto element : v)
    {   
        cout<<v[i]<<"\n";
        ++v[i];
        cout<<element<<"\n";
        ++i;

    }
    
}

int count_x(const char* p, char x)
{
    if (p==nullptr)
        return 0;
    int count = 0;
    for (;*p != 0; ++p)
        if (*p == x)
            ++count;
    return count;
}

int main(){
    
    //vector<int> v {1,2,3,4,5,6};
    //char char_vector[6];
    // int* p = &v[3];// p is a pointer
    // int not_pointer = *p;
    // cout<<"value of p: "<<*p<<"\n";
    // cout<<"value of not_pointer: "<<not_pointer<<"\n";
    // cout<<"address of v[3]: "<<&v[3]<<"\n";
    // v[3] = 10;
    // cout<<"value of p: "<<*p<<"\n"; // value is now 10
    // cout<<"value of not_pointer: "<<not_pointer<<"\n";
    // not_pointer = *p;
    // cout<<"value of not_pointer: "<<not_pointer<<"\n";

    // auto b {4};//automatically determines variable type
    // // auto does not seem to work with vectors
    // print_square(3,b);

    // //print_sum_of_vector(v,*p);//passing p's value only, not

    //*****************  For loops ****************************
    // cout<<"increment_with_ref\n";
    // increment_with_ref();
    // cout<<"increment_with_copy\n";
    // increment_with_copy();
    
    char v[] = "Hello";// declaring a char pointer
    string v_2 = "Worlllld";
    char* v_3; // another way of declaring a char pointer
    char* p_char_p = v; // v is already a pointer
    char* p_char = v[1]; //v[i] is not a pointer, so we pass the ref.
    cout<<"p_char: "<<p_char<<"\n";
    // for ( auto element : v+v_2)
    // {
    //     int num {count_x(p_char, element)};
    //     cout<<"Existe(m) "<<num<<" letra(s) "<<element
    //     <<" na palavra "<<v<<"\n";
    // }
    
    
}