#include <iostream>
#include <string>
#include <vector>
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
        tips = "Great job! Keep on reducing the usage of electronic devices or using energy-saving modes and unplugging devices when not in use.";
    } else if (energyConsumed <= 5.0) {
        level = "Medium";
        tips = "Try reducing usage hours or switching to energy-efficient devices.";
    } else {
        level = "High";
        tips = "Warning!, Consider investing in energy-efficient appliances and minimizing usage time. High energy usage may causes harm to the environment !";
    }

    // Output results
    cout << "Total energy consumed: " << energyConsumed << " kWh" << endl;
    cout << "Energy level: " << level << endl;
    cout << "Tips: " << tips << endl;
}

// Function for Carbon Footprint Estimator
void carbonFootprintEstimator() {
    int numDevices;
    vector<int> deviceChoices;
    vector<double> usageFrequencies;
    double powerRating, totalEnergy = 0.0, totalCO2 = 0.0;
    string level, tips;

    cout << "\n[Carbon Footprint Estimator]" << endl;
    cout << "Enter the number of devices owned: ";
    cin >> numDevices;

    // Collect device type and usage frequency for each device
    for (int i = 0; i < numDevices; ++i) {
        int deviceChoice;
        double usageFrequency;

        cout << "Device " << i + 1 << " type:" << endl;
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
                cout << "Invalid device choice. Skipping this device." << endl;
                continue;
        }

        cout << "Enter usage frequency for Device " << i + 1 << " (hours/day): ";
        cin >> usageFrequency;

        // Calculate energy usage for the device
        double energyUsage = (powerRating * usageFrequency) / 1000; // Convert to kWh
        totalEnergy += energyUsage;
    }

    // Calculate total CO2 emissions (Assume 0.5 kg CO2 per kWh)
    totalCO2 = totalEnergy * 0.5;

    // Determine emission level and tips
    if (totalCO2 <= 10.0) {
        level = "Low";
        tips = "You're doing great! Keep optimizing your device usage.";
    } else if (totalCO2 <= 30.0) {
        level = "Medium";
        tips = "Consider reducing device usage or switching to renewable energy.";
    } else {
        level = "High";
        tips = "Warning!, High carbon emission. Focus on reducing device energy consumption and unplugging unused electronics. High carbon footprint may harm the environment";
    }

    // Output results
    cout << "Total carbon emissions: " << totalCO2 << " kg CO2" << endl;
    cout << "Emission level: " << level << endl;
    cout << "Tips: " << tips << endl;
}



using namespace std;

// Function for Device Lifespan Extender Tools
void deviceLifespanExtenderTools() {
    int deviceChoice;
    string usagePattern, maintenanceHabits;
    string deviceType, tips;

    cout << "\n[Device Lifespan Extender Tools]" << endl;
    cout << "Select your device category:" << endl;
    cout << "1. Smartphone" << endl;
    cout << "2. Laptop" << endl;
    cout << "3. Desktop Computer" << endl;
    cout << "4. Air Conditioner" << endl;
    cout << "5. Television" << endl;
    cout << "Enter your choice: ";
    cin >> deviceChoice;

    // Assign device type based on choice
    switch (deviceChoice) {
        case 1: deviceType = "Smartphone"; break;
        case 2: deviceType = "Laptop"; break;
        case 3: deviceType = "Desktop Computer"; break;
        case 4: deviceType = "Air Conditioner"; break;
        case 5: deviceType = "Television"; break;
        default:
            cout << "Invalid device choice. Returning to menu." << endl;
            return;
    }

    cout << "Enter usage pattern (light/moderate/heavy): ";
    cin >> usagePattern;
    cout << "Enter maintenance habits (good/average/poor): ";
    cin >> maintenanceHabits;

    // Generate different tips based on device type, usage pattern, and maintenance habits
    switch (deviceChoice) {
        case 1: // Smartphone
            if (usagePattern == "heavy" || maintenanceHabits == "poor") {
                tips = "Avoid overcharging, use dark mode to reduce battery strain, and close unused apps.";
            } else if (usagePattern == "moderate" && maintenanceHabits == "average") {
                tips = "Charge between 20-80% and clean the charging port occasionally.";
            } else {
                tips = "Great job! Keep updating apps and clear cache for better performance.";
            }
            break;

        case 2: // Laptop
            if (usagePattern == "heavy" || maintenanceHabits == "poor") {
                tips = "Avoid overheating, use a cooling pad, and don’t leave it plugged in 24/7.";
            } else if (usagePattern == "moderate" && maintenanceHabits == "average") {
                tips = "Keep your software updated and clean the keyboard and fans regularly.";
            } else {
                tips = "You're maintaining it well! Consider using battery saver mode for longevity.";
            }
            break;

        case 3: // Desktop Computer
            if (usagePattern == "heavy" || maintenanceHabits == "poor") {
                tips = "Clean the dust from fans, ensure proper ventilation, and use a surge protector.";
            } else if (usagePattern == "moderate" && maintenanceHabits == "average") {
                tips = "Update drivers regularly and avoid excessive background programs.";
            } else {
                tips = "Good work! Keep checking for malware and optimizing disk performance.";
            }
            break;

        case 4: // Air Conditioner
            if (usagePattern == "heavy" || maintenanceHabits == "poor") {
                tips = "Clean the filters monthly, check refrigerant levels, and avoid extreme temperature settings.";
            } else if (usagePattern == "moderate" && maintenanceHabits == "average") {
                tips = "Schedule annual servicing and avoid frequently turning it on and off.";
            } else {
                tips = "Excellent maintenance! Keep doors/windows closed while running it for efficiency.";
            }
            break;

        case 5: // Television
            if (usagePattern == "heavy" || maintenanceHabits == "poor") {
                tips = "Avoid running the TV for long hours, clean the screen properly, and use a voltage stabilizer.";
            } else if (usagePattern == "moderate" && maintenanceHabits == "average") {
                tips = "Turn off when not in use and avoid exposing the screen to direct sunlight.";
            } else {
                tips = "Nice job! Using energy-saving mode can further improve lifespan.";
            }
            break;
    }

    // Output results including Green IT tip
    cout << "\nTips to extend the lifespan of your " << deviceType << ": " << tips << endl;
    cout << "\n[Green IT Tip]: By extending your device's lifespan, you help reduce electronic waste, lower energy consumption, and minimize your environmental impact. Sustainable usage means fewer devices in landfills and a smaller carbon footprint!" << endl;
}



