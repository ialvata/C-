#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

class MyString {
    size_t size = 0;
    char* str = nullptr;
    MyString(size_t ssize, const char* s): size(ssize), str(new char[size+1]) {
        std::memcpy(str, s, size + 1);
    }
public:
    MyString(const char* s = ""): MyString(strlen(s), s) {
        cout << "in char* ctor for: " << *this << endl;
    }
    ~MyString() {
        cout << "dtor for: " << *this << endl;
        delete []str;
    }
    MyString(const MyString& s): MyString(s.size ,s.str) {
        cout << "in copy ctor for: " << *this << endl;
    }
    MyString& operator=(const MyString& s) {
        cout << "in copy assignment for: " << *this << " getting assignment of: " << s << endl;
        if(&s != this) {
            delete [] str;
            size = s.size;
            str = new char[size+1];
            std::memcpy(str, s.str, size+1);
        }
        return *this;
    }
    MyString(MyString&& s) noexcept : size(s.size), str(s.str) {
        cout << "in move ctor for: " << *this << endl;
        s.size = 0;
        s.str = nullptr;
    }
    MyString& operator=(MyString&& s) noexcept {
        cout << "in move assignment for: " << *this << " getting assignment of: " << s << endl;
        std::swap(size, s.size);
        std::swap(str, s.str);
        return *this;
    }
    friend std::ostream& operator<<(std::ostream& out, const MyString& s) {
        return out << (s.str? s.str : "(null)") << " (" << (void*)s.str << ")";
    }
};

MyString foo() {
    MyString s1 = "hi";
    MyString s2 = "hello";
    if(rand() % 2)
        return s1;
    else
        return s2;
}

int main() {
    MyString s1 = foo();
    cout << s1 << endl;
    
    MyString s2 = s1;
    cout << s2 << endl;
    
    MyString s3;
    s3 = "bye";
    cout << s3 << endl;
}
