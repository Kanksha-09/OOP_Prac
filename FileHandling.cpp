/* File Handling
*/
#include <iostream>
#include <fstream>
#include <string>
int main() {
// Creating an output file
std::ofstream outputFile("example.txt");
// Check if the file is successfully opened
if (!outputFile.is_open()) {
std::cerr << "Error: Could not open the output file.\n";
return 1;
}
// Writing information to the file
outputFile << "Hello, this is a sample text.\n";
outputFile << "12345\n";
outputFile << "3.14\n";
outputFile << "End of file.";
// Closing the output file
outputFile.close();
// Opening the file again as an input file
std::ifstream inputFile("example.txt");
// Check if the file is successfully opened
if (!inputFile.is_open()) {
std::cerr << "Error: Could not open the input file.\n";
return 1;
}
// Reading information from the file
std::cout << "Reading from the file:\n";
std::string line;
while (std::getline(inputFile, line)) {
std::cout << line << "\n";
}
// Closing the input file
inputFile.close();
return 0;
}
