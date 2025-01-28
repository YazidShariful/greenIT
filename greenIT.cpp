#include <iostream>
#include <string>
using namespace std;

// Function prototypes
void energyConsumptionCalculator();
void carbonFootprintEstimator();
void deviceLifespanExtenderTools();
void eWasteCalculator();

int main() {
    int choice;

    // Menu
    cout << "Welcome to the Green IT Interactive Program!" << endl;
    cout << "Please choose one of the following options:" << endl;
    cout << "1. Energy Consumption Calculator" << endl;
    cout << "2. Carbon Footprint Estimator" << endl;
    cout << "3. Device Lifespan Extender Tools" << endl;
    cout << "4. E-Waste Calculator" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    // Handle user choice
    switch (choice) {
        case 1:
            energyConsumptionCalculator();
            break;
        case 2:
            carbonFootprintEstimator();
            break;
        case 3:
            deviceLifespanExtenderTools();
            break;
        case 4:
            eWasteCalculator();
            break;
        default:
            cout << "Invalid choice. Please restart the program and try again." << endl;
    }

    return 0;
}

// Function for Energy Consumption Calculator
void energyConsumptionCalculator() {
    int deviceChoice;
    double usageHours, powerRating, energyConsumed;
    string level, tips;

    cout << "\n[Energy Consumption Calculator]" << endl;
    cout << "Select your device category:" << endl;
    cout << "1. Smartphone" << endl;
    cout << "2. Laptop" << endl;
    cout << "3. Desktop Computer" << endl;
    cout << "4. Air Conditioner" << endl;
    cout << "5. Television" << endl;
    cout << "Enter your choice: ";
    cin >> deviceChoice;

    // Assign power rating based on device category
    switch (deviceChoice) {
        case 1:
            powerRating = 5;  // Smartphone: 5 watts
            break;
        case 2:
            powerRating = 50; // Laptop: 50 watts
            break;
        case 3:
            powerRating = 200; // Desktop Computer: 200 watts
            break;
        case 4:
            powerRating = 1500; // Air Conditioner: 1500 watts
            break;
        case 5:
            powerRating = 100; // Television: 100 watts
            break;
        default:
            cout << "Invalid device choice. Returning to menu." << endl;
            return;
    }

    cout << "Enter usage hours per day: ";
    cin >> usageHours;

    // Calculate total energy consumed
    energyConsumed = (usageHours * powerRating) / 1000; // Convert to kWh

    // Determine energy level and tips
    if (energyConsumed <= 2.0) {
        level = "Low";
        tips = "Great job! Keep using energy-saving modes and unplugging devices when not in use.";
    } else if (energyConsumed <= 5.0) {
        level = "Medium";
        tips = "Try reducing usage hours or switching to energy-efficient devices.";
    } else {
        level = "High";
        tips = "Consider investing in energy-efficient appliances and minimizing usage time.";
    }

    // Output results
    cout << "Total energy consumed: " << energyConsumed << " kWh" << endl;
    cout << "Energy level: " << level << endl;
    cout << "Tips: " << tips << endl;
}

// Function for Carbon Footprint Estimator
void carbonFootprintEstimator() {
    int numDevices;
    double energyUsage, usageFrequency, totalCO2;
    string level, tips;

    cout << "\n[Carbon Footprint Estimator]" << endl;
    cout << "Enter the number of devices owned: ";
    cin >> numDevices;
    cout << "Enter energy usage per device (kWh): ";
    cin >> energyUsage;
    cout << "Enter usage frequency (hours/day): ";
    cin >> usageFrequency;

    // Calculate total CO2 emissions (Assume 0.5 kg CO2 per kWh)
    totalCO2 = numDevices * energyUsage * usageFrequency * 0.5;

    // Determine emission level and tips
    if (totalCO2 <= 10.0) {
        level = "Low";
        tips = "You're doing great! Keep optimizing your device usage.";
    } else if (totalCO2 <= 30.0) {
        level = "Medium";
        tips = "Consider reducing device usage or switching to renewable energy.";
    } else {
        level = "High";
        tips = "Focus on reducing device energy consumption and unplugging unused electronics.";
    }

    // Output results
    cout << "Total carbon emissions: " << totalCO2 << " kg CO2" << endl;
    cout << "Emission level: " << level << endl;
    cout << "Tips: " << tips << endl;
}

// Function for Device Lifespan Extender Tools
void deviceLifespanExtenderTools() {
    string deviceType, usagePattern, maintenanceHabits;
    string tips;

    cout << "\n[Device Lifespan Extender Tools]" << endl;
    cout << "Enter device type: ";
    cin >> deviceType;
    cout << "Enter usage pattern (light/moderate/heavy): ";
    cin >> usagePattern;
    cout << "Enter maintenance habits (good/average/poor): ";
    cin >> maintenanceHabits;

    // Generate tips based on input
    if (usagePattern == "heavy" || maintenanceHabits == "poor") {
        tips = "Reduce overuse, clean the device regularly, and ensure proper ventilation.";
    } else if (usagePattern == "moderate" && maintenanceHabits == "average") {
        tips = "Schedule periodic maintenance and avoid running multiple heavy tasks simultaneously.";
    } else {
        tips = "Keep up the good work! Continue maintaining your device and using it responsibly.";
    }

    // Output results
    cout << "Tips to extend the lifespan of your " << deviceType << ": " << tips << endl;
}

// Function for E-Waste Calculator
void eWasteCalculator() {
    int numDevices;
    string deviceType;
    double eWasteGenerated, recoverableMaterials, hazardousMaterials;
    string tips;

    cout << "\n[E-Waste Calculator]" << endl;
    cout << "Enter the number of devices owned: ";
    cin >> numDevices;
    cout << "Enter device type: ";
    cin >> deviceType;

    // Calculate estimated e-waste and materials (Assume sample values)
    eWasteGenerated = numDevices * 1.5; // Assume 1.5 kg per device
    recoverableMaterials = eWasteGenerated * 0.6; // 60% recyclable
    hazardousMaterials = eWasteGenerated * 0.1; // 10% hazardous

    // General tips for reducing e-waste
    tips = "Recycle old devices, donate functional electronics, and avoid unnecessary upgrades.";

    // Output results
    cout << "Estimated e-waste generated: " << eWasteGenerated << " kg" << endl;
    cout << "Estimated recoverable materials: " << recoverableMaterials << " kg" << endl;
    cout << "Estimated hazardous materials: " << hazardousMaterials << " kg" << endl;
    cout << "Tips: " << tips << endl;
}
