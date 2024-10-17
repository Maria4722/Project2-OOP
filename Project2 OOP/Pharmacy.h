// Pharmacy.h
#ifndef PHARMACY_H
#define PHARMACY_H

#include <vector>
#include "Medicine.h"

class Pharmacy {
private:
    vector<Medicine> medicines; // List of medications

public:
    // A method for adding medication to a pharmacy.
    void addMedicine(const Medicine& med) {
        medicines.push_back(med);
    }

    // Checking the availability of medication by name.
    bool isMedicineAvailable(const string& medName) const {
        for (const auto& med : medicines) {
            if (med.getName() == medName) {
                return true;
            }
        }
        return false;
    }

    // Withdrawal of all medicines available in the pharmacy.
    void showAllMedicines() const {
        for (const auto& med : medicines) {
            med.show();
            cout << "------------------" << endl;
        }
    }

    // Search for drugs by name and return the pointer to them.
    Medicine* findMedicine(const string& medName) {
        for (auto& med : medicines) {
            if (med.getName() == medName) {
                return &med;
            }
        }
        return nullptr;
    }
};

#endif 
