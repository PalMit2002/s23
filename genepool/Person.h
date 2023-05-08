#ifndef PERSON_H
#define PERSON_H

#include "Enums.h"
#include "GenePool.h"

#include <set>
#include <string>

// This is the Person class you need to implement.
// It has many member functions that perform relationship queries.
// Add any member variables you need to support this.
// Implement the member functions in Person.cpp.

class Person
{
  // Member Variables
  const std::string _name;
  Gender _gender;
  Person *_mother;
  Person *_father;
  GenePool *_genePool;

  // Helper Functions

public:
  // Constructor
  Person(std::string name, std::string gender, std::string mother, std::string father, GenePool *genePool);
  // Destructor?

  // Required Getter Functions
  const std::string &name() const;
  Gender gender() const;
  Person *mother();
  Person *father();

  // Required Relationship Functions
  std::set<Person *> ancestors(PMod pmod);
  std::set<Person *> aunts(PMod pmod, SMod smod);
  std::set<Person *> brothers(PMod pmod, SMod smod);
  std::set<Person *> children();
  std::set<Person *> cousins(PMod pmod, SMod smod);
  std::set<Person *> daughters();
  std::set<Person *> descendants();
  std::set<Person *> grandchildren();
  std::set<Person *> granddaughters();
  std::set<Person *> grandfathers(PMod pmod);
  std::set<Person *> grandmothers(PMod pmod);
  std::set<Person *> grandparents(PMod pmod);
  std::set<Person *> grandsons();
  std::set<Person *> nephews(PMod pmod, SMod smod);
  std::set<Person *> nieces(PMod pmod, SMod smod);
  std::set<Person *> parents(PMod pmod);
  std::set<Person *> siblings(PMod pmod, SMod smod);
  std::set<Person *> sisters(PMod pmod, SMod smod);
  std::set<Person *> sons();
  std::set<Person *> uncles(PMod pmod, SMod smod);

  // Other Member Functions
};

#endif
