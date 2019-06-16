#include "ChildrensState.h"
#include "NewReleaseState.h"
#include "RegularState.h"

void ChildrensState::regular(Movie *m) {
    m->setCurrent(new RegularState());
    delete this;
}

void ChildrensState::newRelease(Movie *m) {
    m->setCurrent(new NewReleaseState());
    delete this;
}

const int ChildrensState::getPriceCode() {
    return CHILDRENS;
}

double ChildrensState::calculatePrice(int daysRented) {
    double result = 1.5;

    if ( daysRented > 3 )
        result += ( daysRented - 3 ) * 1.5;

    return result;
}

