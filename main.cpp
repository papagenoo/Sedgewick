#include <iostream>
#include "point.h"
#include "sieve_of_eratosthenes.h"
#include "linkedlist.h"

using std::cout;
using std::endl;

using Sedgewick::Point;
using Sedgewick::sieve_of_eratosthenes;
using Sedgewick::Item;
using Sedgewick::Node;
using Sedgewick::Link;

class String {
    friend std::ostream& operator<<(std::ostream& os, const String s);
private:
    char* s;
public:
    String(char*);
    String(const String&);
    virtual ~String();
    String& operator=(const String&);
    String operator+(const String&) const;
    operator long() const;
    operator const char*() const;
    operator char*();
    void Dump(std::ostream& os) const;
};

std::ostream& operator<<(std::ostream& os, const String s)
{
    os << s.s;
    return os;
}

String::operator long() const
{
    return atoi(this->s);
}

String::String(char *str) : s(NULL)
{
    if (str == NULL) {
        s = new char[1];
        *s = '\0';
    } else {
        s = new char[strlen(str) + 1];
        strcpy(s, str);
    }
}

String::String(const String& str) : s(NULL)
{
    s = new char[strlen(str.s) + 1];
    strcpy(s, str.s);
}

String::~String()
{
    delete[] s;
}

String& String::operator=(const String& str)
{
    if (&str == this) return *this;
    delete[] s;
    s = new char[strlen(str.s) + 1];
    strcpy(s, str.s);
    return *this;
}

String String::operator+(const String& s1) const
{
    char* s2 = new char[strlen(s1.s) + strlen(s) + 1];
    try {
        strcpy(s2, s);
        strcat(s2, s1.s);
        String newStr(s2);
        delete[] s2;
        return newStr;
    } catch (...) {
        delete[] s2;
        throw;
    }

}

inline String::operator const char*() const
{
    return s;
}

inline String::operator char*()
{
    char* s1 = new char[2];
    s1[0] = '1';
    s1[1] = '\0';
    return s1;
}

void String::Dump(std::ostream& os) const
{
    os << "@:\"" << s << "\"";
}

class MyObject {
public:
    ~MyObject()
    {
        std::cout << "!!!! delete" << std::endl;
    }
};

int main()
{
//    String s1("Hello");
//    String s2("Goodby");
//    String s3 = s1 + s2;
//    s3.Dump(cout);
//    return 0;

    String* s1 = new String("Hello");
    String* s2 = new String("Goodby");
    String s3 = *s1 + *s2;
    std::cout << s3;
    //s3.Dump(cout);
    *s2 = *s1;
    delete s1;
    //s2->Dump(cout);
    delete s2;

    String s4("123");
    long l = (long)s4;
    std::cout << "> " << l << ";" << std::endl;

    const char* cstr1 = (const char*)s4;

//    cout << ":" << s4 << endl;
    cout << ":" << cstr1;
//    cout << endl;

    return 0;

//    std::shared_ptr<MyObject> p1(new MyObject);
//    std::shared_ptr<MyObject> p2;

//    p2 = p1;

//    if (p2)
//        std::cout << "!1" << std::endl;



//    p2 = NULL;
//    p1 = NULL;



//    std::cout << "end" << std::endl;


//    return 0;


//    Item x = { "Item name" };
//    Link t = new Node(x, t);
//    cout << x.name << endl;
//    Link next = t->next;
//    //Item i = next->item;
//    //cout << "!!!" << i.name << endl;

//    Point a = { 0, 0 };
//    Point b = { 3, 4 };
//    float d = distance(a, b);
//    cout << "d = " << d << endl;

//    cout << "Простые числа:";
//    sieve_of_eratosthenes(1000);
//    return 0;
}

