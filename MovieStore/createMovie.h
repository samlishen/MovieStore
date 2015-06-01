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
#include "movieFactory.h"
#include "movie.h"

class CreateMovie : public Instruction {
    
public:
    CreateMovie();
    virtual ~CreateMovie();
    
    virtual Instruction* create(ifstream&) const = 0;
    
    virtual char getType() const = 0;
protected:
    Movie* movie;
    static MovieFactory movieFactory;
};

#endif /* defined(__MovieStore__createMovie__) */