// Function for E-Waste Calculator
void eWasteCalculator() {
    int numDevices;
    double totalEWaste = 0.0, totalRecoverableMaterials = 0.0, totalHazardousMaterials = 0.0;
    string tips;

    cout << "\n[E-Waste Calculator]" << endl;
    cout << "Enter the number of devices owned: ";
    cin >> numDevices;

    for (int i = 0; i < numDevices; ++i) {
        int deviceChoice;
        double eWasteGenerated, recoverableMaterials, hazardousMaterials;

        cout << "\nDevice " << i + 1 << ":" << endl;
        cout << "Select the device type:" << endl;
        cout << "1. Smartphone" << endl;
        cout << "2. Laptop" << endl;
        cout << "3. Desktop Computer" << endl;
        cout << "4. Air Conditioner" << endl;
        cout << "5. Television" << endl;
        cout << "Enter your choice: ";
        cin >> deviceChoice;

        // Assign e-waste values based on device type
        switch (deviceChoice) {
            case 1:
                eWasteGenerated = 0.2; // Smartphone: 0.2 kg
                break;
            case 2:
                eWasteGenerated = 2.0; // Laptop: 2.0 kg
                break;
            case 3:
                eWasteGenerated = 5.0; // Desktop Computer: 5.0 kg
                break;
            case 4:
                eWasteGenerated = 25.0; // Air Conditioner: 25.0 kg
                break;
            case 5:
                eWasteGenerated = 10.0; // Television: 10.0 kg
                break;
            default:
                cout << "Invalid choice. Skipping this device." << endl;
                continue;
        }

        // Calculate recoverable and hazardous materials
        recoverableMaterials = eWasteGenerated * 0.6; // 60% recyclable
        hazardousMaterials = eWasteGenerated * 0.1;  // 10% hazardous

        // Accumulate totals
        totalEWaste += eWasteGenerated;
        totalRecoverableMaterials += recoverableMaterials;
        totalHazardousMaterials += hazardousMaterials;
    }

    // General tips for reducing e-waste
    tips = "Recycle old devices, donate functional electronics, prevent from throwing the devices together with other household trash and avoid unnecessary upgrades.";

    // Output results
    cout << "\nSummary of E-Waste Calculation:" << endl;
    cout << "Total estimated e-waste generated: " << totalEWaste << " kg" << endl;
    cout << "Total recoverable materials: " << totalRecoverableMaterials << " kg" << endl;
    cout << "Total hazardous materials: " << totalHazardousMaterials << " kg" << endl;
    cout << "Tips: " << tips << endl;
    cout << "[Green IT Tip]: E-waste is one of the fastest-growing environmental issues. Proper disposal and recycling of old electronics reduce harmful waste, recover valuable materials, and minimize landfill pollution. Consider donating, reselling, or using certified e-waste recycling centers to reduce environmental impact." << endl;
}


