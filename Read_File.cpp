#include <iostream>
#include <string>
#include <fstream>

int main() {
    std::ifstream file("yourfilename"); // Replace with your actual file name

    if (file.is_open()) { // Corrected function name: is_open()
        std::string container;
        while (std::getline(file, container)) { // Missing closing parenthesis
            std::cout << container << std::endl;
        }
        file.close(); // Placed outside the while loop
    } else {
        std::cerr << "Failed to open the file." << std::endl;
    }

    return 0;
}
