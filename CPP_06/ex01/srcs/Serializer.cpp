#include "Serializer.hpp"
#include <stdint.h>
#include <string>

uintptr_t Serializer::serialize(Data *ptr) {
  return reinterpret_cast<uintptr_t>(ptr);
}
Data *Serializer::deserialize(uintptr_t raw) {
  return reinterpret_cast<Data *>(raw);
}

Serializer::Serializer() {}
Serializer &Serializer::operator=(const Serializer &) { return *this; }
Serializer::Serializer(const Serializer &) {}
Serializer::~Serializer() {}
