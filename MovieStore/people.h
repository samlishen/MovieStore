//
//  people.h
//  MovieStore
//
//  Created by Shen Li on 15/5/31.
//  Copyright (c) 2015年 Shen Li. All rights reserved.
//

#ifndef __MovieStore__people__
#define __MovieStore__people__

#include <string>
using namespace std;

class People {
public:
    People();
    People(string, string);
    virtual ~People();
    
    virtual string getName() const;
    
    virtual bool operator < (const People&) const;
    virtual bool operator <= (const People&) const;
    virtual bool operator == (const People&) const;
    virtual bool operator >= (const People&) const;
    virtual bool operator > (const People&) const;
    
    virtual People* createIt() const = 0;
    virtual People* createIt(string, string) const = 0;
private:
    string firstName;
    string lastName;
};

#endif /* defined(__MovieStore__people__) */