#include <iostream>
#include <array>
using namespace std;

#define WIDTH 5
#define HEIGHT 3

int jimmy [HEIGHT][WIDTH];
int n,m;

void printarray (int arg[][5], int length_n, int length_m) {
  for (int n=0; n<length_n; ++n)
    for (int m=0; m<length_m; m++)
        std::cout << "Array Element ["<<n<<"]["<<m<<"] = "<< arg[n][m] << '\n';
        std::cout << '\n';
}

// void printarray_lib (array<int, > arg) {
// int length_n,length_m;
// length_n = arg.size()/5;
// length_m = 5;
//   for (int n=0; n<length_n; ++n)
//     for (int m=0; m<length_m; m++)
//         std::cout << "Array Element ["<<n<<"]["<<m<<"] = "<< arg[n][m] << '\n';
//         std::cout << '\n';
// }

int main ()
{
  int multidim_1[3][5] = {{2, 4, 6, 8, 10}, {2, 4, 6, 8, 10}};
  int multidim_2[1][5] = {2, 4, 6, 8, 10};
  array<int,3*5> my_array[3][5] = {{2, 4, 6, 8, 10}, {2, 4, 6, 8, 10}};

  printarray (multidim_1,2,5);
  printarray (multidim_2,0,5);
}