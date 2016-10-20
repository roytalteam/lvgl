/**
 * @file lv_list.h
 * 
 */

#ifndef LV_LIST_H
#define LV_LIST_H

/*********************
 *      INCLUDES
 *********************/
#include "lv_conf.h"
#if USE_LV_LIST != 0

#include "../lv_obj/lv_obj.h"
#include "lv_page.h"
#include "lv_btn.h"
#include "lv_label.h"
#include "lv_img.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/*Style of list*/
typedef struct
{
	lv_pages_t bg_page; /*Style of ancestor*/
	/*New style element for this type */
	lv_btns_t liste_btn;
	lv_labels_t liste_label;
	lv_imgs_t liste_img;
	lv_rect_layout_t liste_layout;
}lv_lists_t;

/*Built-in styles of list*/
typedef enum
{
	LV_LISTS_DEF,
	LV_LISTS_GAP,
	LV_LISTS_TIGHT,
}lv_lists_builtin_t;

typedef enum
{
	LV_LIST_FIT_CONTENT,
	LV_LIST_FIT_HOLDER,
	LV_LIST_FIT_LONGEST,
}lv_list_fit_t;

/*Data of list*/
typedef struct
{
	lv_page_ext_t page_ext; /*Ext. of ancestor*/
	/*New data for this type */
	uint8_t fit;	/*Width adjustment of list elements (from lv_list_adjsut_t)*/
}lv_list_ext_t;

/**********************
 * GLOBAL PROTOTYPES
 **********************/
lv_obj_t * lv_list_create(lv_obj_t * par, lv_obj_t * copy);
bool lv_list_signal(lv_obj_t * list, lv_signal_t sign, void * param);
lv_obj_t * lv_list_add(lv_obj_t * list, const char * img_fn, const char * txt, bool (*rel_action)(lv_obj_t *, lv_dispi_t *));
lv_lists_t * lv_lists_get(lv_lists_builtin_t style, lv_lists_t * copy);

void lv_list_down(lv_obj_t * list);
void lv_list_up(lv_obj_t * list);
void lv_list_set_fit(lv_obj_t * list, lv_list_fit_t fit);
lv_list_fit_t lv_list_get_fit(lv_obj_t * list);

/**********************
 *      MACROS
 **********************/

#endif

#endif