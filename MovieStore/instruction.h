//
//  instruction.h
//  MovieStore
//
//  Created by Shen Li on 15/5/22.
//  Copyright (c) 2015年 Shen Li. All rights reserved.
//

#ifndef __MovieStore__instruction__
#define __MovieStore__instruction__

#include <string>
using namespace std;

class Instruction {
public:
    Instruction();
    virtual ~Instruction();
    
    virtual Instruction* create(ifstream&) const = 0;
    
protected:
    string original;
};

#endif /* defined(__MovieStore__instruction__) */
