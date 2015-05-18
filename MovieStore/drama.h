//
//  drama.h
//  Lab4
//
//  Created by Shih Kuo-Ting on 5/17/15.
//  Copyright (c) 2015 Shih Kuo-Ting, Shen Li. All rights reserved.
//------------------------------------------------------------------------------
//

#ifndef __Lab4__drama__
#define __Lab4__drama__

#include "movie.h"
using  namespace std;
class Drama : public Movie{
    // Director + Title + Year
    friend ostream& operator >>(ostream&, const Movie&);
    
public:
    // Constructor & destructor
    Drama();
    Drama(string title,string director, int year);
    Drama(const Drama&);
    ~Drama();
    
    // Comparison override
    bool operator <(const Movie&) const;
    bool operator >(const Movie&) const;
    bool operator ==(const Movie&) const;
    bool operator <=(const Movie&) const;
    bool operator >=(const Movie&) const;
protected:
    
};
#endif /* defined(__Lab4__drama__) */
