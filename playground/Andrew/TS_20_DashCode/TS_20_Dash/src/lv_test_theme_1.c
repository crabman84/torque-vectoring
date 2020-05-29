 /**
 * @file lv_test_theme_1.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include "lv_test_theme_1.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/
static void create_tab1(lv_obj_t * parent,lv_obj_t * header);
static void create_tab2(lv_obj_t * parent);
static void bar_set_value(lv_obj_t * bar, int16_t value);
static void header_create(lv_obj_t * parent);
static void bar_event_cb(lv_obj_t * slider, lv_event_t event);

/**********************
 *  STATIC VARIABLES
 **********************/
static lv_obj_t * header;
static lv_obj_t * bar_value;
/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

/**
 * Create a test screen with a lot objects and apply the given theme on them
 * @param th pointer to a theme
 */
void lv_test_theme_1(lv_theme_t * th)
{
    lv_theme_set_current(th);
    th = lv_theme_get_current();    
    lv_obj_t * scr = lv_cont_create(NULL, NULL); //creates the screen scr
    lv_disp_load_scr(scr);

    lv_obj_t * tv = lv_tabview_create(scr, NULL); //allows us to add tabs in more easily later.
    //lv_obj_set_size(tv, lv_disp_get_hor_res(NULL), lv_disp_get_ver_res(NULL));
    lv_obj_t * tab1 = lv_tabview_add_tab(tv, "Home Screen"); //tab1.
    lv_obj_t * tab2 = lv_tabview_add_tab(tv,"Tab2");

    lv_tabview_set_btns_hidden(tv, false); //hides the tab buttons, but allows us to implement them later on.

    create_tab1(tab1,header);
    create_tab2(tab2);
}

static void header_create(lv_obj_t * parent) //uses h as its parent.
{
    header = lv_cont_create(parent, NULL); //creates the header as a container.
    lv_obj_set_width(header, lv_disp_get_hor_res(NULL));
    lv_obj_align(header,parent,LV_ALIGN_CENTER,0,0);

    lv_obj_t * sym = lv_label_create(header, NULL);
    lv_label_set_text(sym, LV_SYMBOL_GPS LV_SYMBOL_WIFI LV_SYMBOL_BLUETOOTH LV_SYMBOL_VOLUME_MAX);
    lv_obj_align(sym, NULL, LV_ALIGN_IN_RIGHT_MID, -LV_DPI/10, 0);

    lv_obj_t * clock = lv_label_create(header, NULL);
    lv_label_set_text(clock, "AMS: Idle");
    lv_obj_align(clock, NULL, LV_ALIGN_IN_LEFT_MID, LV_DPI/10, 0);

    lv_cont_set_fit2(header, LV_FIT_NONE, LV_FIT_TIGHT);   /*Let the height set automatically*/

}

/**********************
 *   STATIC FUNCTIONS
 **********************/
static void create_tab1(lv_obj_t * parent, lv_obj_t * header)
{
    //Sets the styling.
    lv_page_set_scrl_layout(parent, LV_LAYOUT_PRETTY);

    lv_theme_t * th = lv_theme_get_current();

    static lv_style_t h_style;
    lv_style_copy(&h_style, &lv_style_transp);
    h_style.body.padding.inner = LV_DPI / 10;
    h_style.body.padding.left = LV_DPI / 4; 
    h_style.body.padding.right = LV_DPI / 4;
    h_style.body.padding.top = LV_DPI / 10;
    h_style.body.padding.bottom = LV_DPI / 10;

    //creates a container "h". This becomes the parent object for all of our widgets.
    lv_obj_t * h = lv_cont_create(parent, NULL); 
    lv_obj_set_style(h, &h_style);
    lv_obj_set_click(h, false);
    lv_cont_set_fit(h, LV_FIT_TIGHT);
    lv_cont_set_layout(h, LV_LAYOUT_COL_M);

    /********************************************************
     * The above h is out container for all our widgets.
     * When creating a new widget, if we use h as the parent
     * they will all align nicely, and then we can fine tune
     * using the align functionality of lvgl.
     *******************************************************/

    /* Call the header create function, using h as its parent. */
    header_create(h);

    lv_obj_t * label1 = lv_label_create(h,NULL);
    lv_label_set_text(label1,"Motor Temp        ");

    lv_obj_t * bar = lv_bar_create(h, NULL);
    lv_obj_set_event_cb(bar, bar_event_cb);
    lv_bar_set_range(bar, 0, 300);
    lv_bar_set_anim_time(bar, 2000);
    lv_bar_set_value(bar, 100, LV_ANIM_ON);

    /* Create a label below the slider */
    bar_value = lv_label_create(label1,NULL);
    lv_label_set_text(bar_value, "0");
    lv_obj_align(bar_value,label1,LV_ALIGN_IN_RIGHT_MID,0,0);

    //Rineheart temp Label
    lv_obj_t * label2 = lv_label_create(h,NULL);
    lv_label_set_text(label2,"Rineheart Temp        ");

    bar_value = lv_label_create(label2,NULL);
    lv_label_set_text(bar_value, "50");
    lv_obj_align(bar_value,label2,LV_ALIGN_IN_RIGHT_MID,0,0);

    lv_obj_t * bar2 = lv_bar_create(h, NULL);
    lv_bar_set_range(bar2, 0, 300);
    lv_bar_set_anim_time(bar2, 2000);
    lv_bar_set_value(bar2, 40, LV_ANIM_ON);

    //accumulator temp label
    lv_obj_t * label3 = lv_label_create(h,NULL);
    lv_label_set_text(label3,"Accumulator Temp        ");

    bar_value = lv_label_create(label3,NULL);
    lv_label_set_text(bar_value, "40");
    lv_obj_align(bar_value,label3,LV_ALIGN_IN_RIGHT_MID,0,0);

    lv_obj_t * bar3 = lv_bar_create(h,NULL);
    lv_bar_set_anim_time(bar3, 2000);
    lv_bar_set_value(bar3, 60, LV_ANIM_ON);

   /*
    lv_anim_t a;
    a.var = bar3;
    a.start = 0;
    a.end = 100;
    a.exec_cb = (lv_anim_exec_xcb_t)bar_set_value;
    a.path_cb = lv_anim_path_linear;
    a.ready_cb = NULL;
    a.act_time = 0;
    a.time = 1000;
    a.playback = 1;
    a.playback_pause = 100;
    a.repeat = 1;
    a.repeat_pause = 100;
    lv_anim_create(&a); */

}

static void create_tab2(lv_obj_t * parent)
{

}

static void bar_event_cb(lv_obj_t * bar, lv_event_t event)
{
    if(event == LV_EVENT_VALUE_CHANGED) {
        static char buf[4]; /* max 3 bytes for number plus 1 null terminating byte */
        snprintf(buf, 4, "%u", lv_slider_get_value(bar));
        lv_label_set_text(bar_value, buf);
    }
}

static void bar_set_value(lv_obj_t * bar, int16_t value)
{
    lv_bar_set_value(bar, value, LV_ANIM_OFF);
}

void lv_ex_bar_1(void)
{
    lv_obj_t * bar1 = lv_bar_create(lv_scr_act(), NULL);
    lv_obj_set_size(bar1, 200, 30);
    lv_obj_align(bar1, NULL, LV_ALIGN_CENTER, 0, 0);
    lv_bar_set_anim_time(bar1, 1000);
    lv_bar_set_value(bar1, 100, LV_ANIM_ON);
}

