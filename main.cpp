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

int main()
{
    Item x = { "Item name" };
    Link t = new Node(x, t);
    cout << x.name << endl;
    Link next = t->next;
    Item i = next->item;
    cout << "!!!" << i.name << endl;

    Point a = { 0, 0 };
    Point b = { 3, 4 };
    float d = distance(a, b);
    cout << "d = " << d << endl;

    cout << "Простые числа:";
    sieve_of_eratosthenes(1000);
    return 0;
}

