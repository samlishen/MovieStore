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
    
    virtual bool setDirector(Director);
    virtual bool setTitle(string);
    virtual bool setYear(int);
    virtual bool setMediaType(char, int);
    
    virtual bool addMediaType(char, int);
    
    virtual Movie* create() const = 0;
protected:
    Director director;
    string title;
    int year;
    LinkedList<MediaType*> mediaType;
};

#endif /* defined(__MovieStore__movie__) */
