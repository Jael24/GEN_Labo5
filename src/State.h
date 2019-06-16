//
// Created by jaeld on 16.06.2019.
//

#ifndef GEN_LABO5_STATE_H
#define GEN_LABO5_STATE_H


#include "Movie.h"

class Movie;

class State {
public:
    static const int REGULAR = 0;
    static const int NEW_RELEASE = 1;
    static const int CHILDRENS = 2;

    virtual void childrens(Movie *movie);
    virtual void newRelease(Movie *movie);
    virtual void regular(Movie *movie);
    virtual const int getPriceCode();

};

#endif //GEN_LABO5_STATE_H
