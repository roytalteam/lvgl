# TODOs for major versions
Major versions released typically when API changes are required

## Contributing
Please create an issue to suggest a new feature instead of adding pull request to this file.

## v5 
**Architectural changes**
- [ ] rename repository from *lvgl* to *littlevgl*
- [ ] rename repository from *proj_pc* to *pc_simulator*
- [ ] integrate *hal* in LittlevGL as a normal folder
- [ ] integrate *misc* in LittlevGl as submodule
- [ ] create a new repository for examples
- [ ] convert Applications into simple examples 

**API changes**
- [ ] define renames: e.g. *USE_LV_BTN* to *LV_BTN_USE*
- [ ] Remove LV_DOWNSCALE (LV_ANTIALIAS will be used instead)
- [ ] *lv_ta_get_txt* rename to *lv_ta_get_text* 
- [ ] lv_btnm: rework width control. Now a control byte is used for *width*, *hide* and *no long press* settings. 
- [x] lv_btnm_set_styles for *tpr*, *trel* and *ina* too
- [x] LV_LABEL_LONG_DOTS removed, use LV_LABEL_LONG_ROLL instead
- [x] *lv_list_set_element_text_roll()* removed.
- [x] *lv_ddlist_set_fix_height()* instead of *auto_size*
- [x] rename *lv_dispi_...* to *lv_indev_...*
- [x] lv_dispi_t removed from lv_action_type_t. Use lv_indev_act() instead
