//
//  comedy.h
//  MovieStore
//
//  Created by Shen Li on 15/5/31.
//  Copyright (c) 2015年 Shen Li. All rights reserved.
//

#ifndef __MovieStore__comedy__
#define __MovieStore__comedy__

#include "movie.h"

class Comedy : public Movie {
public:
    Comedy();
    Comedy(Director, string, int);
    virtual ~Comedy();
    
    virtual bool operator < (const Movie&) const;
    virtual bool operator <= (const Movie&) const;
    virtual bool operator == (const Movie&) const;
    virtual bool operator >= (const Movie&) const;
    virtual bool operator > (const Movie&) const;
    
private:
    
};

#endif /* defined(__MovieStore__comedy__) */