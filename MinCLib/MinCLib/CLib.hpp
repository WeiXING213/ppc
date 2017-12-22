//
//  CLib.hpp
//  MinCLib
//
//  Created by Wei XING on 22/12/2017.
//  Copyright © 2017 Wei XING. All rights reserved.
//

#ifndef CLib_hpp
#define CLib_hpp

#include <stdio.h>
typedef struct CStashTag{
    int size;
    int quantity;
    int next;
    unsigned char* storage;
} CStash;

void initialize(CStash* s, int size);
void cleanup(CStash* s);
int add(CStash* s, const void* element);
void* fetch(CStash* s, int index);
int count(CStash* s);
void inflate(CStash* s, int increase);
///

#endif /* CLib_hpp */
