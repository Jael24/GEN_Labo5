// Movie.h
#ifndef MOVIE_H
#define MOVIE_H
#include <string>
#include "State.h"

class State;

class Movie {
public:
    Movie( const std::string& title, State* priceCode );

    State* getPriceCode() const;
    std::string getTitle() const;

    void setCurrent(State *s);

    void regular();
    void childrens();
    void newRelease();

private:
    class State *_current;
    std::string _title;
    int _priceCode;
};

#endif // MOVIE_H