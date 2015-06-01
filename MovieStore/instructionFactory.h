//
//  instructionFactory.h
//  MovieStore
//
//  Created by Shen Li on 15/5/31.
//  Copyright (c) 2015年 Shen Li. All rights reserved.
//

#ifndef __MovieStore__instructionFactory__
#define __MovieStore__instructionFactory__

#include "instruction.h"

class InstructionFactory {
public:
    InstructionFactory();
    ~InstructionFactory();
    
    Instruction* createIt(char) const;
protected:
    int tableSize = 26;
    Instruction** instructions;
    int hash(char) const;
};

#endif /* defined(__MovieStore__instructionFactory__) */
