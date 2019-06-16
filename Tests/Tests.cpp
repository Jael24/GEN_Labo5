#include "RegularState.h"
#include "NewReleaseState.h"
#include "ChildrensState.h"
#include "gtest/gtest.h"
#include "../src/Customer.h"

TEST(CustomerTest, statement) {
    Customer customer("Alexandre");
    customer.addRental(Rental(Movie("Forrest Gump", new RegularState()), 10));
    customer.addRental(Rental(Movie("Lord of the Rings", new ChildrensState()), 42));
    customer.addRental(Rental(Movie("Save Private Ryan", new NewReleaseState()), 4));
    std::string expected ="Rental Record for Alexandre\n\tForrest Gump\t14\n\tLord of the Rings\t60\n\tSave Private Ryan\t12\n"
                          "Amount owed is 86\nYou earned 4 frequent renter points";
    ASSERT_EQ(customer.statement(), expected);
}

TEST(StateTest, changeStateTest) {
    Movie MIBInternational("Men in Black: International", new NewReleaseState());
    ASSERT_EQ(MIBInternational.getPriceCode()->getPriceCode(), State::NEW_RELEASE);
    MIBInternational.regular();
    ASSERT_EQ(MIBInternational.getPriceCode()->getPriceCode(), State::REGULAR);
    MIBInternational.childrens();
    ASSERT_EQ(MIBInternational.getPriceCode()->getPriceCode(), State::CHILDRENS);
}

TEST(CustomerTest, calculateAmount) {
    Customer customer("Jael");
    customer.addRental(Rental(Movie("Harry Potter and the Philosopher's Stone", new ChildrensState()), 5));
    customer.addRental(Rental(Movie("Harry Potter and the Chamber of Secrets", new NewReleaseState()), 6));
    customer.addRental(Rental(Movie("Harry Potter and the Prisoner of Azkaban", new RegularState()), 4));

    ASSERT_EQ(customer.calculateAmount(), (4.5 + 18.0 + 5.0));
}

TEST(RentalTest, calculatePrice) {
    Rental rental1(Movie("Goldfinger", new NewReleaseState()), 10);
    Rental rental2(Movie("From Russia with Love", new ChildrensState()), 10);
    Rental rental3(Movie("Dr. No", new RegularState()), 10);

    ASSERT_EQ(rental1.calculatePrice(), 30.0);
    ASSERT_EQ(rental2.calculatePrice(), 12.0);
    ASSERT_EQ(rental3.calculatePrice(), 14.0);
}