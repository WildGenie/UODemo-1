// Real-C
#include "ENGINE.hpp"

#include "globals.h"

TRIGGER( creation )()
{
  callback(this, (0x3C * 0x3C * 0x18 * 0x07), 0x91);
  return(0x00);
}

TRIGGER( callback , 0x91 )()
{
  deleteObject(this);
  return(0x00);
}