#ifndef EXERCISE_H
#define EXERCISE_H

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include "Set.h"
using namespace std;

class Goal;  // Goal is only used by reference here, so this is enough

// Abstract base class. Holds the name, the muscles worked, and the Sets logged.
class Exercise {
public:
    Exercise(const string& name, const vector<string>& muscles);
    virtual ~Exercise();

    string getName() const;
    vector<string> getMuscles() const;

    void addSet(const Set& s);
    vector<Set> getSets() const;

    // Sum of volume() over all sets
    double totalVolume() const;

    // Each subclass must override these
    virtual string getType() const = 0;               // "compound" or "isolation"
    virtual int suggestedRest(const Goal& goal) const = 0;  // seconds
    virtual string warmupTip() const = 0;
    virtual void printSummary(ostream& out) const = 0;

private:
    string name;
    vector<string> muscles;
    vector<Set> sets;
};

#endif
