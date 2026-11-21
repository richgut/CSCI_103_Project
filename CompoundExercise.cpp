#include "CompoundExercise.h"
#include "Goal.h"

CompoundExercise::CompoundExercise(const string& name, const vector<string>& muscles)
    : Exercise(name, muscles) {
}

string CompoundExercise::getType() const {
    return "compound";
}

int CompoundExercise::suggestedRest(const Goal& goal) const {
    // TODO: compound lifts need more rest, e.g. based on goal.restSeconds()
    return 0;
}

string CompoundExercise::warmupTip() const {
    // TODO
    return "";
}

void CompoundExercise::printSummary(ostream& out) const {
    // TODO: print the name, type, each set, and the total volume
}
