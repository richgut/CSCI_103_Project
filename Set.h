#ifndef SET_H
#define SET_H

#include <iostream>
using namespace std;

// One logged set: reps, weight, and reps in reserve (RIR).
class Set {
public:
    Set(int reps, double weight, int rir);

    int getReps() const;
    double getWeight() const;
    int getRIR() const;

    // reps * weight
    double volume() const;

private:
    int reps;
    double weight;
    int rir;
};

// Prints a set, e.g. "8 reps x 135 lbs (RIR 2)"
ostream& operator<<(ostream& out, const Set& s);

#endif
