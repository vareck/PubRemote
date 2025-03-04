// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.2
// LVGL version: 8.3.11
// Project name: PubRemote

#include "ui.h"

void ui_PowerScreen_screen_init(void)
{
    ui_PowerScreen = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_PowerScreen, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    ui_object_set_themeable_style_property(ui_PowerScreen, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_COLOR,
                                           _ui_theme_color_Background);
    ui_object_set_themeable_style_property(ui_PowerScreen, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_OPA,
                                           _ui_theme_alpha_Background);

    ui_PowerContent = lv_obj_create(ui_PowerScreen);
    lv_obj_remove_style_all(ui_PowerContent);
    lv_obj_set_width(ui_PowerContent, lv_pct(100));
    lv_obj_set_height(ui_PowerContent, lv_pct(100));
    lv_obj_set_align(ui_PowerContent, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_PowerContent, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_PowerContent, LV_FLEX_ALIGN_SPACE_BETWEEN, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_PowerContent, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_text_font(ui_PowerContent, &ui_font_Inter_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PowerHeader = lv_obj_create(ui_PowerContent);
    lv_obj_remove_style_all(ui_PowerHeader);
    lv_obj_set_width(ui_PowerHeader, 100);
    lv_obj_set_height(ui_PowerHeader, lv_pct(25));
    lv_obj_set_align(ui_PowerHeader, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_PowerHeader, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_PowerBody = lv_obj_create(ui_PowerContent);
    lv_obj_remove_style_all(ui_PowerBody);
    lv_obj_set_width(ui_PowerBody, lv_pct(65));
    lv_obj_set_height(ui_PowerBody, LV_SIZE_CONTENT);    /// 50
    lv_obj_set_align(ui_PowerBody, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_PowerBody, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_PowerBody, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_PowerBody, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_pad_row(ui_PowerBody, 12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_column(ui_PowerBody, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_AutoOffTime = lv_dropdown_create(ui_PowerBody);
    lv_dropdown_set_options(ui_AutoOffTime, "Disabled\n2 minutes\n5 minutes\n10 minutes\n");
    lv_obj_set_width(ui_AutoOffTime, 150);
    lv_obj_set_height(ui_AutoOffTime, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_AutoOffTime, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_AutoOffTime, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_set_style_text_font(ui_AutoOffTime, &ui_font_Inter_Bold_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_text_font(ui_AutoOffTime, &lv_font_montserrat_14, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_text_font(lv_dropdown_get_list(ui_AutoOffTime), &ui_font_Inter_14,  LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PowerLabel = lv_label_create(ui_PowerBody);
    lv_obj_set_width(ui_PowerLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_PowerLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_PowerLabel, 19);
    lv_obj_set_y(ui_PowerLabel, 38);
    lv_obj_set_align(ui_PowerLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_PowerLabel, "Auto-off delay");

    ui_PowerFooter = lv_obj_create(ui_PowerContent);
    lv_obj_remove_style_all(ui_PowerFooter);
    lv_obj_set_width(ui_PowerFooter, lv_pct(65));
    lv_obj_set_height(ui_PowerFooter, lv_pct(25));
    lv_obj_set_align(ui_PowerFooter, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_PowerFooter, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_PowerFooter, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_START);
    lv_obj_clear_flag(ui_PowerFooter, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_pad_left(ui_PowerFooter, 48, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_PowerFooter, 48, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_PowerFooter, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_PowerFooter, 24, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_row(ui_PowerFooter, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_column(ui_PowerFooter, 12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PowerMainActionButton = lv_btn_create(ui_PowerFooter);
    lv_obj_set_width(ui_PowerMainActionButton, 80);
    lv_obj_set_height(ui_PowerMainActionButton, 42);
    lv_obj_set_align(ui_PowerMainActionButton, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_PowerMainActionButton, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_PowerMainActionButton, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_text_font(ui_PowerMainActionButton, &ui_font_Inter_Bold_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PowerMainActionButtonLabel = lv_label_create(ui_PowerMainActionButton);
    lv_obj_set_width(ui_PowerMainActionButtonLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_PowerMainActionButtonLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_PowerMainActionButtonLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_PowerMainActionButtonLabel, "Save");

    lv_obj_add_event_cb(ui_AutoOffTime, ui_event_AutoOffTime, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_PowerMainActionButton, ui_event_PowerMainActionButton, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_PowerScreen, ui_event_PowerScreen, LV_EVENT_ALL, NULL);

}
