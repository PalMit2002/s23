#include "Person.h"

Person::Person(std::string name, std::string gender, std::string mother, std::string father, GenePool *genePool) : _name(name)
{
    _genePool = genePool;

    if (gender == "male")
    {
        _gender = Gender::MALE;
    }
    else if (gender == "female")
    {
        _gender = Gender::FEMALE;
    }
    else
    {
        _gender = Gender::ANY;
    }

    if (mother != "???")
        _mother = _genePool->find(mother);
    if (father != "???")
        _father = _genePool->find(father);
}

// Person Member Functions
const std::string &Person::name() const
{
    return _name;
}

Gender Person::gender() const
{
    return _gender;
}

Person *Person::mother()
{
    return _mother;
}

Person *Person::father()
{
    return _father;
}

std::set<Person *> Person::ancestors(PMod pmod)
{
    std::set<Person *> result;
    return result;
}
std::set<Person *> Person::aunts(PMod pmod, SMod smod)
{
    std::set<Person *> result;
    return result;
}
std::set<Person *> Person::brothers(PMod pmod, SMod smod)
{
    std::set<Person *> result;
    return result;
}
std::set<Person *> Person::children()
{
    std::set<Person *> result;
    return result;
}
std::set<Person *> Person::cousins(PMod pmod, SMod smod)
{
    std::set<Person *> result;
    return result;
}
std::set<Person *> Person::daughters()
{
    std::set<Person *> result;
    return result;
}
std::set<Person *> Person::descendants()
{
    std::set<Person *> result;
    return result;
}
std::set<Person *> Person::grandchildren()
{
    std::set<Person *> result;
    return result;
}
std::set<Person *> Person::granddaughters()
{
    std::set<Person *> result;
    return result;
}
std::set<Person *> Person::grandfathers(PMod pmod)
{
    std::set<Person *> result;
    return result;
}
std::set<Person *> Person::grandmothers(PMod pmod)
{
    std::set<Person *> result;
    return result;
}
std::set<Person *> Person::grandparents(PMod pmod)
{
    std::set<Person *> result;
    return result;
}
std::set<Person *> Person::grandsons()
{
    std::set<Person *> result;
    return result;
}
std::set<Person *> Person::nephews(PMod pmod, SMod smod)
{
    std::set<Person *> result;
    return result;
}
std::set<Person *> Person::nieces(PMod pmod, SMod smod)
{
    std::set<Person *> result;
    return result;
}
std::set<Person *> Person::parents(PMod pmod)
{
    std::set<Person *> result;
    return result;
}
std::set<Person *> Person::siblings(PMod pmod, SMod smod)
{
    std::set<Person *> result;
    return result;
}
std::set<Person *> Person::sisters(PMod pmod, SMod smod)
{
    std::set<Person *> result;
    return result;
}
std::set<Person *> Person::sons()
{
    std::set<Person *> result;
    return result;
}
std::set<Person *> Person::uncles(PMod pmod, SMod smod)
{
    std::set<Person *> result;
    return result;
}