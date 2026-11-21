#include "Exercise.h"

Exercise::Exercise(const string& name, const vector<string>& muscles) : name(name), muscles(muscles){}

Exercise::~Exercise() {
    // Nothing to delete: sets is a vector of Set objects, not pointers.
}

string Exercise::getName() const {
    return name;
}

vector<string> Exercise::getMuscles() const {
    return muscles;
}

void Exercise::addSet(const Set& s) {
    sets.push_back(s);
}

vector<Set> Exercise::getSets() const {
    return sets;
}

double Exercise::totalVolume() const {
    double vol = 0;
    for(size_t i = 0; i < sets.size(); i++){
        //vol += sets[i];
    }
    return 0.0;
}
