//
// Created by jaeld on 16.06.2019.
//

#ifndef GEN_LABO5_CHILDRENSSTATE_H
#define GEN_LABO5_CHILDRENSSTATE_H


#include "State.h"

class ChildrensState : public State {
public:
    void regular(Movie *m);
    void newRelease(Movie *m);
    const int getPriceCode();
    double calculatePrice(int daysRented);
};


#endif //GEN_LABO5_CHILDRENSSTATE_H
