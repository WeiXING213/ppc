//
//  Global2.cpp
//  global
//
//  Created by Wei XING on 20/12/2017.
//  Copyright © 2017 Wei XING. All rights reserved.
//
#include <iostream>
#include <stdio.h>
using namespace std;

extern int globe;
//extern int fs; wrong

void func(){
    globe = 47;
    //fs = 50;
    
    static int i = 0;
    cout << "i = " << ++i << endl;
    //cout << "i = " << ++i << endl;
}
