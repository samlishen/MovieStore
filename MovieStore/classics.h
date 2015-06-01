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
    
    virtual Movie* create() const;
    virtual Movie* create(Director, string, int, int) const;
    
private:
    int month;
};

#endif /* defined(__MovieStore__classics__) */
