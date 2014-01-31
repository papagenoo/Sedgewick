//
//  main.cpp
//  Sedgewick
//
//  Created by Max Boytsov on 30/01/14.
//  Copyright (c) 2014 Max Boytsov. All rights reserved.
//

#include <iostream>
#include <queue>
#include "Number.h"

using namespace std;

int main(int argc, const char * argv[])
{
    //priority_queue<int> pq;
    priority_queue < int,
                     vector<int>,
                     less<typename vector<int>::value_type>
                   > pq;
    
    
    pq.push(3);
    pq.push(5);
    pq.push(1);
    pq.push(8);
    
    while ( !pq.empty() ) {
        cout << pq.top() << endl;
        pq.pop();
    }
    
    cin.get();
    
    Number rnum = randNum();
    // insert code here...
    std::cout << rnum << "Hello, World!\n";
    return 0;
}

