#include "Person.h"

#include <iostream>

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
    else
        _mother = nullptr;

    if (father != "???")
        _father = _genePool->find(father);
    else
        _father = nullptr;
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
    if (pmod == PMod::MATERNAL || pmod == PMod::ANY)
    {
        if (_mother != nullptr)
        {
            result.insert(_mother);
            std::set<Person *> res2 = _mother->ancestors(PMod::ANY);
            if (!res2.empty())
                result.insert(res2.begin(), res2.end());
        }
    }
    if (pmod == PMod::PATERNAL || pmod == PMod::ANY)
    {
        if (_father != nullptr)
        {
            result.insert(_father);
            std::set<Person *> res2 = _father->ancestors(PMod::ANY);
            if (!res2.empty())
                result.insert(res2.begin(), res2.end());
        }
    }
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
    if (pmod == PMod::MATERNAL || pmod == PMod::ANY)
    {
        if (_mother != nullptr && _mother->father() != nullptr)
        {
            result.insert(_mother->father());
        }
    }
    if (pmod == PMod::PATERNAL || pmod == PMod::ANY)
    {
        if (_father != nullptr && _father->father() != nullptr)
        {
            result.insert(_father->father());
        }
    }
    return result;
}
std::set<Person *> Person::grandmothers(PMod pmod)
{
    std::set<Person *> result;
    if (pmod == PMod::MATERNAL || pmod == PMod::ANY)
    {
        if (_mother != nullptr && _mother->mother() != nullptr)
        {
            result.insert(_mother->mother());
        }
    }
    if (pmod == PMod::PATERNAL || pmod == PMod::ANY)
    {
        if (_father != nullptr && _father->mother() != nullptr)
        {
            result.insert(_father->mother());
        }
    }

    return result;
}
std::set<Person *> Person::grandparents(PMod pmod)
{
    std::set<Person *> result;
    if (pmod == PMod::MATERNAL || pmod == PMod::ANY)
    {
        if (_mother != nullptr)
        {
            result.insert(_mother->parents(PMod::ANY).begin(), _mother->parents(PMod::ANY).end());
        }
    }
    if (pmod == PMod::PATERNAL || pmod == PMod::ANY)
    {
        if (_father != nullptr)
        {
            result.insert(_father->parents(PMod::ANY).begin(), _father->parents(PMod::ANY).end());
        }
    }

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
    if (_father != nullptr)
    {
        result.insert(_father);
    }
    if (_mother != nullptr)
    {
        result.insert(_mother);
    }
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