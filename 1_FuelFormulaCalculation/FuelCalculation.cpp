
#include <iostream>
#include <fstream>
#include <string>
#include "FuelFunctions.h"


int main()
{
    unsigned int total = 0;
    int line;
    std::ifstream myData;
    myData.open("ChallengeInput_1.txt");

    if (myData.is_open()) {
        while (myData >> line)
        {
            total += calculateFuel(line);
        }
    }
    std::cout << "The total fuel needed is: ";
    std::cout <<  total << std::endl;
}