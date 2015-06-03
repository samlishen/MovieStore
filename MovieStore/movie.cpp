//
//  movie.cpp
//  MovieStore
//
//  Created by Shen Li on 15/5/31.
//  Copyright (c) 2015年 Shen Li. All rights reserved.
//

#include "movie.h"

int Movie:: getStorage(char type) const {
    MediaType* temp = mediaType.retrieve(type);
    if (temp == NULL) {
        cout << "Cannot find type!" << endl;
        return 0;
    } else {
        return temp->getStorage();
    }
}

bool Movie:: isEnough(char type, int amount) const {
    MediaType* temp = mediaType.retrieve(type);
    if (temp == NULL) {
        cout << "Cannot find type!" << endl;
        return false;
    } else {
        return temp->isEnough(amount);
    }
}

bool Movie:: borrowMovie(char type, int amount) {
    MediaType* temp = mediaType.retrieve(type);
    if (temp == NULL) {
        cout << "Cannot find type!" << endl;
        return false;
    } else {
        return temp->borrowType(amount);
    }
}

bool Movie:: returnMovie(char type, int amount) {
    MediaType* temp = mediaType.retrieve(type);
    if (temp == NULL) {
        cout << "Cannot find type!" << endl;
        return false;
    } else {
        return temp->returnType(amount);
    }
}

bool Movie:: setDirector(Director director) {
    
}