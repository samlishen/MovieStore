//
//  movieFactory.h
//  MovieStore
//
//  Created by Shen Li on 15/5/31.
//  Copyright (c) 2015年 Shen Li. All rights reserved.
//

#ifndef __MovieStore__movieFactory__
#define __MovieStore__movieFactory__

#include "movie.h"
#include "comedy.h"
#include "drama.h"
#include "classics.h"

class MovieFactory {
public:
    MovieFactory();
    ~MovieFactory();
    
    Movie* createIt(char) const;
protected:
    int const SIZE = 26;
    Movie** movies;
    Movie* a;
    int hash(char) const;
};

#endif /* defined(__MovieStore__movieFactory__) */
