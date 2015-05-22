//
//  borrow.h
//  MovieStore
//
//  Created by Shen Li on 15/5/22.
//  Copyright (c) 2015年 Shen Li. All rights reserved.
//

#ifndef __MovieStore__borrow__
#define __MovieStore__borrow__

#include "instruction.h"

class Borrow:Instruction {
public:
    Borrow();
    Borrow(string);
    ~Borrow();
    
    Instruction* create() const;
    Instruction* create(string) const;
    
    void process() const;
    char getType() const;
    
private:
    Movie* movie;
};

#endif /* defined(__MovieStore__borrow__) */
