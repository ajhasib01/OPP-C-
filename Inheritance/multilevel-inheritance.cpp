#include <iostream>
using namespace std;

// Base class
class Vehicle {
private:
    string name;
    int speed;
    string model;
public:
    void set_details() {
        cout << "Enter the type of vehicle: ";
        cin >> name;

        cout << "Enter the max speed: ";
        cin >> speed;

        cout << "Enter the model name: ";
        cin >> model;
    }

    void print_details() {
        cout << "Vehicle: " << name << endl;
        cout << "Max speed: " << speed << endl;
        cout << "Model: " << model << endl;
    }
};

// Intermediate class
class car : public Vehicle {
private:
    int Budget;
public:
    void budget() {
        set_details();
        cout << "What's your budget: ";
        cin >> Budget;
    }

    void options() {
        if (Budget > 1000) {
            cout << "You have 2 options." << endl;
        } else {
            cout << "You have no options." << endl;
        }
    }
};

// Derived class (grandchild of Vehicle)
class truck : public car {
    // You can add additional members and functions specific to trucks here
};

int main() {
    char option;
    cout << "Choose vehicle type (C for car, T for truck): ";
    cin >> option;

    if (option == 'C' || option == 'c') {
        car c;
        c.budget();
        c.options();
    } else if (option == 'T' || option == 't') {
        truck t;
        t.budget();
        t.options();
    } else {
        cout << "Invalid option." << endl;
    }

    return 0;
}
