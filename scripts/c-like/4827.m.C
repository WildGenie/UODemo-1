// Real-C
#include "ENGINE.hpp"

#include "globals.h"

TRIGGER( use )(obj user)
{
  int Q68J;
  setType(this, 0x12DC);
  setType(this, 0x12DD);
  detachScript(this, "4827");
  return(0x00);
}