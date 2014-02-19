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
private:
    char* s;
public:
    String(char*);
    String(const String&);
    virtual ~String();
    String& operator=(const String&);
    String& operator+(const String&) const;
    void Dump(std::ostream& os);
};

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
    delete s;
}

String& String::operator=(const String& str)
{
    if (&str == this) return *this;
    delete s;
    s = new char[strlen(str.s) + 1];
    strcpy(s, str.s);
    return *this;
}

String& String::operator+(const String& s1) const
{
    //char* s2 = new char[strlen(s1.s) + strlen(s) + 1];
    //strcat(s2, s1, s);
}

void String::Dump(std::ostream& os)
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
    String* s1 = new String("Hello");
    String* s2 = new String("Goodby");
    *s2 = *s1;
    delete s1;
    s2->Dump(cout);
    delete s2;

    return 0;

    std::shared_ptr<MyObject> p1(new MyObject);
    std::shared_ptr<MyObject> p2;

    p2 = p1;

    if (p2)
        std::cout << "!1" << std::endl;



    p2 = NULL;
    p1 = NULL;



    std::cout << "end" << std::endl;


    return 0;


    Item x = { "Item name" };
    Link t = new Node(x, t);
    cout << x.name << endl;
    Link next = t->next;
    //Item i = next->item;
    //cout << "!!!" << i.name << endl;

    Point a = { 0, 0 };
    Point b = { 3, 4 };
    float d = distance(a, b);
    cout << "d = " << d << endl;

    cout << "Простые числа:";
    sieve_of_eratosthenes(1000);
    return 0;
}

