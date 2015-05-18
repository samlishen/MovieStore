//
//  movie.h
//  Lab4
//
//  Created by Shih Kuo-Ting on 5/17/15.
//  Copyright (c) 2015 Shih Kuo-Ting. All rights reserved.
//

#ifndef __Lab4__movie__
#define __Lab4__movie__

#include <string>
#include "mediaType.h"
#include <map>
#include "Date.h"
using namespace std;
class Movie{

public:
    Movie();
    Movie(string, string, Date);
    Movie(const Movie&);
    
    virtual bool operator<(Movie& m)const;
    virtual bool operator<=(Movie& m)const;
    virtual bool operator>(Movie& m)const;
    virtual bool operator==(Movie& m)const;
    virtual bool operator>=(Movie& m)const;
    
    virtual string getInfo()const;
    
    void add(MediaType* m, int number);
    void remove(MediaType* m,int number);
    int getCurrentNumber(MediaType* m)const;
    int getMaxNumber(MediaType* m)const;
    int getTotalNumber()const;
    
    void removeType(MediaType* m);
    void addType(MediaType* m);
    
    void setDirector(string name);
    void setTitle(string name);
    void setYear(int y);
    void setMovieType(string type);
    
    string getDirector()const;
    string getTitle()const;
    int getYear()const;
    string getMovieType()const;
    
    
    
    
protected:
    map<string,MediaType*> types;
    int year;
    string title;
    string director;
    string movieType;
    
};
#endif /* defined(__Lab4__movie__) */
