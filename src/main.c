/**
  ******************************************************************************
  * @file    main.c
  * @author  Ac6
  * @version V1.0
  * @date    01-December-2013
  * @brief   Default main function.
  ******************************************************************************
*/


#include "lvgl.h"
#include "app_hal.h"

#include "lv_example_widgets.h"
//#include "demos/lv_demos.h"

void lv_example_btn_1(void);
int main(void)
{
	lv_init();

	hal_setup();

//    lv_theme_t * th = lv_theme_mono_init(0, NULL);
//    lv_theme_set_current(th); /* Set the mono system theme */

        lv_example_btn_1();
	hal_loop();
}
