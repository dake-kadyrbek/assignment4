#include "IEEE.h"

IEEE::IEEE(std::string name, std::string location) : name{std::move(name)}, location{std::move(location)}{
    aName = "IEEE";
}

const std::string &IEEE::getName() const {
    return name;
}

const std::string &IEEE::getLocation() const {
    return location;
}

void IEEE::addTopic(const std::string& topic) {
    topics.insert(topic);
}

std::istream &operator>>(std::istream &in, IEEE &ieee) {
    in >> ieee.aName;
    return in;
}

std::ostream &operator<<(std::ostream &os, const IEEE &ieee) {
    os << ieee.getAName();
    return os;
}

const std::string &IEEE::getAName() const {
    return aName;
}

