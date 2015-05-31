//
//  queue.h
//  MovieStore
//
//  Created by Shen Li on 15/5/31.
//  Copyright (c) 2015年 Shen Li. All rights reserved.
//

#ifndef __MovieStore__queue__
#define __MovieStore__queue__

#include "linkedList.h"

template <class T>
class Queue {
public:
    Queue();
    ~Queue();
    
    bool enqueue(T);
    T* dequeue();
private:
    LinkedList<T> queue;
    int size;
};

#endif /* defined(__MovieStore__queue__) */
