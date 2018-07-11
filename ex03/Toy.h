#ifndef TOY_H
#define TOY_H

#include <iostream>
#include "Picture.h"

class			Toy
{
 public:

  enum			ToyType
  {
    BASIC_TOY,
    ALIEN,
    BUZZ,
    WOODY
  };

  Toy();
  Toy(Toy const& other);
  Toy(ToyType, std::string name, std::string file);

  Toy&			operator=(Toy const& other);

  ~Toy();
  ToyType		getType() const;
  std::string		getName() const;
  void			setName(std::string const& name);
  bool			setAscii(std::string const& file);
  std::string		getAscii() const;

  virtual void		speak(std::string const& statement);
  
 protected:
  
  ToyType		_type;
  std::string		_name;
  Picture		_data;
};

#endif
