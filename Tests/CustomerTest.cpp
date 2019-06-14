#include "gtest/gtest.h"
#include "../src/Customer.h"

TEST(CustomerTest, statement) {
    Customer customer("Alexandre");
    customer.addRental(Rental(Movie("Forrest Gump", Movie::REGULAR), 10));
    customer.addRental(Rental(Movie("Lord of the Rings", Movie::CHILDRENS), 42));
    customer.addRental(Rental(Movie("Save Private Ryan", Movie::NEW_RELEASE), 4));
    std::string expected ="Rental Record for Alexandre\n\tForrest Gump\t14\n\tLord of the Rings\t60\n\tSave Private Ryan\t12\n"
                          "Amount owed is 86\nYou earned 4 frequent renter points";
    ASSERT_EQ(customer.statement(), expected);
}