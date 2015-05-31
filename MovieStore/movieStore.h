//
//  movieStore.h
//  MovieStore
//
//  Created by Shen Li on 15/5/30.
//  Copyright (c) 2015年 Shen Li. All rights reserved.
//

#ifndef __MovieStore__movieStore__
#define __MovieStore__movieStore__

#include <iostream>
#include <vector>
#include "movie.h"
#include "customer.h"
#include "BSTree.h"
using namespace std;

class MovieStore {
public:
    MovieStore();
    ~MovieStore();
    void createMovieDepository(ifstream&);
    void createCustomerDepository(ifstream&);
    void createInstructionDepository(ifstream&);
    void process();
    
private:
    BSTree* movies[26];
    BSTree<Customer*> customers;
    
};

#endif /* defined(__MovieStore__movieStore__) */
