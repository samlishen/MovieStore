//
//  main.cpp
//  MovieStore
//------------------------------------------------------------------------------
//
//  Created by Shen Li on 15/5/22.
//  Copyright (c) 2015年 Shen Li. All rights reserved.
//

#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ifstream createMovie("data4movies.txt"), createCustomer("data4customers.txt"), instruction("data4commands.txt ");
    
    if (!createMovie && !createCustomer && !instruction) {
        MovieStore store(createMovie, createCustomer, instruction);
        store.createDepository();
        store.process();
    }
}

