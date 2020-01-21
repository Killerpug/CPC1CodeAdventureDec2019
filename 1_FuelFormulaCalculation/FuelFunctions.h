#pragma once

/**
* @brief Calculates the raw fuel needed to launch a mass. 
* This is (mass/3) - 2
*/
int calculateFuel(int mass) {
    return (mass / 3) - 2;
}

/**
* @brief Fuel itself requires fuel just like a module. 
* This formula takes the raw fuel mass and recursively adds fuel for launching the fuel itself.
* It stops when the additional fuel is negative or 0.
*/
int recursiveFuel(int recursiveFuel) {
    int recursiveTotal = 0;
    while (recursiveFuel > 0)
    {
        recursiveTotal += recursiveFuel;
        recursiveFuel = calculateFuel(recursiveFuel);
    }
    return recursiveTotal;
}