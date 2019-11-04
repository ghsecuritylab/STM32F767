#include "STM32F7TouchController.hpp"

#include "../../BoardDriver/stm32f767_my_board_ts.h"
/* USER CODE BEGIN BSP user includes */
#include "../../BoardDriver/touch.h"
/* USER CODE END BSP user includes */

extern "C"
{
uint32_t LCD_GetXSize();
uint32_t LCD_GetYSize();

}

using namespace touchgfx;

void STM32F7TouchController::init()
{
 /* USER CODE BEGIN F4TouchController_init */

  /* Add code for touch controller Initialization */
    BSP_TS_Init(LCD_GetXSize(), LCD_GetYSize());
 //  TS_Init(LCD_GetXSize(), LCD_GetYSize());

/* USER CODE END F4TouchController_init */
}

bool STM32F7TouchController::sampleTouch(int32_t& x, int32_t& y)
{
/* USER CODE BEGIN  F4TouchController_sampleTouch  */

  TS_StateTypeDef state = { 0 };
   BSP_TS_GetState(&state);
    if (state.TouchDetected)
    {
    	x=(((1081 * state.X) + (-18666))/1000);
        	y=(((1163 * state.Y) + (-21053))/1000);
     //   x = state.touchX[0];
     //   y = state.touchY[0];

        return true;
    }
    return false;

/* USER CODE END F4TouchController_sampleTouch  */
}
