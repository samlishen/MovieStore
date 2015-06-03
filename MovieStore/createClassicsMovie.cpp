//
//  createClassicsMovie.cpp
//  MovieStore
//
//  Created by Shen Li on 15/5/31.
//  Copyright (c) 2015年 Shen Li. All rights reserved.
//

#include "createClassicsMovie.h"

Instruction* CreateClassicsMovie:: create(ifstream& infile) const {
    CreateClassicsMovie* newInstruction = new CreateClassicsMovie;
    Movie* newMovie = movieFactory.createIt(getType());
    infile.get();
    string reading;
    getline(infile, <#basic_string<_CharT, _Traits, _Allocator> &__str#>, <#_CharT __dlm#>)
}