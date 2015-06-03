//
//  customer.cpp
//  MovieStore
//
//  Created by Shen Li on 15/5/31.
//  Copyright (c) 2015年 Shen Li. All rights reserved.
//

#include "customer.h"

Customer:: Customer() {
    
}

Customer:: Customer(string n, int id) {
    ID = id;
    name = n;
}

Customer:: ~Customer() {
    
}

int Customer:: getID() const {
    return ID;
}

string Customer:: getName() const {
    return name;
}

bool Customer:: operator ==(const Customer& that) const {
    return ID == that.ID;
}

Customer* Customer:: create() const {
    return new Customer;
}

Customer* Customer:: create(string n, int id) const{
    return new Customer(n, id);
}