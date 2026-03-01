#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

class Appliance {
public:
    string name;
    double power;
    double hours;

    double energy() const {
        return (power * hours) / 1000.0;
    }
};

void clearInput() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int main() {

    cout << "=========== ELECTRICAL LOAD MONITORING SYSTEM (PART 6) ===========" << endl;

    int n;

    cout << "\nEnter number of appliances: ";
    cin >> n;

    while (cin.fail() || n <= 0 || n > 50) {
        cout << "Invalid input. Enter a number between 1 and 50: ";
        clearInput();
        cin >> n;
    }

    Appliance appliances[50];

    for (int i = 0; i < n; i++) {

        cout << "\n--- Appliance " << i + 1 << " ---" << endl;

        cout << "Enter Name: ";
        cin >> appliances[i].name;

        cout << "Enter Power (Watts): ";
        cin >> appliances[i].power;

        while (cin.fail() || appliances[i].power <= 0) {
            cout << "Invalid power. Enter again: ";
            clearInput();
            cin >> appliances[i].power;
        }

        cout << "Enter Usage Hours per Day: ";
        cin >> appliances[i].hours;

        while (cin.fail() || appliances[i].hours < 0 || appliances[i].hours > 24) {
            cout << "Invalid hours (0-24). Enter again: ";
            clearInput();
            cin >> appliances[i].hours;
        }
    }

    double totalEnergy = 0;

    cout << "\n================ ENERGY REPORT ================\n";
    cout << left << setw(20) << "Name"
         << setw(12) << "Power(W)"
         << setw(12) << "Hours"
         << setw(12) << "kWh/day" << endl;

    cout << "------------------------------------------------\n";

    for (int i = 0; i < n; i++) {
        double e = appliances[i].energy();
        totalEnergy += e;

        cout << left << setw(20) << appliances[i].name
             << setw(12) << appliances[i].power
             << setw(12) << appliances[i].hours
             << setw(12) << fixed << setprecision(3) << e
             << endl;
    }

    cout << "------------------------------------------------\n";
    cout << "Total Daily Energy Consumption: "
         << fixed << setprecision(3)
         << totalEnergy << " kWh/day\n";

    cout << "================================================\n";

    return 0;
}