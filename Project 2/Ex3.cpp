#include <iostream>
#include <string>
#include <iomanip> // for formatting

using namespace std;

double getTaxAmount(double taxableIncome) {
    if (taxableIncome <= 15000) {
        return taxableIncome * 0.15;
    }
    else if (taxableIncome <= 40000) {
        return 2250 + (taxableIncome - 15000) * 0.25;
    }
    else {
        return 8460 + (taxableIncome - 40000) * 0.35;
    }
}

void getData(string& maritalStatus, int& children, double& grossSalary, double& pensionPercentage) {
    cout << "Enter marital status (single/married): ";
    cin >> maritalStatus;

    if (maritalStatus == "married") {
        cout << "Enter the number of children under age 14: ";
        cin >> children;
    }
    else {
        children = 0;
    }

    cout << "Enter gross salary: ";
    cin >> grossSalary;

    cout << "Enter the percentage of gross income contributed to a pension fund (0-6): ";
    cin >> pensionPercentage;
}

double calculateTaxableIncome(string maritalStatus, int children, double grossSalary, double pensionPercentage) {
    double standardExemption = (maritalStatus == "single") ? 4000 : 7000;
    double personalExemption = 1500 * (maritalStatus == "married" ? (2 + children) : 1);
    double pensionAmount = (pensionPercentage / 100.0) * grossSalary;

    return grossSalary - (standardExemption + personalExemption + pensionAmount);
}

int main() {
    string maritalStatus;
    int children;
    double grossSalary, pensionPercentage;

    getData(maritalStatus, children, grossSalary, pensionPercentage);

    double taxableIncome = calculateTaxableIncome(maritalStatus, children, grossSalary, pensionPercentage);
    double taxOwed = getTaxAmount(taxableIncome);

    cout << fixed << setprecision(2);
    cout << "Taxable Income: $" << taxableIncome << endl;
    cout << "Federal Tax Owed: $" << taxOwed << endl;

    return 0;
}
