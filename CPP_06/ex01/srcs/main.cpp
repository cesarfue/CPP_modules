#include "Serializer.hpp"
#include <iostream>

int main(void) {
  Data person;
  uintptr_t rawPerson;
  Data *rebornPerson;

  person.age = 34;
  person.name = "FlibbyFlop";

  std::cout << "\tPre-serialized person : \n"
            << person.name << ", " << person.age << "\n"
            << std::endl;

  rawPerson = Serializer::serialize(&person);
  std::cout << "\tSerialized person : \n" << rawPerson << "\n" << std::endl;

  rebornPerson = Serializer::deserialize(rawPerson);
  std::cout << "\tDeserialized person : \n"
            << rebornPerson->name << ", " << rebornPerson->age << "\n"
            << std::endl;

  return 0;
}
