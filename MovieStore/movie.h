//
//  movie.h
//  Lab4
//
//  Created by Shih Kuo-Ting on 5/17/15.
//  Copyright (c) 2015 Shih Kuo-Ting, Shen Li. All rights reserved.
//------------------------------------------------------------------------------
//

#ifndef __Lab4__movie__
#define __Lab4__movie__

#include <string>
#include "mediaType.h"
#include <map>
using namespace std;
class Movie{
    
public:
    // Constructors & Destructors
    Movie();
    Movie(string, string, int);
    Movie(const Movie&);
    ~Movie();
    
    // Pure virtual comparison
    virtual bool operator<(Movie& m)const = 0;
    virtual bool operator<=(Movie& m)const = 0;
    virtual bool operator>(Movie& m)const = 0;
    virtual bool operator==(Movie& m)const = 0;
    virtual bool operator>=(Movie& m)const = 0;
    
    // Assignment operator override
    virtual Movie& operator = (Movie& m);
    
    // add(string, int): bool
    // Add new copies to media type
    // @para string: type of movie(DVD)
    // @para int: number of copies
    // @return: True if the successfully added; otherwise false
    virtual bool add(string m, int number);
    // remove(string, int): bool
    // remove copies of media type
    // @para string: type of movie
    // @para int: number of copies that needs to be removed
    // @return: True if the successfully removed; otherwise false
    virtual bool remove(string m,int number);
    // getCurrentNumber(string): int
    // @para string: type of movie
    // @return: -1 if type not found; otherwise the number of copies
    virtual int getCurrentNumber(string m)const;
    // getMaxNumber(string): int
    // @para string: type of movie
    // @return -1 if type not found; otherwise the number of max copies
    virtual int getMaxNumber(string m)const;
    // getTotalNumber(): int
    // @return: return number of copies of all types
    virtual int getTotalNumber()const;
    // removeType(string): bool
    // remove media type
    // @para string: type of movie
    // @return: true if successfully removed; otherwise false
    virtual bool removeType(string m);
    // addType(string): bool
    // add new type of media
    // @para string: type of movie
    // @para int: number of copies
    virtual bool addType(string m, int n);
    
    // Setters
    virtual void setDirector(string name);
    virtual void setTitle(string name);
    virtual void setYear(int y);
    
    // Getters
    virtual string getDirector()const;
    virtual string getTitle()const;
    virtual int getYear()const;
    
protected:
    // We will implement a hash table for the final turn in.
    map<string,MediaType*> types;
    
private:
    int year;
    string title;
    string director;
};
#endif /* defined(__Lab4__movie__) */
