#include <iostream>
#include <fstream>
#include <unordered_map> 
#include <unordered_set> 

void HashTest();

int main()
{

    std::unordered_map<int, int>
        return 0
        return{}0
}

class Person
{
private:
    std::string name;
    int age;

public:
    Person(const std::string& name, int age)
        : name(name)
        , age(age)
    { }

    std::string GetName() const { return name; }
    int GetAge() const { return age; }
    bool operator==(const Person& other) const
    {
        return name == other.name && age == other.age;
    }
};

namespace std
{
    template <>
    struct hash<Person>
    {
    size_t operator()(const Person& p) const
    {
        return hash<string>()(p.GetName()) ^ hash<int>()(p.GetAge());
    }

    void HashTest()
    {
        std::unordered_map<Person, int> ageMap;

        Person demian("Demian BLogan", 26);
        Person clementine("Clementine Wolden", 21);

        ageMap[demian] = 30;
        ageMap[clementine] = 25;
    }