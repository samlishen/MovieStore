//
//  command.h
//  MovieStore
//
//  Created by Shen Li on 15/5/22.
//  Copyright (c) 2015年 Shen Li. All rights reserved.
//

#ifndef __MovieStore__command__
#define __MovieStore__command__

#include "instruction.h"
#include "customer.h"

class Command: public Instruction {
public:
    Command();
    Command(string);
    virtual ~Command();
    
private:
    Customer* targetCustomer;
};

#endif /* defined(__MovieStore__command__) */
