
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

    float dailyEnergy() {
        return (power * hours) / 1000;
    }

    float weeklyEnergy() {
        return dailyEnergy() * 7;
    }

    float monthlyEnergy() {
        return dailyEnergy() * 30;
    }

    void display() {
        cout << left << setw(20) << name
             << setw(10) << power
             << setw(10) << hours
             << setw(12) << dailyEnergy()
             << setw(12) << weeklyEnergy()
             << setw(12) << monthlyEnergy()
             << endl;
    }
};

int main() {

    cout << "========== LOAD MONITORING SYSTEM (PART 4) ==========\n\n";

    Appliance appliances[3] = {
        Appliance("Fan", 75, 8),
        Appliance("TV", 120, 5),
        Appliance("Fridge", 200, 10)
    };

    cout << left << setw(20) << "Name"
         << setw(10) << "Power"
         << setw(10) << "Hours"
         << setw(12) << "Daily"
         << setw(12) << "Weekly"
         << setw(12) << "Monthly"
         << endl;

    cout << "-------------------------------------------------------------\n";

    for (int i = 0; i < 3; i++) {
        appliances[i].display();
    }

    return 0;
}