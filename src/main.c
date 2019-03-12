#define rm 0
#define lm 3
#include <kipr/botball.h>
int forward(int power, int time)    //percent power, time in milliseconds
{
  motor(lm, power);
  motor(rm, power);
  msleep(time);
  return 0;
}
int right(int power, int time)      //percent power, time in milliseconds
{
  motor(lm, power);
  msleep(time);
  return 0;
}

int main()
{
  forward(100,1000);
  right(100, 1000);
  forward(100,1000);
  return 0;
}
