//
//  Header.h
//  MovieStore
//
//  Created by Shen Li on 15/5/18.
//  Copyright (c) 2015年 Shen Li. All rights reserved.
//------------------------------------------------------------------------------
//

#ifndef MovieStore_Header_h
#define MovieStore_Header_h

#include "customer.h"
#include "movie.h"
#include <map>

class MovieStore {
public:
    // Constructor & Destructor
    MovieStore();
    MovieStore(const MovieStore&);
    ~MovieStore();
    
    // process(string): bool
    // Read the instruaction and pass it to the right method
    // @para string: A instruction
    // @return: True if successfully processed; otherwise false
    bool process(string);
    // borrowBook(string):
    // Borrow a movie
    // @para string: An instruction
    // @return: True if successfully processed; otherwise false
    bool borrowMovie(string);
    // getCustomer(int, Customer*): bool
    // Retrieve a customer by it's id
    // @para int: ID
    // @para Customer*: Will point to the right customer if retrieved
    // @return: True if successfully processed; otherwise false
    bool getCustomer(int, Customer*);
    // getMovie(Movie*, Movie*): bool
    // Retrieve the movie that is == to the first parameter, than set the second
    // parameter pointing to the target
    // @para Movie*: pointer to the movie that we are looking for
    // @para Movie*: pointer to the target if successfully retrieved
    // @return: True if successfully processed; otherwise false
    bool getMovie(Movie*, Movie*);
    // getStock(string, Movie*): bool
    // Check if the second parameter has stock of type of media
    // @para string: type of media
    // @para Movie*: pointer to target object
    // @return: True if there is enought; otherwise false
    bool getStock(string, Movie*);
    // returnMovie(string): bool
    // return the movie that sobody borrow
    // @para string: An instruction
    // @return: True is successfully processed; otherwise false
    bool returnMovie(string);
    // addNewCustomer(string): bool
    // @para string: An instruction
    // @return: True is successfully processed; otherwise false
    bool addNewCustomer(string);
    // addNewCustomer(string): bool
    // @para string: An instruction
    // @return: True is successfully processed; otherwise false
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
