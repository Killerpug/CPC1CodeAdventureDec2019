#include "pch.h"
#include "../1_FuelFormulaCalculation/FuelFunctions.h"

TEST(fuelFormula, algorithmTest) {
    EXPECT_EQ(calculateFuel(3), 0);
    EXPECT_EQ(calculateFuel(14), 2);
    EXPECT_EQ(calculateFuel(1969), 654);
    EXPECT_EQ(calculateFuel(100756), 33583);
}

TEST(recursiveFuel, algorithmTest) {
    EXPECT_EQ(recursiveFuel(12), 2);
    EXPECT_EQ(recursiveFuel(14), 2);
    EXPECT_EQ(recursiveFuel(1969), 966);
    EXPECT_EQ(recursiveFuel(100756), 50346);
}