//
//  classic.h
//  Lab4
//
//  Created by Shih Kuo-Ting on 5/17/15.
//  Copyright (c) 2015 Shih Kuo-Ting. All rights reserved.
//

#ifndef __Lab4__classic__
#define __Lab4__classic__

#include <stdio.h>
#include "movie.h"
class Classic:public Movie{

public:
    Classic();
    Classic(string title,string director,int year,int month);
    int getMonth()const;
    
    
private:
    int month;
    
};
#endif /* defined(__Lab4__classic__) */
