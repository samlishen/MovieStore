//
//  director.h
//  MovieStore
//
//  Created by Shen Li on 15/5/31.
//  Copyright (c) 2015年 Shen Li. All rights reserved.
//

#ifndef __MovieStore__director__
#define __MovieStore__director__

#include "people.h"

class Director : public People {
public:
    Director();
    Director(string, string);
    virtual ~Director();
    
    virtual People* createIt() const;
    virtual People* createIt(string, string) const;
};

#endif /* defined(__MovieStore__director__) */
