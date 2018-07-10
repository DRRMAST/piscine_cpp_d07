#ifndef PICTURE_H
#define PICTURE_H

#include <iostream>
#include <fstream>

class			Picture
{
 public:

  Picture();
  Picture(Picture const& other);
  ~Picture();
  bool			getPictureFromFile(const std::string& file);
  Picture(const std::string& file);

  Picture&		operator=(Picture const& other);
  
  std::string		data;
};

#endif
