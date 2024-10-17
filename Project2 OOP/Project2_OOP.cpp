#include <iostream>
#include "Pharmacy.h"
#include "Prescription.h"
using namespace std;

int main() {
    // Create a Pharmacy class object and add drugs.
    Pharmacy pharmacy;
    pharmacy.addMedicine(Medicine("Aspirin", "Take 1 tablet three times daily after meals", 50.0));
    pharmacy.addMedicine(Medicine("Paracetamol", "Take 1 tablet every 4 hours", 30.0));
    pharmacy.addMedicine(Medicine("Nurofen", "Take 1 tablet for pain", 80.0));

    // Create a Prescription class object and add medications to a prescription.
    Prescription prescription;
    prescription.addMedicineToPrescription("Aspirin");
    prescription.addMedicineToPrescription("Paracetamol");

    // Output of recipe information.
    prescription.showPrescription();

    // Calculation of the total cost of prescription drugs.
    double totalCost = prescription.calculateTotalCost(pharmacy);
    cout << "Total Cost of Prescription Drugs: " << totalCost << " UAH" << endl;

    // Checking the availability of medicines at the pharmacy.
    cout << "Availability of medicines in the pharmacy:" << endl;
    cout << "Aspirin: " << (pharmacy.isMedicineAvailable("Aspirin") ? "In Stock" : "No") << endl;
    cout << "Ibuprofen: " << (pharmacy.isMedicineAvailable("Ibuprofen") ? "In Stock" : "No") << endl;

    return 0;
}
