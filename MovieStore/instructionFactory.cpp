//
//  instructionFactory.cpp
//  MovieStore
//
//  Created by Shen Li on 15/5/31.
//  Copyright (c) 2015年 Shen Li. All rights reserved.
//

#include "instructionFactory.h"
#include "borrow.h"
#include "createClassicsMovie.h"
#include "createDramaMovie.h"
#include "createComedyMovie.h"
#include "history.h"
#include "return.h"

InstructionFactory:: InstructionFactory() {
    instructions = new Instruction*[tableSize];
    for (int i = 0; i < tableSize; i++) {
        instructions[i] = NULL;
    }
    instructions[1] = new Borrow;
    instructions[2] = new CreateClassicsMovie;
    instructions[3] = new CreateDramaMovie;
    instructions[5] = new CreateComedyMovie;
    instructions[7] = new History;
    instructions[17] = new Return;
}

Instruction* InstructionFactory:: createIt(char ch, ifstream& infile) const {
    return instructions[hash(ch)]->create(infile);
}

int InstructionFactory:: hash(char ch) const {
    return ch - 'a';
}