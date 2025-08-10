// array of structures
#include <iostream>
#include <string>
#include <sstream>
#include <new>
using namespace std;

struct movies_t {
  string title;
  int year;
};
movies_t * films;
int i;

void printmovie (movies_t movie);

int main ()
{
    string mystr;
    int n;
    cout << "How many movies would you like to save? ";
    cin >> i;
    cin.ignore(); // we must ignore the \n from previous input...
    // Let's assume we inputed 4 and pressed <Enter>, then (cin >> i) submits
    // "4\n". Notice the implicit newline appended to the stream when you 
    // typed Enter: "\n". A newline is always appended to your input when you 
    // select Enter or Return when submitting from a terminal. It is also used 
    // in files for moving toward the next line. The newline is left in the 
    // buffer after the extraction into age until the next I/O operation where 
    // it is either discarded or read. When the flow of control reaches 
    // std::getline(), it will see "\nMr. Whiskers" and the newline at the 
    // beginning will be discarded, but the input operation will stop 
    // immediately. The reason this happens is because the job of 
    // std::getline() is to attempt to read characters and stop when it finds a 
    // newline. So the rest of your input is left in the buffer unread.
    films = new (nothrow) movies_t[i];
    if (films == nullptr)
        cout << "Error: memory could not be allocated";
    else
    {    
        for (n=0; n<i; n++)
        {
            cout << "Enter title: ";
            getline (cin,films[n].title);
            cout << "Enter year: ";
            getline (cin,mystr);
            stringstream(mystr) >> films[n].year;
        }

        cout << "\nYou have entered these movies:\n";
        for (n=0; n<i; n++)
            printmovie (films[n]);
    }
    return 0;
}

void printmovie (movies_t movie)
{
  cout << movie.title;
  cout << " (" << movie.year << ")\n";
}
