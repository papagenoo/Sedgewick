#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <string>

namespace Sedgewick {
    struct Item { std::string name; };

    struct Node
    {
        Item item; Node *next;
        Node (Item x, Node *t)
        { item = x; next = t; }
    };

    typedef Node *Link;
}

#endif // LINKEDLIST_H
