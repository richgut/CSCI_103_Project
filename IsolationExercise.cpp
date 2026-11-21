#include "IsolationExercise.h"
#include "Goal.h"

IsolationExercise::IsolationExercise(const string& name, const vector<string>& muscles)
    : Exercise(name, muscles) {
}

string IsolationExercise::getType() const {
    return "isolation";
}

int IsolationExercise::suggestedRest(const Goal& goal) const {
    // TODO: isolation moves need less rest, e.g. based on goal.restSeconds()
    return 0;
}

string IsolationExercise::warmupTip() const {
    // TODO
    return "";
}

void IsolationExercise::printSummary(ostream& out) const {
    // TODO: print the name, type, each set, and the total volume
}
