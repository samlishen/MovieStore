//
//  customer.h
//  MovieStore
//
//  Created by Shen Li on 15/5/31.
//  Copyright (c) 2015年 Shen Li. All rights reserved.
//

#ifndef __MovieStore__customer__
#define __MovieStore__customer__

#include "people.h"
#include "movie.h"
#include "command.h"
#include <vector>
using namespace std;

class Customer : public People {
public:
    Customer();
    Customer(string, int, int);
    virtual ~Customer();
    
    int getID() const;
    
    virtual bool operator < (const People&) const;
    virtual bool operator <= (const People&) const;
    virtual bool operator == (const People&) const;
    virtual bool operator >= (const People&) const;
    virtual bool operator > (const People&) const;
    
    virtual People* createIt() const = 0;
    virtual People* createIt(string, string) const = 0;
private:
    int ID;
    LinkedList<Movie*, string> owned;
    vector<Command*> history;
};

#endif /* defined(__MovieStore__customer__) */
