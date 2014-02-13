//
//  PQ.h
//  Sedgewick
//
//  Created by Max Boytsov on 31/01/14.
//  Copyright (c) 2014 Max Boytsov. All rights reserved.
//

#ifndef __Sedgewick__PQ__
#define __Sedgewick__PQ__

#include <iostream>

template <class Item>
class PQ {
private:
    Item *pq;
    int N;
    
public:
    PQ(int);
    int empty() const;
    void insert(Item);
    Item getmax();
};

#endif /* defined(__Sedgewick__PQ__) */
