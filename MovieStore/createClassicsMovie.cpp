//
//  createClassicsMovie.cpp
//  MovieStore
//
//  Created by Shen Li on 15/5/31.
//  Copyright (c) 2015年 Shen Li. All rights reserved.
//

#include "createClassicsMovie.h"

Instruction* CreateClassicsMovie:: create(ifstream&) const {
    CreateClassicsMovie* newInstruction = new CreateClassicsMovie;
    Movie* newMovie = movieFactory.createIt(getType());
    
}