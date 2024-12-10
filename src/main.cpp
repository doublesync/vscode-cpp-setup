#include "helloworld.h"
#include "offsets.h"
#include <iostream>
#include <vector>
#include <string>

int main() {

    std::string binaryString = "1011101";
    int readValue;

    try {
        readValue = ATTRIBUTE_BINARY_TO_INT.at(binaryString);
        std::cout << "Value => " << readValue << std::endl;
    } catch (const std::out_of_range& e) {
        std::cerr << "Could not find " << binaryString << " in the map" << std::endl;
    }
    
    return 0;
}