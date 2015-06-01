//
//  movieFactory.cpp
//  MovieStore
//
//  Created by Shen Li on 15/5/31.
//  Copyright (c) 2015年 Shen Li. All rights reserved.
//

#include "movieFactory.h"

MovieFactory:: MovieFactory() {
    for (int i = 0; i < 26; i++) {
        movies[i] = NULL;
    }
    movies[2] = new Classics();
    movies[3] = new Drama();
    movies[5] = new Comedy();
}

MovieFactory:: ~MovieFactory() {
    for (int i = 0; i < 26; i++) {
        if (movies[i] != NULL) {
            delete movies[i];
            movies[i] = NULL;
        }
    }
}

Movie* MovieFactory:: createIt(char ch) const {
    return movies[hash(ch)]->create();
}

int MovieFactory:: hash(char ch) const {
    return ch - 'a';
}