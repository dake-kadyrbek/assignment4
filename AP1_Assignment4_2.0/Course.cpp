#include "Course.h"
Course::Course(std::string name, int numberOfStudentsEnrolled, std::string lecturer):name{std::move(name)},numberOfStudentsEnrolled{numberOfStudentsEnrolled}, lecturer{std::move(lecturer)} {}

const std::string &Course::getName() const {
    return name;
}

const std::string &Course::getLecturer() const {
    return lecturer;
}

int Course::getNumberOfStudentsEnrolled() const {
    return numberOfStudentsEnrolled;
}

void Course::setName(const std::string &name) {
    Course::name = name;
}

void Course::setNumberOfStudentsEnrolled(int numberOfStudentsEnrolled) {
    Course::numberOfStudentsEnrolled = numberOfStudentsEnrolled;
}

void Course::setLecturer(const std::string &lecturer) {
    Course::lecturer = lecturer;
}

std::istream &operator>>(std::istream &in, Course &course) {
    in >> course.name;
    return in;
}

