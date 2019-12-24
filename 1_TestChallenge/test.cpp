#include "pch.h"
#include "../1_FuelFormulaCalculation/FuelFunctions.h"

TEST(fuelFormula, algorithmTest) {
    EXPECT_EQ(calculateFuel(12), 2);
    EXPECT_EQ(calculateFuel(14), 2);
    EXPECT_EQ(calculateFuel(1969), 654);
    EXPECT_EQ(calculateFuel(100756), 33583);
}
