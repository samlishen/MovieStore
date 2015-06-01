//
//  History.h
//  MovieStore
//
//  Created by Shen Li on 15/5/22.
//  Copyright (c) 2015年 Shen Li. All rights reserved.
//

#ifndef __MovieStore__History__
#define __MovieStore__History__

#include "command.h"

class History: public Command {
public:
    History();
    History(string);
    virtual ~History();
    
    virtual Instruction* create(ifstream&) const;
    
    virtual void process() const;
    virtual char getType() const;
    
private:
    
};

#endif /* defined(__MovieStore__History__) */
