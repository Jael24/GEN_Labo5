#include "RegularState.h"
#include "NewReleaseState.h"
#include "ChildrensState.h"

void RegularState::newRelease(Movie *m) {
    m->setCurrent(new NewReleaseState());
    delete this;
}

void RegularState::childrens(Movie *m) {
    m->setCurrent(new ChildrensState());
    delete this;
}

const int RegularState::getPriceCode() {
    return REGULAR;
}

double RegularState::calculatePrice(int daysRented) {
    double result = 2.0;
    if (daysRented > 2) {
        result += (daysRented - 2) * 1.5;
    }

    return result;
}
