//
//  customer.h
//  MovieStore
//
//  Created by Shen Li on 15/5/31.
//  Copyright (c) 2015年 Shen Li. All rights reserved.
//

#ifndef __MovieStore__customer__
#define __MovieStore__customer__

#include "movie.h"
#include "command.h"
#include <vector>
using namespace std;

class Customer {
public:
    Customer();
    Customer(string, int);
    virtual ~Customer();
    
    int getID() const;
    string getName() const;
    
    bool operator == (const Customer&) const;

    Customer* create() const = 0;
private:
    int ID;
    string name;
    LinkedList<Movie*, string> owned;
    vector<Command*> history;
};

#endif /* defined(__MovieStore__customer__) */
