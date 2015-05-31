//
//  mediaType.h
//  MovieStore
//
//  Created by Shen Li on 15/5/31.
//  Copyright (c) 2015年 Shen Li. All rights reserved.
//

#ifndef __MovieStore__mediaType__
#define __MovieStore__mediaType__

class MediaType {
public:
    MediaType();
    MediaType(char);
    MediaType(char, int);
    ~MediaType();
    
    int getStorage() const;
    bool isEnough(int) const;
    bool borrowType(int);
    bool returnType(int);
    
private:
    char type;
    int currentCopy;
    int maxCopy;
};

#endif /* defined(__MovieStore__mediaType__) */
