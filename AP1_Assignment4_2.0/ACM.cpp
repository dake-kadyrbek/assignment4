#include "ACM.h"

void ACM::addCity(const std::string& city, const std::string& address) {
    map.insert(std::pair<std::string,std::string>(city, address));
}

const std::string &ACM::getTopicOfTheDay() const {
    return topicOfTheDay;
}

int ACM::getNumberOfPresentations() const {
    return numberOfPresentations;
}

ACM::ACM(std::string topicOfTheDay, int numberOfPresentations) : topicOfTheDay(std::move(topicOfTheDay)),
                                                                        numberOfPresentations(numberOfPresentations) {
    name = "ACM";
}

std::ostream &operator<<(std::ostream &os, const ACM &acm) {
    os << acm.getName();
    return os;
}

const std::string &ACM::getName() const {
    return name;
}

std::istream &operator>>(std::istream &in, ACM &acm) {
    in >> acm.name;
    return in;
}

