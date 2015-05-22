//
//  return.h
//  MovieStore
//
//  Created by Shen Li on 15/5/22.
//  Copyright (c) 2015年 Shen Li. All rights reserved.
//

#ifndef __MovieStore__return__
#define __MovieStore__return__

#include "instruction.h"

class Return:Instruction {
public:
    Return();
    Return(string);
    ~Return();
    
    Instruction* create() const;
    Instruction* create(string) const;
    
    void process() const;
    char getType() const;
    
private:
    Movie* movie;
};

#endif /* defined(__MovieStore__return__) */
