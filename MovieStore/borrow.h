//
//  borrow.h
//  MovieStore
//
//  Created by Shen Li on 15/5/22.
//  Copyright (c) 2015年 Shen Li. All rights reserved.
//

#ifndef __MovieStore__borrow__
#define __MovieStore__borrow__

#include "command.h"
#include "movie.h"

class Borrow: public Command {
public:
    Borrow();
    virtual ~Borrow();
    
    virtual Instruction* create(ifstream&) const;
    
    virtual void process() const;
    virtual char getType() const;
    
protected:
    Movie* movie;
};

#endif /* defined(__MovieStore__borrow__) */
