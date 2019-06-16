//
// Created by jaeld on 16.06.2019.
//

#ifndef GEN_LABO5_NEWRELEASESTATE_H
#define GEN_LABO5_NEWRELEASESTATE_H


#include "State.h"

class NewReleaseState : public State {
public:
    void regular(Movie *m);
    void childrens(Movie *m);
    const int getPriceCode();
};


#endif //GEN_LABO5_NEWRELEASESTATE_H
