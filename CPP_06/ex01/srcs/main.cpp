#include "Serializer.hpp"
#include <iostream>

int main(void) {
  Data originalPerson;
  uintptr_t rawPerson;
  Data *rebornPerson;

  originalPerson.age = 34;
  originalPerson.name = "FlibbyFlop";

  std::cout << "\tPre-serialized person : \n"
            << originalPerson.name << ", age " << originalPerson.age << "\n"
            << std::endl;

  rawPerson = Serializer::serialize(&originalPerson);
  std::cout << "\tSerialized person : \n" << rawPerson << "\n" << std::endl;

  rebornPerson = Serializer::deserialize(rawPerson);
  std::cout << "\tDeserialized person : \n"
            << rebornPerson->name << ", age " << rebornPerson->age << "\n"
            << std::endl;

  std::cout << "\n\tPointer comparison :\n"
            << "originalPerson pointer : " << &originalPerson
            << "\nrebornPerson pointer : " << rebornPerson << std::endl;
  return 0;
}
