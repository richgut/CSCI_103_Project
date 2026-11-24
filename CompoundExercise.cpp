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
    return "";
}

void CompoundExercise::printSummary(ostream& out) const {
    // TODO: print the name, type, each set, and the total volume
    out <<getName() <<" " <<getType();
    vector<Set> sets = getSets();
    for(int i = 0; i < sets.size(); i++){
        out << "Set " << i + 1<< ": "<< sets[i]<< endl;
    }
    out << "Total Volume: "<< totalVolume()<< endl;
}
