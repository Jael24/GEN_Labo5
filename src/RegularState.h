//
// Created by jaeld on 16.06.2019.
//

#ifndef GEN_LABO5_REGULARSTATE_H
#define GEN_LABO5_REGULARSTATE_H


#include "State.h"

class RegularState : public State {
public:
    void childrens(Movie *m);
    void newRelease(Movie *m);
    const int getPriceCode();
    double calculatePrice(int daysRented);
};


#endif //GEN_LABO5_REGULARSTATE_H
