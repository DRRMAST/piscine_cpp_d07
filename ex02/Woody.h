#ifndef WOODY_H
#define WOODY_H

#include "Toy.h"

class           Woody : public Toy
{
 public:
  
  Woody(std::string const& name);
  Woody(std::string const& name, std::string const& file);
  ~Woody();
};

#endif
