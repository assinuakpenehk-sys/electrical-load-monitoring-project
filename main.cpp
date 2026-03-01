#include <iostream>
#include <fstream>
#include <iomanip>
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

int main() {

    Appliance appliances[4] = {
        {"Fan", 75, 8},
        {"Television", 120, 5},
        {"Refrigerator", 200, 10},
        {"AirConditioner", 1500, 6}
    };

    int n = 4;
    double tariff;

    cout << "Enter Electricity Tariff (GHc per kWh): ";
    cin >> tariff;

    double totalEnergy = 0;

    ofstream file("EnergyReport.txt");

    file << "============================================\n";
    file << "      ELECTRICAL LOAD MONITORING REPORT     \n";
    file << "============================================\n\n";

    file << left << setw(20) << "Name"
         << setw(12) << "Power(W)"
         << setw(12) << "Hours"
         << setw(12) << "kWh/day" << endl;

    file << "--------------------------------------------\n";

    for (int i = 0; i < n; i++) {
        double e = appliances[i].energy();
        totalEnergy += e;

        file << left << setw(20) << appliances[i].name
             << setw(12) << appliances[i].power
             << setw(12) << appliances[i].hours
             << setw(12) << fixed << setprecision(3) << e
             << endl;
    }

    double totalCost = totalEnergy * tariff;

    file << "\n--------------------------------------------\n";
    file << "Total Energy (kWh/day): " << totalEnergy << endl;
    file << "Electricity Tariff: GHc " << tariff << endl;
    file << "Total Daily Cost: GHc " << totalCost << endl;
    file << "============================================\n";

    file.close();

    cout << "\nReport saved successfully as EnergyReport.txt\n";

    return 0;
}
