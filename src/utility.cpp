#include "offsets.h"

std::string TO_BINARY_STRING(const std::vector<unsigned char>& data)
{
    std::string binaryString;
    for (unsigned char byte : data) {
        // Convert each byte to binary (without leading zeros)
        std::string byteString = std::bitset<8>(byte).to_string();
        size_t firstOne = byteString.find('1');
        if (firstOne != std::string::npos) {
            binaryString += byteString.substr(firstOne); // Remove leading zeros
        }
        else {
            binaryString += "0"; // If byte is zero, add a single zero
        }
    }
    return binaryString;
}
