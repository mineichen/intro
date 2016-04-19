#include "Cpu.h"
#include "Events.h"
#include "LED1.h"
#include "LEDpin1.h"
#include "BitIoLdd1.h"
#include "HF1.h"
#include "CS1.h"
#include "BUZ1.h"
#include "BitIoLdd2.h"
#include "FRTOS1.h"
#include "UTIL1.h"
#include "KSDK1.h"
#include "CLS1.h"
#include "WAIT1.h"
#include "BT1.h"
#include "Serial1.h"
#include "ASerialLdd1.h"
#include "LED_IR.h"
#include "LEDpin2.h"
#include "BitIoLdd9.h"
#include "RefCnt.h"
#include "IR1.h"
#include "BitIoLdd3.h"
#include "IR2.h"
#include "BitIoLdd4.h"
#include "IR3.h"
#include "BitIoLdd5.h"
#include "IR4.h"
#include "BitIoLdd6.h"
#include "IR5.h"
#include "BitIoLdd7.h"
#include "IR6.h"
#include "BitIoLdd8.h"
#include "MOTTU.h"
#include "DIRL.h"
#include "BitIoLdd10.h"
#include "PWMR.h"
#include "PwmLdd1.h"
#include "DIRR.h"
#include "BitIoLdd11.h"
#include "PWML.h"
#include "PwmLdd2.h"
#include "Q4CRight.h"
#include "C11.h"
#include "BitIoLdd12.h"
#include "C21.h"
#include "BitIoLdd13.h"
#include "QuadInt.h"
#include "TimerIntLdd1.h"
#include "TU_QuadInt.h"
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
#include "Platform.h"
#include "Application.h"

/*lint -save  -e970 Disable MISRA rule (6.3) checking. */
int main(void)
/*lint -restore Enable MISRA rule (6.3) checking. */
{
  /* Write your local variable definition here */

  /*** Processor Expert internal initialization. DON'T REMOVE THIS CODE!!! ***/
  PE_low_level_init();
  /*** End of Processor Expert internal initialization.                    ***/
  ApplicationInit();

  /*** Don't write any code pass this line, or it will be deleted during code generation. ***/
  /*** RTOS startup code. Macro PEX_RTOS_START is defined by the RTOS component. DON'T MODIFY THIS CODE!!! ***/
  #ifdef PEX_RTOS_START
    PEX_RTOS_START();                  /* Startup of the selected RTOS. Macro is defined by the RTOS component. */
  #endif
  /*** End of RTOS startup code.  ***/
  /*** Processor Expert end of main routine. DON'T MODIFY THIS CODE!!! ***/
  for(;;){}
  /*** Processor Expert end of main routine. DON'T WRITE CODE BELOW!!! ***/
} /*** End of main routine. DO NOT MODIFY THIS TEXT!!! ***/


