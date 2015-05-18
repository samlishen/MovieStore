//
//  mediaType.h
//  Lab4
//
//  Created by Shih Kuo-Ting on 5/17/15.
//  Copyright (c) 2015 Shih Kuo-Ting. All rights reserved.
//

#ifndef __Lab4__mediaType__
#define __Lab4__mediaType__

#include <stdio.h>
#include <string>
using namespace std;

class MediaType{
    
public:
    MediaType(string n,int number);
    int getTotal()const;
    int getCurrent()const;
    bool outOfStock() const;
    bool borrow();
    bool borrow(int number);
    void add();
    void add(int number);
    
    
private:
    int total;
    int current;
    string name;
    MediaType* next;
    
};
#endif /* defined(__Lab4__mediaType__) */
