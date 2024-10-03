#include <iostream>
using namespace std;

int main() {
    // Declare constants
    const double cartonCapacity = 3.78;
    const double costPerLiter = 0.38;
    const double profitPerCarton = 0.27;

    // Declare variables
    double totalMilkProduced;
    int cartonsNeeded;
    double totalCost, totalProfit;

    // Prompt the user to enter the total amount of milk produced
    cout << "Enter the total amount of milk produced (in liters): ";
    cin >> totalMilkProduced;

    // Calculate the number of cartons needed
    cartonsNeeded = static_cast<int>(totalMilkProduced / cartonCapacity + 0.5);

    // Calculate the cost of producing milk
    totalCost = totalMilkProduced * costPerLiter;

    // Calculate the profit for producing milk
    totalProfit = cartonsNeeded * profitPerCarton;

    // Output the number of cartons, cost of production, and profit
    cout << "Number of cartons needed: " << cartonsNeeded << endl;
    cout << "Total cost of producing milk: $" << totalCost << endl;
    cout << "Total profit from milk production: $" << totalProfit << endl;

    return 0;
}
