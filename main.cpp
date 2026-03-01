#include <iostream>
#include <iomanip>
#include <algorithm>
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

bool compareEnergy(const Appliance &a, const Appliance &b) {
    return a.energy() > b.energy();
}

int main() {

    Appliance appliances[5] = {
        {"Fan", 75, 8},
        {"Television", 120, 5},
        {"Refrigerator", 200, 10},
        {"AirConditioner", 1500, 6},
        {"Microwave", 1000, 1}
    };

    int n = 5;

    double maxEnergy = appliances[0].energy();
    double minEnergy = appliances[0].energy();
    string highest = appliances[0].name;
    string lowest = appliances[0].name;

    for (int i = 1; i < n; i++) {
        double e = appliances[i].energy();

        if (e > maxEnergy) {
            maxEnergy = e;
            highest = appliances[i].name;
        }

        if (e < minEnergy) {
            minEnergy = e;
            lowest = appliances[i].name;
        }
    }

    cout << "Highest Energy Appliance: "
         << highest << " (" << maxEnergy << " kWh/day)\n";

    cout << "Lowest Energy Appliance: "
         << lowest << " (" << minEnergy << " kWh/day)\n\n";

    sort(appliances, appliances + n, compareEnergy);

    cout << "======= Appliances Sorted by Energy (Highest to Lowest) =======\n";

    for (int i = 0; i < n; i++) {
        cout << appliances[i].name
             << " -> " << appliances[i].energy()
             << " kWh/day\n";
    }

    return 0;
}