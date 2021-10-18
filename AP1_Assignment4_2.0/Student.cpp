#include <iostream>
#include "Student.h"

template<class Activity>
const std::string &Student<Activity>::getName() const {
    return name;
}

template<class Activity>
int Student<Activity>::getId() const {
    return id;
}

template<class Activity>
int Student<Activity>::getAge() const {
    return age;
}

template<class Activity>
Student<Activity>::Student(std::string name, int id, int age, Course course, Activity activity):name(std::move(
        name)), id(id), age(age), course(std::move(course)), activity(activity) {}

template<class Activity>
const Course &Student<Activity>::getCourse() const {
    return course;
}

template<class Activity>
Activity Student<Activity>::getActivity() const {
    return activity;
}

template<class IEEE>
std::ostream &operator<<(std::ostream& os, const Student<IEEE>& student) {
    std::string o;
    o = "\nName            ID               Age        Courses                 Activities\n"
        "--------------------------------------------------------------------------------\n";
    os << o;
    os << student.getName() << "         " <<student.getId() << "         " <<student.getAge() << "         "
    << student.getCourse().getName() << "         " << student.getActivity() << "\n";
    return os;
}

template<class U>
std::istream &operator>>(std::istream &in, Student<U> &student) {
    std::cout << "Type your name: ";
    in >> student.name;
    std::cout << "\nType your ID: ";
    in >> student.id;
    std::cout << "\nType your Age: ";
    in >> student.age;
    std::cout << "\nType your Courses: ";
    in >> student.course;
    std::cout << "\nType your Activities: ";
    in >> student.activity;
    return in;
}


