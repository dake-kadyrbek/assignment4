#ifndef AP1_ASSIGNMENT4_COURSE_H
#define AP1_ASSIGNMENT4_COURSE_H
#include <string>

class Course {
private:
    std::string name;
    int numberOfStudentsEnrolled;
    std::string lecturer;

public:
    Course(std::string name, int numberOfStudentsEnrolled, std::string lecturer);

    int getNumberOfStudentsEnrolled() const;

    const std::string &getName() const;

    const std::string &getLecturer() const;

    void setName(const std::string &name);

    void setNumberOfStudentsEnrolled(int numberOfStudentsEnrolled);

    void setLecturer(const std::string &lecturer);

    friend std::istream& operator >> (std::istream& in, Course& course);

};


#endif //AP1_ASSIGNMENT4_COURSE_H
