//
//  PrintBinary.cpp
//  PrintBinary
//
//  Created by Wei XING on 20/12/2017.
//  Copyright © 2017 Wei XING. All rights reserved.
//

#include "PrintBinary.hpp"
#include <iostream>

void printBinary(const unsigned char val)
{
    for (int i= 7; i>=0; i--)
    {
        /*
         (1<<i)
         
         1000000 64
         0100000 32
         0010000 16
         0001000 8
         0000100 4
         0000010 2
         0000001 1
        */

        if(val & 1 << i)
            std::cout << "1";
        else
            std::cout << "0";
    }
}
