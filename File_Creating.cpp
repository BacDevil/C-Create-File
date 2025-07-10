#include <iostream>
#include <string>
#include <fstream>
#include <cstdio>

// using namespace std;

int main() {
    std::ofstream file("output");
    if (!file) {
        std::cout << "Unable to open your file for writing";
    } else {
        std::cout << "Nice your file is opened for writing.";
        file << "hello boi i am robo.";
        file.close();
    }
}