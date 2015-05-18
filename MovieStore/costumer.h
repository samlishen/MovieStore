//
//  costumer.h
//  MovieStore
//
//  Created by Shen Li on 15/5/18.
//  Copyright (c) 2015年 Shen Li. All rights reserved.
//------------------------------------------------------------------------------
//

#ifndef MovieStore_costumer_h
#define MovieStore_costumer_h

#include "movie.h"
#include <vector>


class Costumer {
public:
    Costumer(int, string);
    bool setID(int)
    int getID() const;
    bool setName(string);
    string getName() const;
    void showHistory() const;
    void addOnHold(Movie*);
    bool retrieveOnHold(Movie*);
    bool operator <(const Costumer&) const;
    bool operator >(const Costumer&) const;
    bool operator ==(const Costumer&) const;
    bool operator <=(const Costumer&) const;
    bool operator >=(const Costumer&) const;
    Costumer& operator =(const Costumer&);
    
private:
    int costumerID;
    string name;
    vector movieHistroy;
    Node* onHold;
    struct Node {
        Movie* movie;
        Node* next;
    };
};

#endif
