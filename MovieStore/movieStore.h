//
//  Header.h
//  MovieStore
//
//  Created by Shen Li on 15/5/18.
//  Copyright (c) 2015年 Shen Li. All rights reserved.
//

#ifndef MovieStore_Header_h
#define MovieStore_Header_h

#include "costumer.h"

class MovieStore {
public:
    
private:
    BSTree costumerList;
    struct BSTree {
        BSTree* left;
        BSTree* right;
        Costumer* costumer;
    };
};

#endif
