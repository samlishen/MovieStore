//
//  customer.h
//  MovieStore
//
//  Created by Shen Li on 15/5/18.
//  Copyright (c) 2015年 Shen Li. All rights reserved.
//------------------------------------------------------------------------------
//

#ifndef MovieStore_customer_h
#define MovieStore_customer_h

#include "movie.h"
#include <vector>

class Customer {
    // ID + Name
    friend ostream& operator >>(ostream&, const Movie&);
public:
    // Constructor & Destorctor
    Customer();
    Customer(int, string);
    Customer(const Customer&);
    ~Customer();
    
    // Setters
    bool setID(int);
    bool setName(string);
    
    // Getters
    int getID() const;
    string getName() const;
    
    // showHistory(): void
    // Display rental history
    void showHistory() const;
    // addOnHold(Movie*): bool
    // Add movie to onHold linked list
    // @para Movie*: pointer of the movie
    // @return: true if added; otherwise false
    bool addOnHold(Movie*);
    // retrieveOnHold(Movie*)
    // retrieve the movie
    // @para Movie*: pointer of the movie
    // @return: true if retrieved; otherwise false;
    bool retrieveOnHold(Movie*);
    
    // comparison override
    bool operator <(const Customer&) const;
    bool operator >(const Customer&) const;
    bool operator ==(const Customer&) const;
    bool operator <=(const Customer&) const;
    bool operator >=(const Customer&) const;
    
    // Assignment override
    Customer& operator =(const Customer&);
    
private:
    struct Node {
        Movie* movie;
        Node* next;
    };
    int customerID;
    string name;
    vector<string> movieHistroy;
    Node* onHold;
};

#endif
