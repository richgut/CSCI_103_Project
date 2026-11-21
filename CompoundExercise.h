#ifndef COMPOUNDEXERCISE_H
#define COMPOUNDEXERCISE_H

#include "Exercise.h"

// Works several muscles at once (e.g. Bench Press, Squat)
class CompoundExercise : public Exercise {
public:
    CompoundExercise(const string& name, const vector<string>& muscles);

    string getType() const override;
    int suggestedRest(const Goal& goal) const override;
    string warmupTip() const override;
    void printSummary(ostream& out) const override;
};

#endif
