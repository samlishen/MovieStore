//
//  BSTree.h
//  MovieStore
//
//  Created by Shen Li on 15/5/31.
//  Copyright (c) 2015年 Shen Li. All rights reserved.
//

#ifndef __MovieStore__BSTree__
#define __MovieStore__BSTree__

template<class T>
class BSTree {
public:
    BSTree();
    ~BSTree();
    
    bool insert(T*);
    T* retrieve(T*);
    bool remove(T*);
    void clear();
    
private:
    struct Node {
        T* data;
        Node* right;
        Node* left;
    };
    Node* root;
};

#endif /* defined(__MovieStore__BSTree__) */
