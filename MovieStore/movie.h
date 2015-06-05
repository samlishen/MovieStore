//
//  movie.h
//  MovieStore
//
//  Created by Shen Li on 15/5/31.
//  Copyright (c) 2015年 Shen Li. All rights reserved.
//

#ifndef __MovieStore__movie__
#define __MovieStore__movie__

#include "mediaType.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Movie {
public:
    Movie();
    virtual ~Movie();
    
    virtual int getStorage(char) const;
    virtual bool isEnough(char, int) const;
    virtual bool borrowMovie(char, int);
    virtual bool returnMovie(char, int);
    virtual bool setMediaType(char, int);
    virtual bool addMediaType(char, int);
    
    virtual bool operator < (const Movie&) const = 0;
    virtual bool operator <= (const Movie&) const = 0;
    virtual bool operator == (const Movie&) const = 0;
    virtual bool operator >= (const Movie&) const = 0;
    virtual bool operator > (const Movie&) const = 0;
    virtual char getType() const = 0;
    virtual Movie* create(ifstream&) const = 0;
    
protected:
    string director;
    string title;
    int year;
    HashTable<MediaType> type;
};

#endif /* defined(__MovieStore__movie__) */
