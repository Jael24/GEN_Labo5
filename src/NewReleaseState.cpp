#include "NewReleaseState.h"
#include "ChildrensState.h"
#include "RegularState.h"

void NewReleaseState::regular(Movie *m) {
    m->setCurrent(new RegularState());
    delete this;
}

void NewReleaseState::childrens(Movie *m) {
    m->setCurrent(new ChildrensState());
    delete this;
}

const int NewReleaseState::getPriceCode() {
    return NEW_RELEASE;
}

double NewReleaseState::calculatePrice(int daysRented) {
    return daysRented * 3.0;
}
