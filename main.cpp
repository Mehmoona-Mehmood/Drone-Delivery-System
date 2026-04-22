#include <iostream>
using namespace std;
int main() { 
    string droneID = "DR-101";
    string packageID = "PKG-55";
    string status;

    cout << "===== Drone Delivery System =====" << endl;

    // Step 1: Drone Assigned
    status = "Drone Assigned";
    cout << "Drone ID: " << droneID << endl;
    cout << "Package ID: " << packageID << endl;
    cout << "Status: " << status << endl;

    // Step 2: In Transit
    status = "In Transit";
    cout << "\nStatus Updated: " << status << endl;
    cout << "Drone is delivering the package..." << endl;

    // Step 3: Delivered
    status = "Delivered";
    cout << "\nStatus Updated: " << status << endl;
    cout << "Package delivered successfully!" << endl;

    return 0;
}