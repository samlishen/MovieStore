//
//  createClassicsMovie.cpp
//  MovieStore
//
//  Created by Shen Li on 15/5/31.
//  Copyright (c) 2015年 Shen Li. All rights reserved.
//

#include "createClassicsMovie.h"

Instruction* CreateClassicsMovie:: create(ifstream& infile) const {
    Movie* newMovie = movieFactory.createIt(getType(), infile);
    CreateClassicsMovie* newInstruction = new CreateClassicsMovie;
    newInstruction->movie = newMovie;
    return newInstruction;
}

bool CreateClassicsMovie:: process(BSTree<Movie*>* tree) const {
    tree->insert(this->movie);
}

char CreateClassicsMovie:: getType() const {
    return 'C';
}