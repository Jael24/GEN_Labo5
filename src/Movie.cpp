#include "Movie.h"

Movie::Movie( const std::string& title, State* priceCode )
: _title( title ), _current(priceCode) {}

State* Movie::getPriceCode() const {
    return _current;
}

std::string Movie::getTitle() const {
    return _title;
}

void Movie::setCurrent(State *s) {
    _current = s;
}

void Movie::regular() {
    _current->regular(this);
}

void Movie::childrens() {
    _current->childrens(this);
}

void Movie::newRelease() {
    _current->newRelease(this);
}