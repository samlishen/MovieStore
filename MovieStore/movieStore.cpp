//
//  movieStore.cpp
//  MovieStore
//
//  Created by Shen Li on 15/5/30.
//  Copyright (c) 2015年 Shen Li. All rights reserved.
//

#include "movieStore.h"

MovieStore:: MovieStore() {
    for (int i = 0; i < 26; i++) {
        movies[i] = NULL;
    }
}

void MovieStore:: createMovieDepository(ifstream& infile) {
    char movieCode;
    infile >> movieCode;
    
}