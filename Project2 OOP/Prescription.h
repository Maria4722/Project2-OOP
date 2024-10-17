// Prescription.h
#ifndef PRESCRIPTION_H
#define PRESCRIPTION_H

#include <vector>
#include "Pharmacy.h"

class Prescription {
private:

    vector<string> medicineList; // List of Prescription Drug Names

public:
    // Adding medication to a prescription.
    void addMedicineToPrescription(const string& medName) {
        medicineList.push_back(medName);
    }

    // Display the recipe on the screen.
    void showPrescription() const {
        cout << "The prescription contains the following medications:" << endl;
        for (const auto& medName : medicineList) {
            cout << "- " << medName << endl;
        }
    }

    // Calculation of the total cost of prescription drugs.
    double calculateTotalCost(Pharmacy& pharmacy) const {
        double totalCost = 0.0;
        for (const auto& medName : medicineList) {
            Medicine* med = pharmacy.findMedicine(medName);
            if (med) {
                totalCost += med->getPrice();
            }
            else {
                cout << "Medicinal product " << medName << " Not available at the pharmacy." << endl;
            }
        }
        return totalCost;
    }
};

#endif 
