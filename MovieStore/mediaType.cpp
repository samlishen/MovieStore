//
//  mediaType.cpp
//  MovieStore
//
//  Created by Shen Li on 15/5/31.
//  Copyright (c) 2015年 Shen Li. All rights reserved.
//

#include "mediaType.h"

MediaType:: MediaType(char ch) {
    type = ch;
    currentCopy = 10;
    maxCopy = 10;
}

MediaType:: MediaType(char ch, int max) {
    type = ch;
    currentCopy = max;
    maxCopy = max;
}

int MediaType:: getStorage() const {
    return currentCopy;
}

bool MediaType:: isEnough(int amount) const {
    return amount <= currentCopy;
}

bool MediaType:: borrowType(int amount) {
    if (currentCopy >= amount) {
        currentCopy -= amount;
        return true;
    } else {
        return false;
    }
}

bool MediaType:: returnType(int amount) {
    if (currentCopy + amount <= maxCopy) {
        currentCopy += amount;
        return true;
    } else {
        return false;
    }
}

bool MediaType:: addTotle(int amount) {
    if (amount >= 0) {
        currentCopy += amount;
        maxCopy += amount;
        return true;
    } else {
        return false;
    }
}