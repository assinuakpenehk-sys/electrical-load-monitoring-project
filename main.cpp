#include <iostream>
#include <iomanip>
using namespace std;

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

    float energy() {
        return (power * hours) / 1000;
    }
};

int main() {

    cout << "========== LOAD MONITORING SYSTEM (PART 5) ==========\n\n";

    Appliance appliances[4] = {
        Appliance("Fan", 75, 8),
        Appliance("TV", 120, 5),
        Appliance("Fridge", 200, 10),
        Appliance("Air Conditioner", 1500, 6)
    };

    float tariff;
    cout << "Enter Electricity Tariff (GHc per kWh): ";
    cin >> tariff;

    float totalEnergy = 0;

    cout << "\n-----------------------------------------\n";

    for (int i = 0; i < 4; i++) {
        float e = appliances[i].energy();
        totalEnergy += e;
        cout << appliances[i].name << " Energy: "
             << fixed << setprecision(2) << e << " kWh\n";
    }

    float totalCost = totalEnergy * tariff;

    cout << "-----------------------------------------\n";
    cout << "Total Energy = " << totalEnergy << " kWh\n";
    cout << "Total Cost   = GHc " << totalCost << endl;

    return 0;
}