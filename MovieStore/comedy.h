//
//  comedy.h
//  Lab4
//
//  Created by Shih Kuo-Ting on 5/17/15.
//  Copyright (c) 2015 Shih Kuo-Ting, Shen Li. All rights reserved.
//------------------------------------------------------------------------------
//

#ifndef __Lab4__comedy__
#define __Lab4__comedy__

#include "movie.h"

using  namespace std;
class Comedy : public Movie{
    // Director + Title + Year
    friend ostream& operator >>(ostream&, const Movie&);
    
public:
    // Constructor & distructor
    Comedy();
    Comedy(string title,string director, int year);
    Comedy(const Comedy&);
    ~Comedy();
    
    // Comparison operator override
    bool operator <(const Movie&) const;
    bool operator >(const Movie&) const;
    bool operator ==(const Movie&) const;
    bool operator <=(const Movie&) const;
    bool operator >=(const Movie&) const;
    
private:
    
};
#endif /* defined(__Lab4__comedy__) */
