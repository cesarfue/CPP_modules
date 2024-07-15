#pragma once

#include <stdint.h>
#include <string>

struct Data {
  std::string name;
  int age;
};

class Serializer {
private:
  Serializer();
  Serializer &operator=(const Serializer &);
  Serializer(const Serializer &);

public:
  static uintptr_t serialize(Data *ptr);
  static Data *deserialize(uintptr_t raw);
  ~Serializer();
};
