//
//  mediaType.h
//  Lab4
//
//  Created by Shih Kuo-Ting on 5/17/15.
//  Copyright (c) 2015 Shih Kuo-Ting, Shen Li. All rights reserved.
//------------------------------------------------------------------------------
//

#ifndef __Lab4__mediaType__
#define __Lab4__mediaType__

#include <string>
using namespace std;

class MediaType{
    
public:
    // Constructor & Destructor
    MediaType();
    MediaType(string n,int number);
    MediaType(const MediaType&);
    ~MediaType();
    
    // Getters
    int getTotal()const;
    int getCurrent()const;
    string getString() const;
    MediaType* getNext() const;
    
    // Setters
    bool setTotal(int);
    bool setCurrent(int);
    bool setName(string);
    
    // hasNext(): bool
    // @return True if has next; otherwise false;
    bool hasNext() const;
    // outOfStock(): bool
    // @return True if out of stock(current == 0); otherwise false
    bool outOfStock() const;
    // borrow(): bool
    // borrow one of the movie of this TOM
    // @return: True if successfully borrowed; otherwise false
    bool borrow();
    // borrow(int): bool
    // borrow parameter amout of the movie of this TOM
    // @para int: amount that will be borrow.
    // @return: True if successfully borrowed; otherwise false
    bool borrow(int number);
    // add(): bool
    // return one of the movie of this TOM
    // @return: True if successfully returned; otherwise false
    bool add();
    // add(int): bool
    // return parameter amount of the movie of this TOM
    // @para int: amount that will be returned.
    // @return: True if successfully returned; otherwise false
    bool add(int number);
    
    
private:
    int total;
    int current;
    string name;
    MediaType* next;
    
};
#endif /* defined(__Lab4__mediaType__) */
