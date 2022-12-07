#include "lvgl.h"
#include "lv_example_widgets.h"
//#if LV_USE_BTN && LV_BUILD_EXAMPLES

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
//    lv_label_set_align(label, LV_LABEL_ALIGN_CENTER);

    lv_obj_t *sw1 = lv_switch_create(lv_scr_act());
    lv_obj_align(sw1, LV_ALIGN_TOP_RIGHT, 0, 0);
//    lv_obj_set_event_cb(sw1, event_handler);
    // todo: use default theme settings and in SDL glue check for != background or something
}
