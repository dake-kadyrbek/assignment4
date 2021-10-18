#include <iostream>
#include <algorithm>
#include <vector>
#include "Course.h"
#include "ACM.h"
#include "Student.cpp"
#include "IEEE.h"

struct StudentsStruct{
    Student<IEEE> *studentIEEE;
    Student<ACM> *studentACM;
    friend bool operator == (const StudentsStruct studentsStruct1,const StudentsStruct studentsStruct2){
        if(studentsStruct1.studentACM->getId()==studentsStruct2.studentACM->getId()){
            if(studentsStruct1.studentIEEE->getId()==studentsStruct2.studentIEEE->getId()){
                return true;
            }
        }
            return false;
    };
};


int count(std::vector<StudentsStruct>::iterator studentsBegin,std::vector<StudentsStruct>::iterator studentsEnd, StudentsStruct &studentsStruct){
    int counter=0;
    while(studentsBegin!=studentsEnd){
        if(*studentsBegin==studentsStruct){
            counter++;
        }
        ++studentsBegin;
    }
    return counter;
}
std::vector<StudentsStruct>::iterator find(std::vector<StudentsStruct>::iterator studentsBegin,std::vector<StudentsStruct>::iterator studentsEnd, StudentsStruct &studentsStruct){
    while(studentsBegin!=studentsEnd){
        if(*studentsBegin==studentsStruct){
            return studentsBegin;
        }
        ++studentsBegin;
    }
    return studentsEnd;
}

int main() {

    Course c("Advanced Programming 1",41,"Turar Olzhas");
    Course c1("Physical Education",3,"John Cena");
    Course c2("Sex Education",2,"Dawren Gay");
    Course c3("Database Management Systems",50,"Zhibek Sarsenova");

    std::cout << c.getLecturer() << std::endl;
    std::cout << c.getName() << std::endl;
    std::cout << c.getNumberOfStudentsEnrolled() << std::endl;

    std::cout << std::endl;

    ACM acm("None",0);
    std::cout<<acm.getTopicOfTheDay()<<std::endl;
    std::cout<<acm.getNumberOfPresentations()<<std::endl;

    std::cout<<std::endl;

    acm.addCity("Semey","Chekhov 90st.");
    std::cout<<acm.map.begin()->first<<std::endl;
    std::cout<<acm.map.begin()->second<<std::endl;

    std::cout<<std::endl;

    IEEE ieee("Rap Future Development","Zoom");
    std::cout << ieee.getName() << " " << ieee.getLocation() << std::endl;

    std::cout<<std::endl;

    Student<IEEE> student("Quacker",12345678,19,c, ieee);
    std::cout << student.getCourse().getName() << " " << student.getCourse().getLecturer() << std::endl;

    Student<ACM> student1("Mahambet",42394284,45,c, acm);
    Student<ACM> student5("Dauren",76326425,21,c2, acm);
    Student<ACM> student2("Duman",07426427,69,c1, acm);
    Student<IEEE> student3("Adlet",63726134,45,c3, ieee);
    Student<IEEE> student4("Aldiyar",91414194,56,c2, ieee);


    auto* studentsIeee = new std::vector<Student<IEEE>>;
    studentsIeee->push_back(student);
    auto* studentsACM= new std::vector<Student<ACM>>;
    studentsACM->push_back(student1);
    studentsIeee->push_back(student3);
    studentsACM->push_back(student5);
    studentsIeee->push_back(student4);
    studentsACM->push_back(student2);

    std::vector<StudentsStruct> students;

    StudentsStruct studentsStruct{};
    studentsStruct.studentIEEE=&student;
    studentsStruct.studentACM=&student1;
    students.push_back(studentsStruct);

    StudentsStruct studentsStruct2{};
    studentsStruct2.studentIEEE=&student;
    studentsStruct2.studentACM=&student1;
    students.push_back(studentsStruct2);

    StudentsStruct studentsStruct3{};
    studentsStruct3.studentIEEE=&student3;
    studentsStruct3.studentACM=&student5;
    students.push_back(studentsStruct3);

    StudentsStruct studentsStruct4{};
    studentsStruct4.studentACM=&student2;
    studentsStruct4.studentIEEE=&student4;
    students.push_back(studentsStruct4);

    std::cout<<"count:"<<count(students.begin(),students.end(),studentsStruct2)<<std::endl;

    std::cin >> student1;
    std::cout << student1;
;
    std::cout<<std::endl;

    std::cout<<*students.begin()->studentACM<<std::endl;
    std::cout<<*students.begin()->studentIEEE<<std::endl;
    std::cout<<*students.begin().operator+=(1)->studentACM<<std::endl;
    std::cout<<*students.begin().operator+=(1)->studentIEEE;
    std::cout<<*students.begin().operator+=(2)->studentACM;
    std::cout<<*students.begin().operator+=(2)->studentIEEE;
    std::cout<<*students.begin().operator+=(3)->studentACM<<std::endl;
    std::cout<<*students.begin().operator+=(3)->studentIEEE<<std::endl;
    std::cout<<*students.begin().operator+=(4)->studentACM<<std::endl;
    std::cout<<*students.begin().operator+=(4)->studentIEEE<<std::endl;

    return 0;
}
