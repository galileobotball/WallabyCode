#define m1 0
#define m2 3
#include <kipr/botball.h>
int forward(int power, int time)    //percent power, time in milliseconds
{
  motor(m1, power);
  motor(m2, power);
  msleep(time);
  return 0;
}
int main()
{
  forward(100,1000);
  return 0;
}
