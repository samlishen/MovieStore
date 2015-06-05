//
//  classics.h
//  MovieStore
//
//  Created by Shen Li on 15/5/31.
//  Copyright (c) 2015年 Shen Li. All rights reserved.
//

#ifndef __MovieStore__classics__
#define __MovieStore__classics__

#include "movie.h"

class Classics : public Movie {
public:
    Classics();
    virtual ~Classics();
    
    virtual bool operator < (const Movie&) const;
    virtual bool operator <= (const Movie&) const;
    virtual bool operator == (const Movie&) const;
    virtual bool operator >= (const Movie&) const;
    virtual bool operator > (const Movie&) const;
    
    virtual Movie* create(ifstream&) const;
    
private:
    string actorFirstName, actorLastName;
    int month;
};

#endif /* defined(__MovieStore__classics__) */
