#include <iostream>
using namespace std;

int main() {
    // Declare variables
    double manufacturerSize, actualSize;
    
    // Prompt the user to enter the hard drive size (as per the manufacturer)
    cout << "Enter the hard drive size specified by the manufacturer (in GB): ";
    cin >> manufacturerSize;

    // Calculate the actual storage capacity
    // Manufacturer uses 1 GB = 1,000,000,000 bytes
    // Actual system measures 1 GB = 1,024^3 bytes
    actualSize = manufacturerSize * (1000000000.0 / (1024 * 1024 * 1024));

    // Output the actual storage capacity
    cout << "The actual storage capacity of the hard drive is approximately: " << actualSize << " GB" << endl;

    return 0;
}
