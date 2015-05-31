//
//  createCustomer.h
//  MovieStore
//
//  Created by Shen Li on 15/5/27.
//  Copyright (c) 2015年 Shen Li. All rights reserved.
//

#ifndef __MovieStore__createCustomer__
#define __MovieStore__createCustomer__

#include "instruction.h"
#include "customer.h"

class CreateCustomer : public Instruction {
public:
    CreateCustomer();
    CreateCustomer(string);
    virtual ~CreateCustomer();
    
    virtual Instruction* create() const;
    virtual Instruction* create(string) const;
    
    virtual void process() const;
    virtual char getType() const;
    
private:
    Customer* targerCustomer;
};

#endif /* defined(__MovieStore__createCustomer__) */
