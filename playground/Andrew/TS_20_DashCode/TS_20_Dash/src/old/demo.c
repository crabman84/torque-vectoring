/**
 * @file demo.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include "demo.h"
#if LV_USE_DEMO

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/
static void write_create(lv_obj_t * parent);


/**********************
 *  STATIC VARIABLES
 **********************/
static lv_obj_t * chart;
static lv_obj_t * ta;
static lv_obj_t * kb;

static lv_style_t style_kb;
static lv_style_t style_kb_rel;
static lv_style_t style_kb_pr;

typedef uint8_t lv_bar_style_t;


/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

/*
 * Create a demo application
 */

void demo_create(void)
{
    lv_coord_t hres = lv_disp_get_hor_res(NULL);
    lv_coord_t vres = lv_disp_get_ver_res(NULL);

    static lv_style_t style_tv_btn_bg;
    lv_style_copy(&style_tv_btn_bg, &lv_style_plain);
    style_tv_btn_bg.body.main_color = lv_color_hex(0x487fb7);
    style_tv_btn_bg.body.grad_color = lv_color_hex(0x487fb7);
    style_tv_btn_bg.body.padding.top = 0;
    style_tv_btn_bg.body.padding.bottom = 0;

    static lv_style_t style_tv_btn_rel;
    lv_style_copy(&style_tv_btn_rel, &lv_style_btn_rel);
    style_tv_btn_rel.body.opa = LV_OPA_TRANSP;
    style_tv_btn_rel.body.border.width = 0;

    static lv_style_t style_tv_btn_pr;
    lv_style_copy(&style_tv_btn_pr, &lv_style_btn_pr);
    style_tv_btn_pr.body.radius = 0;
    style_tv_btn_pr.body.opa = LV_OPA_50;
    style_tv_btn_pr.body.main_color = LV_COLOR_WHITE;
    style_tv_btn_pr.body.grad_color = LV_COLOR_WHITE;
    style_tv_btn_pr.body.border.width = 0;
    style_tv_btn_pr.text.color = LV_COLOR_GRAY;

    lv_obj_t * tv = lv_tabview_create(lv_disp_get_scr_act(NULL), NULL);
    lv_obj_set_size(tv, hres, vres);

    lv_obj_t * tab1 = lv_tabview_add_tab(tv, "AndrewPlayground");

    lv_tabview_set_style(tv, LV_TABVIEW_STYLE_BTN_BG, &style_tv_btn_bg);
    lv_tabview_set_style(tv, LV_TABVIEW_STYLE_INDIC, &lv_style_plain);
    lv_tabview_set_style(tv, LV_TABVIEW_STYLE_BTN_REL, &style_tv_btn_rel);
    lv_tabview_set_style(tv, LV_TABVIEW_STYLE_BTN_PR, &style_tv_btn_pr);
    lv_tabview_set_style(tv, LV_TABVIEW_STYLE_BTN_TGL_REL, &style_tv_btn_rel);
    lv_tabview_set_style(tv, LV_TABVIEW_STYLE_BTN_TGL_PR, &style_tv_btn_pr);

    write_create(tab1);

}


/**********************
 *   STATIC FUNCTIONS
 **********************/

static void write_create(lv_obj_t * parent)
{
    lv_page_set_style(parent, LV_PAGE_STYLE_BG, &lv_style_transp_fit);
    lv_page_set_style(parent, LV_PAGE_STYLE_SCRL, &lv_style_transp_fit);

    lv_page_set_sb_mode(parent, LV_SB_MODE_OFF);

    static lv_style_t style_ta;
    lv_style_copy(&style_ta, &lv_style_pretty);
    style_ta.body.opa = LV_OPA_30;
    style_ta.body.radius = 0;
    style_ta.text.color = lv_color_hex3(0x222);

    style_kb.body.opa = LV_OPA_70;
    style_kb.body.main_color = lv_color_hex3(0x333);
    style_kb.body.grad_color = lv_color_hex3(0x333);
    style_kb.body.padding.left = 0;
    style_kb.body.padding.right = 0;
    style_kb.body.padding.top = 0;
    style_kb.body.padding.bottom = 0;
    style_kb.body.padding.inner = 0;

    lv_style_copy(&style_kb_rel, &lv_style_plain);
    style_kb_rel.body.opa = LV_OPA_TRANSP;
    style_kb_rel.body.radius = 0;
    style_kb_rel.body.border.width = 1;
    style_kb_rel.body.border.color = LV_COLOR_SILVER;
    style_kb_rel.body.border.opa = LV_OPA_50;
    style_kb_rel.body.main_color = lv_color_hex3(0x333);    /*Recommended if LV_VDB_SIZE == 0 and bpp > 1 fonts are used*/
    style_kb_rel.body.grad_color = lv_color_hex3(0x333);
    style_kb_rel.text.color = LV_COLOR_WHITE;

    lv_style_copy(&style_kb_pr, &lv_style_plain);
    style_kb_pr.body.radius = 0;
    style_kb_pr.body.opa = LV_OPA_50;
    style_kb_pr.body.main_color = LV_COLOR_WHITE;
    style_kb_pr.body.grad_color = LV_COLOR_WHITE;
    style_kb_pr.body.border.width = 1;
    style_kb_pr.body.border.color = LV_COLOR_SILVER;

    lv_obj_t * bar1; //this creates a new object
    bar1 = lv_bar_create(parent,NULL); //assigns our variable to become a bar.
    lv_bar_set_range(bar1,0,100); //sets the range of bar1 between 0 and 100
    lv_bar_set_value(bar1,90,LV_ANIM_ON); //sets the value of bar1 to 90, animation to fill it are on.

    lv_obj_t * bar2;
    bar2 = lv_bar_create(bar1,NULL);
    lv_obj_set_parent(bar2,bar1);
    lv_bar_set_range(bar2,0,100);
    lv_bar_set_value(bar2,10,LV_ANIM_ON);
    lv_obj_align(bar2,bar1,LV_ALIGN_CENTER,0,15);
    

}

#endif  /*LV_USE_DEMO*/
