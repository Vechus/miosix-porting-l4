#include "miosix.h"

using namespace std;
using namespace miosix;

typedef Gpio<GPIOD_BASE,0> redLed;
typedef Gpio<GPIOE_BASE,1> greenLed;

int main()
{
	redLed::mode(Mode::OUTPUT);
	greenLed::mode(Mode::OUTPUT);
    
	for(;;) {
	    delayMs(1000);
	    redLed::high();
	    greenLed::low();
	    delayMs(1000);
	    greenLed::high();
	    redLed::low();
	}
  
  return 0;
  
}