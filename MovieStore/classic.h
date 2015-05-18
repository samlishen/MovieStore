//
//  classic.h
//  Lab4
//
//  Created by Shih Kuo-Ting on 5/17/15.
//  Copyright (c) 2015 Shih Kuo-Ting. All rights reserved.
//------------------------------------------------------------------------------
//

#ifndef __Lab4__classic__
#define __Lab4__classic__

#include "movie.h"

class Classic : public Movie{
    // Director + Title + Leading Actor + Year
    friend ostream& operator >>(ostream&, const Movie&);

public:
    Classic();
    Classic(string title,string director,int year);
    Classic(const Classic&);
    ~Classic();
    
    bool operator <(const Movie&) const;
    bool operator >(const Movie&) const;
    bool operator ==(const Movie&) const;
    bool operator <=(const Movie&) const;
    bool operator >=(const Movie&) const;
    
private:
    string actor;
};
#endif /* defined(__Lab4__classic__) */
