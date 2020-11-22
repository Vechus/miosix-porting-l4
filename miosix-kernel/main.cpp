#include "miosix.h"

using namespace std;
using namespace miosix;

int main()
{
    
  for(;;) {
    ledOn();
    sleep(1000);
    for(volatile int i = 0; i < 200000000; i++);
    ledOff();
    for(volatile int i = 0; i < 200000000; i++);
    sleep(1000);
  }
  
  return 0;
  
}