//
//  movie.h
//  MovieStore
//
//  Created by Shen Li on 15/5/31.
//  Copyright (c) 2015年 Shen Li. All rights reserved.
//

#ifndef __MovieStore__movie__
#define __MovieStore__movie__

#include <string>
#include "director.h"
#include "mediaType.h"
#include "linkedList.h"
using namespace std;

class Movie {
public:
    Movie();
    Movie(Director, string, int);
    virtual ~Movie();
    
    virtual int getStorage() const;
    virtual int getStorage(char) const;
    virtual int isEnough(int) const;
    virtual int isEnough(char, int) const;
    virtual bool borrowMovie(char, int);
    virtual bool returnMovie(char, int);
    
    virtual bool operator < (const Movie&) const = 0;
    virtual bool operator <= (const Movie&) const = 0;
    virtual bool operator == (const Movie&) const = 0;
    virtual bool operator >= (const Movie&) const = 0;
    virtual bool operator > (const Movie&) const = 0;
    
    virtual Movie& operator = (const Movie&);
private:
    Director director;
    string title;
    int year;
    LinkedList<MediaType> mediaType;
};

#endif /* defined(__MovieStore__movie__) */
