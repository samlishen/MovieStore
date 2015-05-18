//
//  Main.cpp
//  MovieStore
//
//  Created by Shen Li on 15/5/18.
//  Copyright (c) 2015年 Shen Li. All rights reserved.
//

#include <iostream>
#include <fstream>
#include "movieStore.h"
using namespace std;


int main() {
    ifstream infile("");
    if (!infile) {
        cout << "File cannot be found" << endl;
        return 1;
    }
    
    MovieStore MOVIE;
    
    while (!infile.eof()) {
        string processing;
        getline(infile, processing);
        MOVIE.process(processing);
    }
}