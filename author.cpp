#include <iostream>
#include <string>

class Author
{
private:
    std::string name;
    std::string surname;

public:
    Author() {};
    Author(std::string name, std::string surname) : name(name), surname(surname) {};

    std::string toString()
    {
        std::string output = name + " " + surname;
        return output;
    }
    std::string getName()
    {
        return name;
    }
    std::string getSurname()
    {
        return surname;
    }
    void print()
    {
        std::string output = name + " " + surname;
        std::cout << output << std::endl;
    }

};