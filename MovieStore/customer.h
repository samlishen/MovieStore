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
public:
    Customer(int, string);
    bool setID(int);
    int getID() const;
    bool setName(string);
    string getName() const;
    void showHistory() const;
    void addOnHold(Movie*);
    bool retrieveOnHold(Movie*);
    bool operator <(const Customer&) const;
    bool operator >(const Customer&) const;
    bool operator ==(const Customer&) const;
    bool operator <=(const Customer&) const;
    bool operator >=(const Customer&) const;
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
