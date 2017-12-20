//
//  main.cpp
//  PrintBinary
//
//  Created by Wei XING on 20/12/2017.
//  Copyright © 2017 Wei XING. All rights reserved.
//
#include "PrintBinary.hpp"
#include <iostream>
using namespace std;

#define PR(STR, EXPR) \
cout << STR; printBinary(EXPR); cout << endl;

int main(int argc, const char * argv[]) {
    unsigned int getval;
    unsigned char a, b;
    cout << "Enter a number between 0 and 255: ";
    cin >> getval; a = getval;
    cout << "Enter a number between 0 and 255: ";
    cin >> getval; b = getval;
    
    PR("a in binary: ", a);
    PR("b in binary: ", b);
    
    PR("a | b in binary: ", a | b);
    PR("a & b in binary: ", a & b);
    PR("a ^ b in binary: ", a ^ b);
    
    PR("~a in binary: ", ~a);
    PR("~b in binary: ", ~b);
    
    //An interesting bit pattern:
    unsigned char c = 0x5A;
    PR("c in binary: ", c);
    
    a |= c;
    PR("a |= c; a = ", a);
    
    b &= c;
    PR("b &= c; b = ", b);
    
    b ^= a;
    PR("b ^= a; b = ", b);
    
    
    
}
