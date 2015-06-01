//
//  createDramaMovie.h
//  MovieStore
//
//  Created by Shen Li on 15/5/31.
//  Copyright (c) 2015年 Shen Li. All rights reserved.
//

#ifndef __MovieStore__createDramaMovie__
#define __MovieStore__createDramaMovie__

#include "createMovie.h"

class CreateDramaMovie : public CreateMovie {
public:
    CreateDramaMovie();
    virtual ~CreateDramaMovie();
    
    virtual Instruction* create(ifstream&) const;
    
    virtual char getType() const;
protected:
    int typeIndex = getType() - 'a';
};

#endif /* defined(__MovieStore__createDramaMovie__) */
