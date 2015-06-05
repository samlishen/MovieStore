//
//  drama.cpp
//  MovieStore
//
//  Created by Shen Li on 15/5/31.
//  Copyright (c) 2015年 Shen Li. All rights reserved.
//

#include "drama.h"

Movie* Drama:: create(ifstream& infile) const {
    return new Drama;
}