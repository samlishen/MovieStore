//
//  Header.h
//  MovieStore
//
//  Created by Shen Li on 15/5/18.
//  Copyright (c) 2015年 Shen Li. All rights reserved.
//

#ifndef MovieStore_Header_h
#define MovieStore_Header_h

#include "customer.h"
#include <map>

class MovieStore {
public:
    MovieStore();
    bool process(string);
    bool borrowBook(string);
    bool getCustomer(int, Customer*);
    bool getMovie(string, Movie*);
    bool getStock(Movie*);
    bool returnBook(string);
    bool addNewCustomer(string);
    bool addNewMovie(string);
private:
    struct BSTree {
        BSTree* left;
        BSTree* right;
        Customer* customer;
    };
    struct MovieNode {
        char movieChar;
        map<string, Movie*> movies;
        MovieNode* next;
    };
    BSTree* customers;
    MovieStore* movies;
};

#endif
