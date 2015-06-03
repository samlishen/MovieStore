//
//  linkedList.h
//  MovieStore
//
//  Created by Shen Li on 15/5/31.
//  Copyright (c) 2015年 Shen Li. All rights reserved.
//

#ifndef __MovieStore__linkedList__
#define __MovieStore__linkedList__

#include "linkedList.h"

template <class T, class K>
class LinkedList {
public:
    LinkedList();
    ~LinkedList();
    
    bool insert(T&);
    T& retrieve(K) const;
    bool remove(K);
    void clear();
private:
    struct Node {
        T* data;
        Node* next;
    };
    Node* head;
};

#endif /* defined(__MovieStore__linkedList__) */
