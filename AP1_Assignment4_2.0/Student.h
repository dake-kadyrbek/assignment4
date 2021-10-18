#ifndef AP1_ASSIGNMENT4_STUDENT_H
#define AP1_ASSIGNMENT4_STUDENT_H

#include <string>
#include "Course.h"

template <class Activity> class Student {
private:
    std::string name;
    int id{};
    int age{};
    Course course;
    Activity activity;

public:

    Student(std::string name, int id, int age, Course course, Activity activity);

    const std::string &getName() const;

    int getId() const;

    int getAge() const;

    const Course &getCourse() const;

    Activity getActivity() const;


    template<class IEEE> friend std::ostream& operator << (std::ostream& os, const Student<IEEE>& student);
    template<class U> friend std::istream& operator >> (std::istream& in, Student<U>& student);
};


