//
//  Interface_Subject.h
//  ArmyX
//
//  Created by Shargeel  on 12/11/16.
//  Copyright © 2016 Shargeel . All rights reserved.
//

#ifndef Interface_Subject_h
#define Interface_Subject_h

#include <iostream>

class IObserver;

class ISubject {
public:
    virtual ~ISubject() {}
    
    virtual void attach(IObserver* observer) = 0;
    virtual void detach(IObserver* observer) = 0;
    virtual void notify() = 0;
};

#endif /* Interface_Subject_h */
