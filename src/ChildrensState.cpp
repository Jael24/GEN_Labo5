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

