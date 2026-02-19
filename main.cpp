#include <iostream>
#include <iomanip>
using namespace std;

// Appliance Class Definition
class Appliance {
public:
    string name;
    float power;   // Power in watts
    float hours;   // Usage hours per day

    // Constructor
    Appliance(string n, float p, float h) {
        name = n;
        power = p;
        hours = h;
    }

    // Function to calculate energy in kWh
    float calculateEnergy() {
        return (power * hours) / 1000;
    }

    // Function to display appliance details
    void display() {
        cout << "Appliance Name : " << name << endl;
        cout << "Power Rating   : " << power << " W" << endl;
        cout << "Usage Hours    : " << hours << " h" << endl;
        cout << "Energy (kWh)   : " << calculateEnergy() << endl;
        cout << "-----------------------------------" << endl;
    }
};

int main() {

    cout << "=====================================" << endl;
    cout << "  ELECTRICAL LOAD MONITORING SYSTEM  " << endl;
    cout << "=====================================" << endl;

    // Create a test appliance
    Appliance testAppliance("Fan", 75, 8);

    cout << "\nTesting Appliance Object:\n" << endl;
    testAppliance.display();

    cout << "\nSystem Initialized Successfully.\n";

    return 0;
}
