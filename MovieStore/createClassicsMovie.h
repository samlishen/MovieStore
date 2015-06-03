//
//  createClassicsMovie.h
//  MovieStore
//
//  Created by Shen Li on 15/5/31.
//  Copyright (c) 2015年 Shen Li. All rights reserved.
//

#ifndef __MovieStore__createClassicsMovie__
#define __MovieStore__createClassicsMovie__

#include "createMovie.h"
#include <fstream>

class CreateClassicsMovie : public CreateMovie {
public:
    CreateClassicsMovie();
    virtual ~CreateClassicsMovie();
    
    virtual Instruction* create(ifstream&) const;
    
    virtual char getType() const;
protected:
    int typeIndex = getType() - 'a';
};

#endif /* defined(__MovieStore__createClassicsMovie__) */
