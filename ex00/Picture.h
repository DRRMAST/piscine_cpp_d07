#ifndef PICTURE_H
#define PICTURE_H

#include <iostream>
#include <fstream>

class			Picture
{
 public:

  Picture();
  ~Picture();
  bool			getPictureFromFile(const std::string& file);
  Picture(const std::string& file);

  std::string		data;
};

#endif
