//
//  Date.h
//  MovieStore
//
//  Created by Shen Li on 15/5/18.
//  Copyright (c) 2015年 Shen Li. All rights reserved.
//

#ifndef MovieStore_Date_h
#define MovieStore_Date_h

class Date {
public:
    Date();
    Date(int, int, int);
    Date(const Date&);
    int getDate() const;
    int getYear() const;
    int getMonth() const;
    int getDay() const;
    bool setYear(int);
    bool setMonth(int);
    bool setDay(int);
    bool operator <(const Date&) const;
    bool operator <=(const Date&) const;
    bool operator ==(const Date&) const;
    bool operator >=(const Date&) const;
    bool operator >(const Date&) const;
    Date& operator = (const Date&);
    
private:
    int year;
    int month;
    int day;
};

#endif
