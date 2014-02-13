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
//#include <Eigen/Dense>
#include "point.h"

using namespace std;
//using namespace Eigen;

//struct point { float x; float y; };
//
//float distance(point a, point b)
//{
//    float dx = a.x - b.x, dy = a.y - b.y;
//    return sqrt(dx*dx + dy*dy);
//}

int main(int argc, const char * argv[])
{
    point a; a.x = 0; a.y = 0;
    point b; b.x = 3; b.y = 4;
    float d = distance(a, b);

    cout << d << endl;
    return 0;
//    //float d = 5.2535f % 10;
//        
//    MatrixXi mi(2,2);
//    MatrixXi m2 = MatrixXi::Random(5, 5);
//    
//    mi(1,1) = 5;
//    
//    mi << 1, 2,
//          3, 4;
//    
//    Matrix3d m3i = Eigen::Matrix3d::Constant(123);
//    
//    cout << m2 << endl;
//    
//    MatrixXd m(2,2);
//    m(0,0) = 3;
//    m(1,0) = 2.5;
//    m(0,1) = -1;
//    m(1,1) = m(1,0) + m(0,1);
//    m = m*m;
//    std::cout << m << std::endl;
//    
//    
//    //priority_queue<int> pq;
//    priority_queue < int,
//                     vector<int>,
//                     less<typename vector<int>::value_type>
//                   > pq;
//    
//    
//    pq.push(3);//
//    pq.push(5);
//    pq.push(1);
//    pq.push(8);
//    
//    while ( !pq.empty() ) {
//        cout << pq.top() << endl;
//        pq.pop();
//    }
//    
//    cin.get();
//    
//    Number rnum = randNum();
//    // insert code here...
//    std::cout << rnum << "Hello, World!\n";
//    return 0;
}

