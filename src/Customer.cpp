// Customer.cpp
#include <vector>
#include "Customer.h"

using std::ostringstream;
using std::vector;

using namespace std;

string Customer::statement()
{
    double totalAmount = 0;
    _result << "Rental Record for " << getName() << "\n";

    _frequentRenterPoints = _rentals.size();
    totalAmount = calculateAmount();

    // add footer lines
    _result << "Amount owed is " << totalAmount << "\n";
    _result << "You earned " << _frequentRenterPoints
           << " frequent renter points";
    return _result.str();
}

Customer::Customer()
: _frequentRenterPoints(0) {}

Customer::Customer( const std::string& name )
: _name( name ), _frequentRenterPoints(0) {}

void Customer::addRental( const Rental& arg ) {
    _rentals.push_back( arg );
}

std::string Customer::getName() const {
    return _name;
}

double Customer::calculateAmount() {
    double totalAmount = 0;

    for (const auto &rental : _rentals) {
        double thisAmount = rental.calculatePrice();

        if (rental.getMovie().getPriceCode()->getPriceCode() == State::NEW_RELEASE
            && rental.getDaysRented() > 1) {
            ++_frequentRenterPoints;
        }

        // show figures for this rental
        _result << "\t" << rental.getMovie().getTitle() << "\t"
               << thisAmount << "\n";
        totalAmount += thisAmount;
    }

    return totalAmount;
}
