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
    Instruction(string);
    virtual ~Instruction();
    
    virtual Instruction* create() const = 0;
    virtual Instruction* create(string) const = 0;
    
    virtual void process() const = 0;
    virtual char getType() const = 0;
    
private:
    string original;
};

#endif /* defined(__MovieStore__instruction__) */
