#pragma once
#define MIN_MASS 6  /*Minumum mass to add positive fuel*/
/**
* @brief Calculates the raw fuel needed to launch a mass. As long as fuel is a positive value(f>6).
* This is (mass/3) - 2.
*/
int calculateFuel(int mass) {
    return (MIN_MASS < mass) ? (mass / 3) - 2 : 0;
}

/**
* @brief Fuel itself requires fuel just like a module. 
* This formula takes the mass and recursively adds fuel for launching the mass plus the fuel itself.
* It stops when the additional fuel is negative or 0(this is mass <= 6).
*/
int recursiveFuel(int mass) {
    int recursiveTotal = 0;
    int recFuel = 0;
    while (mass > MIN_MASS)                             //mass no longer produces positive fuel
    {
        recFuel = calculateFuel(mass);                  
        mass = recFuel;                                 //Mass of the added fuel
        recursiveTotal += recFuel;
    }
    return recursiveTotal;
}