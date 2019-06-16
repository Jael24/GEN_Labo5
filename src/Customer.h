// Customer.h
#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <string>
#include <vector>
#include <sstream>
#include "Rental.h"

class Customer {
public:
    Customer();
    explicit Customer( const std::string& name );

    void addRental( const Rental& arg );
    std::string getName() const;
    std::string statement();

private:
    double calculateAmount();
    std::string _name;
    std::vector< Rental > _rentals;
    int _frequentRenterPoints;
    std::ostringstream _result;
};

#endif // CUSTOMER_H