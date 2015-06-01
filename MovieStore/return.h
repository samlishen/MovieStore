//
//  return.h
//  MovieStore
//
//  Created by Shen Li on 15/5/22.
//  Copyright (c) 2015年 Shen Li. All rights reserved.
//

#ifndef __MovieStore__return__
#define __MovieStore__return__

#include "command.h"
#include "movie.h"

class Return: public Command {
public:
    Return();
    Return(string);
    virtual ~Return();
    
    virtual Instruction* create(ifstream&) const;
    
    virtual void process() const;
    virtual char getType() const;
    
private:
    Movie* movie;
};

#endif /* defined(__MovieStore__return__) */
