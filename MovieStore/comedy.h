//
//  comedy.h
//  Lab4
//
//  Created by Shih Kuo-Ting on 5/17/15.
//  Copyright (c) 2015 Shih Kuo-Ting. All rights reserved.
//

#ifndef __Lab4__comedy__
#define __Lab4__comedy__

#include <stdio.h>
#include "movie.h"
using  namespace std;
class Comedy:public Movie{
    
public:
    Comedy();
    Comedy(string title,string director, int year);
protected:
    
};
#endif /* defined(__Lab4__comedy__) */
