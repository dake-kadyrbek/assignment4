#ifndef AP1_ASSIGNMENT4_ACM_H
#define AP1_ASSIGNMENT4_ACM_H
#include <string>
#include <map>
#include "Activities.h"
class ACM : public Activities{
private:
    std::string name;
    std::string topicOfTheDay;
    int numberOfPresentations;

public:
    ACM(std::string topicOfTheDay, int numberOfPresentations);

    const std::string &getTopicOfTheDay() const;

    int getNumberOfPresentations() const;

    const std::string &getName() const;



    std::map<std::string,std::string> map;

    void addCity(const std::string& city, const std::string& address);

    friend std::ostream& operator << (std::ostream& os, const ACM& acm);
    friend std::istream& operator >> (std::istream& in, ACM& acm);
};


#endif //AP1_ASSIGNMENT4_ACM_H
