// UOSL (native)
inherits defbonus;

member int Q4H7;

trigger creation
{
  Q4H7 = 0x64;
  Q424(this, Q4H7 / 0x0A);
  return(0x01);
}