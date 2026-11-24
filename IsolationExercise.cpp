#include "IsolationExercise.h"
#include "Goal.h"

IsolationExercise::IsolationExercise(const string& name, const vector<string>& muscles) : Exercise(name, muscles) {}

string IsolationExercise::getType() const {
    return "isolation";
}

int IsolationExercise::suggestedRest(const Goal& goal) const {
    // TODO: isolation moves need less rest, e.g. based on goal.restSeconds()
    return 0;
}

string IsolationExercise::warmupTip() const {
    return "";
}

void IsolationExercise::printSummary(ostream& out) const {
    // TODO: print the name, type, each set, and the total volume
    out <<getName() <<" " <<getType();
    vector<Set> sets = getSets();
    for(int i = 0; i < sets.size(); i++){
        out << "Set " << i + 1<< ": "<< sets[i]<< endl;
    }
    out << "Total Volume: "<< totalVolume()<< endl;
}
