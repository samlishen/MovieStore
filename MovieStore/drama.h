//
//  drama.h
//  MovieStore
//
//  Created by Shen Li on 15/5/31.
//  Copyright (c) 2015年 Shen Li. All rights reserved.
//

#ifndef __MovieStore__drama__
#define __MovieStore__drama__

#include "movie.h"

class Drama : public Movie {
public:
    Drama();
    Drama(Director, string, int);
    virtual ~Drama();
    
    virtual bool operator < (const Movie&) const;
    virtual bool operator <= (const Movie&) const;
    virtual bool operator == (const Movie&) const;
    virtual bool operator >= (const Movie&) const;
    virtual bool operator > (const Movie&) const;
    
private:
};

#endif /* defined(__MovieStore__drama__) */
