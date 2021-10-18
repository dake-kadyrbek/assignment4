#include <string>
#include <set>
#include "Activities.h"
class IEEE: Activities{
private:
    std::string name;
    std::string location;
    std::string aName;

public:
    std::set<std::string> topics;

    IEEE(std::string name, std::string location);

    const std::string &getName() const;

    const std::string &getLocation() const;

    const std::string &getAName() const;

    void addTopic(const std::string& topic);

    friend std::ostream& operator << (std::ostream& os, const IEEE& ieee);
    friend std::istream& operator >> (std::istream& in, IEEE& ieee);

};


