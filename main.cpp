//Part 3
#include <iostream>
#include <iomanip>
using namespace std;

// Appliance Class Definition
class Appliance {
public:
    string name;
    float power;
    float hours;

    Appliance(string n, float p, float h) {
        name = n;
        power = p;
        hours = h;
    }

    float calculateEnergy() {
        return (power * hours) / 1000;
    }

    void display() {
        cout << left << setw(20) << name
             << setw(10) << power
             << setw(10) << hours
             << setw(10) << calculateEnergy()
             << endl;
    }
};

int main() {

    cout << "====================================================" << endl;
    cout << "           ELECTRICAL LOAD MONITORING SYSTEM        " << endl;
    cout << "====================================================\n" << endl;

    Appliance appliances[5] = {
        Appliance("Fan", 75, 8),
        Appliance("Television", 120, 5),
        Appliance("Refrigerator", 200, 10),
        Appliance("Air Conditioner", 1500, 6),
        Appliance("Microwave", 1000, 1)
    };

    int totalAppliances = 5;
    float totalEnergy = 0;

    cout << left << setw(20) << "Name"
         << setw(10) << "Power(W)"
         << setw(10) << "Hours"
         << setw(10) << "Energy"
         << endl;

    cout << "----------------------------------------------------" << endl;

    for (int i = 0; i < totalAppliances; i++) {
        appliances[i].display();
        totalEnergy += appliances[i].calculateEnergy();
    }

    cout << "\n----------------------------------------------------" << endl;
    cout << "Total Energy Consumption (kWh): " << totalEnergy << endl;
    cout << "----------------------------------------------------" << endl;

    cout << "\nEnergy calculation completed successfully.\n";

    return 0;
}

