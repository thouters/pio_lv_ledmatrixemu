#include "lvgl.h"
#include "lv_example_widgets.h"
//#if LV_USE_BTN && LV_BUILD_EXAMPLES
LV_IMG_DECLARE(ceiling_light_rays);
LV_IMG_DECLARE(ceiling_light_outline);
static void event_handler(lv_event_t * e)
{
    lv_event_code_t code = lv_event_get_code(e);

    if(code == LV_EVENT_CLICKED) {
        LV_LOG_USER("Clicked");
    }
    else if(code == LV_EVENT_VALUE_CHANGED) {
        LV_LOG_USER("Toggled");
    }
}

void lv_example_btn_1(void)
{
    lv_obj_t * label;

#if 0
    lv_obj_t * btn1 = lv_btn_create(lv_scr_act());
    lv_obj_add_event_cb(btn1, event_handler, LV_EVENT_ALL, NULL);
    lv_obj_align(btn1, LV_ALIGN_CENTER, 0, 0);

    label = lv_label_create(btn1);
    lv_label_set_text(label, "Button");
    lv_obj_center(label);
#endif
     label = lv_label_create(lv_scr_act());
    lv_obj_align(label, LV_ALIGN_LEFT_MID, 0, 0);
    lv_label_set_text(label, "light");

    /*Create an Image button*/
    lv_obj_t * imgbtn1 = lv_imgbtn_create(lv_scr_act());
    lv_imgbtn_set_src(imgbtn1, LV_IMGBTN_STATE_RELEASED, NULL, &ceiling_light_outline, NULL);
    lv_imgbtn_set_src(imgbtn1, LV_IMGBTN_STATE_PRESSED, NULL, &ceiling_light_outline, NULL);
    lv_imgbtn_set_src(imgbtn1, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &ceiling_light_rays, NULL);
    lv_imgbtn_set_src(imgbtn1, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &ceiling_light_rays, NULL);
    lv_obj_add_flag(imgbtn1, LV_OBJ_FLAG_CHECKABLE);
    lv_obj_set_width(imgbtn1, 24);
    lv_obj_align(imgbtn1, LV_ALIGN_RIGHT_MID, 0, 0);
}
