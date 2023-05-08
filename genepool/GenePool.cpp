#include "GenePool.h"
#include "Person.h"

#include <algorithm>
#include <fstream>
#include <iostream>
#include <stdexcept>
#include <vector>
#include <sstream>

void read_term(std::istream &stream, std::string &term, char endValue)
{
    if (!(getline(stream, term, endValue)))
    {
        throw std::invalid_argument("Too few terms in database query.");
    }
}

// GenePool Member Functions
GenePool::GenePool(std::istream &stream)
{

    std::string line;
    while (getline(stream, line))
    {
        if (line[0] == '#' || line.empty())
        {
            continue;
        }
        std::stringstream ss(line);
        std::string tmp;

        read_term(ss, tmp, '\t');
        std::string name = tmp;
        read_term(ss, tmp, '\t');
        std::string gender = tmp;
        read_term(ss, tmp, '\t');
        std::string mother = tmp;
        read_term(ss, tmp, '\t');
        std::string father = tmp;

        Person *p = new Person(name, gender, mother, father, this);

        people.insert(p);
    }
}

GenePool::~GenePool()
{
    for (Person *person : people)
    {
        delete person;
    }
}

std::set<Person *> GenePool::everyone() const
{
    return people;
}

Person *GenePool::find(const std::string &name) const
{
    for (Person *person : people)
    {
        if (person->name() == name)
        {
            return person;
        }
    }

    return nullptr;
}
