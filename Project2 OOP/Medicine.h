// Medicine.h
#ifndef MEDICINE_H
#define MEDICINE_H

#include <string>
#include <iostream>
using namespace std;

class Medicine {
private:
    string name;         
    string instructions; 
    double price;        

public:
    // A constructor with parameters for initializing an object.
    Medicine(string n = "", string instr = "", double p = 0.0) : name(n), instructions(instr), price(p) {}

    // set() methods to set field values.
    void setName(string n) { name = n; }
    void setInstructions(string instr) { instructions = instr; }
    void setPrice(double p) { price = p; }

    // get() methods to retrieve field values.
    string getName() const { return name; }
    string getInstructions() const { return instructions; }
    double getPrice() const { return price; }

    // The show() method to display information about the drug.
    void show() const {
        cout << "Name of the drug: " << name << endl;
        cout << "Instructions for use: " << instructions << endl;
        cout << "Price: " << price << " UAH" << endl;
    }
};

#endif
