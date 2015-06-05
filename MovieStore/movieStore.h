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
#include <fstream>
#include <vector>
#include "movie.h"
#include "customer.h"
#include "instructionFactory.h"
#include "createMovie.h"
#include "movieFactory.h"
#include "instruction.h"
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
    bool validCode(char) const;
    
private:
    const int MAXTYPE = 26;
    BSTree<Movie*>** movies;
    BSTree<Customer*> customers;
    static InstructionFactory instructionFactory;
};

#endif /* defined(__MovieStore__movieStore__) */
