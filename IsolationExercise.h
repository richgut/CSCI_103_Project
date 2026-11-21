#ifndef ISOLATIONEXERCISE_H
#define ISOLATIONEXERCISE_H

#include "Exercise.h"

// Works one muscle (e.g. Bicep Curl, Leg Extension)
class IsolationExercise : public Exercise {
public:
    IsolationExercise(const string& name, const vector<string>& muscles);

    string getType() const override;
    int suggestedRest(const Goal& goal) const override;
    string warmupTip() const override;
    void printSummary(ostream& out) const override;
};

#endif
