// UOSL (native)
inherits wearstat;

trigger creation
{
  Q4HZ = 0x00 - 0x0A;
  return(0x01);
}

function void Q4HX(obj it)
{
  detachScript(it, "wearclmsy");
  return();
}