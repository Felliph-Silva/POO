#ifndef _PERSON.HPP_
#define _PERSON.HPP_

#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;

class Person
{
private:

    string name;    

public:

    void setname(const string &name);
    string getname() const {return name;}
};

#endif