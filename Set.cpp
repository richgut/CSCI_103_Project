#include "Set.h"

Set::Set(int reps, double weight, int rir) : reps(reps), weight(weight), rir(rir){}

int Set::getReps() const {

    return reps;
}

double Set::getWeight() const {
    return weight;
}

int Set::getRIR() const {
    return rir;
}

double Set::volume() const {
    double volume = reps * weight;
    return volume;
}

ostream& operator<<(ostream& out, const Set& s) {
    // TODO: print the set, e.g. "8 reps x 135 lbs (RIR 2)"
    out << s.getReps()<< " x " << s.getWeight() << " lbs"<< endl;
}
