//
//  classics.cpp
//  MovieStore
//
//  Created by Shen Li on 15/5/31.
//  Copyright (c) 2015年 Shen Li. All rights reserved.
//

#include "classics.h"

Classics:: Classics() {
    
}

Movie* Classics:: create(ifstream& infile) const {
    Classics* newMovie = new Classics;
    string d, t, f, l;
    int m, y;
    
    infile.get();
    getline(infile, d, ',');
    newMovie->director = d;
    
    infile.get();
    getline(infile, t, ',');
    newMovie->title = t;
    
    infile.get();
    infile >> f >> l;
    infile >> m >> y;
    newMovie->actorFirstName = f;
    newMovie->actorLastName = l;
    newMovie->year = y;
    newMovie->month = m;
    return newMovie;
}
