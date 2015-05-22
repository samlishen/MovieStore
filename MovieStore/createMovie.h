//
//  createMovie.h
//  MovieStore
//
//  Created by Shen Li on 15/5/22.
//  Copyright (c) 2015年 Shen Li. All rights reserved.
//

#ifndef __MovieStore__createMovie__
#define __MovieStore__createMovie__

#include "instruction.h"

class CreateMovie:Instruction {
public:
    CreateMovie();
    CreateMovie(string);
    virtual ~CreateMovie();
    
    
private:
    
};

#endif /* defined(__MovieStore__createMovie__) */
