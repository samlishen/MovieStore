//
//  movieStore.cpp
//  MovieStore
//
//  Created by Shen Li on 15/5/30.
//  Copyright (c) 2015年 Shen Li. All rights reserved.
//

#include "movieStore.h"

MovieStore:: MovieStore() {
    movies = new BSTree<Movie*>*[MAXTYPE];
    for (int i = 0; i < 26; i++) {
        movies[i] = NULL;
    }
}

void MovieStore:: createMovieDepository(ifstream& infile) {
    while (true) {
        char movieCode;
        infile >> movieCode;
        if (infile.eof()) return;
        Instruction* newInstruction =
        instructionFactory.createIt(movieCode, infile);
        CreateMovie* newCreateMovie = static_cast<CreateMovie*>(newInstruction);
        newCreateMovie->process(movies[newCreateMovie->getTypeIndex()]);
    }
}