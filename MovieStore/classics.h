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
    Classics(Director, string, int, int);
    virtual ~Classics();
    
    virtual bool operator < (const Movie&) const;
    virtual bool operator <= (const Movie&) const;
    virtual bool operator == (const Movie&) const;
    virtual bool operator >= (const Movie&) const;
    virtual bool operator > (const Movie&) const;
    
    virtual Classics& operator = (const Classics&);
};

#endif /* defined(__MovieStore__classics__) */
