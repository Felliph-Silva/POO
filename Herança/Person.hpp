#ifndef _PERSON.HPP_
#define _PERSON.HPP_

#include <iostream>

#include <string>

using namespace std;

class Person
{
private:

    string name;    

public:

    void setname(const string &name);
    string getname() const {return name;}
};

#endif