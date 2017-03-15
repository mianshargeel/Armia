//
//  Interface_Observer.h
//  ArmyX
//
//  Created by Shargeel  on 12/11/16.
//  Copyright © 2016 Shargeel . All rights reserved.
//

#ifndef Interface_Observer_h
#define Interface_Observer_h

#include <iostream>
#include <set>

class ISubject;

class IObserver {
public:
    virtual ~IObserver() {}
    
    virtual void update() = 0;
    virtual void attachSubject(ISubject* subject) = 0;
    virtual void detachSubject(ISubject* subject) = 0;
    virtual void notifySubject() = 0;
};

#endif /* Interface_Observer_h */
