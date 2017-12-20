//
//  main.cpp
//  global
//
//  Created by Wei XING on 20/12/2017.
//  Copyright © 2017 Wei XING. All rights reserved.
//

#include <iostream>
using namespace std;

int globe;

void func();

static int fs;

int main(int argc, const char * argv[]) {
    globe = 12;
    cout << globe << endl;
    for(int x=0; x < 10; x++)
        func();
    cout << globe << endl;
}
