//
//  createComedyMovie.h
//  MovieStore
//
//  Created by Shen Li on 15/5/31.
//  Copyright (c) 2015年 Shen Li. All rights reserved.
//

#ifndef __MovieStore__createComedyMovie__
#define __MovieStore__createComedyMovie__

#include "createMovie.h"

class CreateComedyMovie : public CreateMovie {
public:
    CreateComedyMovie();
    virtual ~CreateComedyMovie();
    
    virtual Instruction* create(ifstream&) const;
    
    virtual char getType() const;
protected:
    int typeIndex = getType() - 'a';
};

#endif /* defined(__MovieStore__createComedyMovie__) */
