// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.2
// LVGL version: 8.3.6
// Project name: PubRemote

#include "ui.h"

void ui_StatsScreen_screen_init(void)
{
ui_StatsScreen = lv_obj_create(NULL);
lv_obj_clear_flag( ui_StatsScreen, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_DutyCycle = lv_arc_create(ui_StatsScreen);
lv_obj_set_width( ui_DutyCycle, lv_pct(100));
lv_obj_set_height( ui_DutyCycle, lv_pct(100));
lv_obj_set_align( ui_DutyCycle, LV_ALIGN_CENTER );
lv_arc_set_value(ui_DutyCycle, 0);
lv_obj_set_style_arc_color(ui_DutyCycle, lv_color_hex(0x414141), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_arc_opa(ui_DutyCycle, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_arc_width(ui_DutyCycle, 15, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_set_style_arc_width(ui_DutyCycle, 15, LV_PART_INDICATOR| LV_STATE_DEFAULT);

lv_obj_set_style_opa(ui_DutyCycle, 0, LV_PART_KNOB| LV_STATE_DEFAULT);

ui_LeftSensor = lv_arc_create(ui_StatsScreen);
lv_obj_set_width( ui_LeftSensor, lv_pct(100));
lv_obj_set_height( ui_LeftSensor, lv_pct(100));
lv_obj_set_align( ui_LeftSensor, LV_ALIGN_CENTER );
lv_arc_set_range(ui_LeftSensor, 0,1);
lv_arc_set_value(ui_LeftSensor, 0);
lv_arc_set_bg_angles(ui_LeftSensor,93,105);
lv_obj_set_style_arc_color(ui_LeftSensor, lv_color_hex(0x414141), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_arc_opa(ui_LeftSensor, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_arc_width(ui_LeftSensor, 8, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_set_style_arc_color(ui_LeftSensor, lv_color_hex(0xFFFFFF), LV_PART_INDICATOR | LV_STATE_DEFAULT );
lv_obj_set_style_arc_opa(ui_LeftSensor, 255, LV_PART_INDICATOR| LV_STATE_DEFAULT);
lv_obj_set_style_arc_width(ui_LeftSensor, 8, LV_PART_INDICATOR| LV_STATE_DEFAULT);

lv_obj_set_style_bg_color(ui_LeftSensor, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_LeftSensor, 0, LV_PART_KNOB| LV_STATE_DEFAULT);

ui_RightSensor = lv_arc_create(ui_StatsScreen);
lv_obj_set_width( ui_RightSensor, lv_pct(100));
lv_obj_set_height( ui_RightSensor, lv_pct(100));
lv_obj_set_align( ui_RightSensor, LV_ALIGN_CENTER );
lv_arc_set_range(ui_RightSensor, 0,1);
lv_arc_set_value(ui_RightSensor, 0);
lv_arc_set_bg_angles(ui_RightSensor,75,87);
lv_obj_set_style_arc_color(ui_RightSensor, lv_color_hex(0x414141), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_arc_opa(ui_RightSensor, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_arc_width(ui_RightSensor, 8, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_set_style_arc_color(ui_RightSensor, lv_color_hex(0xFFFFFF), LV_PART_INDICATOR | LV_STATE_DEFAULT );
lv_obj_set_style_arc_opa(ui_RightSensor, 255, LV_PART_INDICATOR| LV_STATE_DEFAULT);
lv_obj_set_style_arc_width(ui_RightSensor, 8, LV_PART_INDICATOR| LV_STATE_DEFAULT);

lv_obj_set_style_bg_color(ui_RightSensor, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_RightSensor, 0, LV_PART_KNOB| LV_STATE_DEFAULT);

ui_StatsScreenContent = lv_obj_create(ui_StatsScreen);
lv_obj_remove_style_all(ui_StatsScreenContent);
lv_obj_set_width( ui_StatsScreenContent, lv_pct(100));
lv_obj_set_height( ui_StatsScreenContent, lv_pct(100));
lv_obj_set_align( ui_StatsScreenContent, LV_ALIGN_CENTER );
lv_obj_set_flex_flow(ui_StatsScreenContent,LV_FLEX_FLOW_COLUMN);
lv_obj_set_flex_align(ui_StatsScreenContent, LV_FLEX_ALIGN_SPACE_BETWEEN, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
lv_obj_add_flag( ui_StatsScreenContent, LV_OBJ_FLAG_SCROLL_ONE );   /// Flags
lv_obj_clear_flag( ui_StatsScreenContent, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_MOMENTUM );    /// Flags
lv_obj_set_style_pad_left(ui_StatsScreenContent, 20, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_right(ui_StatsScreenContent, 20, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_top(ui_StatsScreenContent, 20, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_bottom(ui_StatsScreenContent, 5, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_StatsScreenHeader = lv_obj_create(ui_StatsScreenContent);
lv_obj_remove_style_all(ui_StatsScreenHeader);
lv_obj_set_width( ui_StatsScreenHeader, lv_pct(100));
lv_obj_set_height( ui_StatsScreenHeader, lv_pct(25));
lv_obj_set_x( ui_StatsScreenHeader, 69 );
lv_obj_set_y( ui_StatsScreenHeader, -16 );
lv_obj_set_align( ui_StatsScreenHeader, LV_ALIGN_CENTER );
lv_obj_set_flex_flow(ui_StatsScreenHeader,LV_FLEX_FLOW_COLUMN);
lv_obj_set_flex_align(ui_StatsScreenHeader, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
lv_obj_clear_flag( ui_StatsScreenHeader, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_pad_left(ui_StatsScreenHeader, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_right(ui_StatsScreenHeader, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_top(ui_StatsScreenHeader, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_bottom(ui_StatsScreenHeader, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Logo = lv_img_create(ui_StatsScreenHeader);
lv_img_set_src(ui_Logo, &ui_img_icon_png);
lv_obj_set_width( ui_Logo, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Logo, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_Logo, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Logo, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Logo, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_TimeDisplay = lv_label_create(ui_StatsScreenHeader);
lv_obj_set_width( ui_TimeDisplay, lv_pct(100));
lv_obj_set_height( ui_TimeDisplay, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_TimeDisplay, LV_ALIGN_CENTER );
lv_label_set_long_mode(ui_TimeDisplay,LV_LABEL_LONG_DOT);
lv_label_set_text(ui_TimeDisplay,"");
lv_obj_set_style_text_align(ui_TimeDisplay, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_TimeDisplay, &ui_font_Open_Sans_14, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_left(ui_TimeDisplay, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_right(ui_TimeDisplay, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_top(ui_TimeDisplay, 5, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_bottom(ui_TimeDisplay, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_StatsScreenBody = lv_obj_create(ui_StatsScreenContent);
lv_obj_remove_style_all(ui_StatsScreenBody);
lv_obj_set_width( ui_StatsScreenBody, lv_pct(100));
lv_obj_set_height( ui_StatsScreenBody, lv_pct(60));
lv_obj_set_x( ui_StatsScreenBody, 69 );
lv_obj_set_y( ui_StatsScreenBody, -16 );
lv_obj_set_align( ui_StatsScreenBody, LV_ALIGN_CENTER );
lv_obj_set_flex_flow(ui_StatsScreenBody,LV_FLEX_FLOW_COLUMN);
lv_obj_set_flex_align(ui_StatsScreenBody, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
lv_obj_clear_flag( ui_StatsScreenBody, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_PrimaryStat = lv_label_create(ui_StatsScreenBody);
lv_obj_set_width( ui_PrimaryStat, lv_pct(100));
lv_obj_set_height( ui_PrimaryStat, LV_SIZE_CONTENT);   /// 1
lv_obj_set_y( ui_PrimaryStat, 4 );
lv_obj_set_x( ui_PrimaryStat, lv_pct(-14) );
lv_obj_set_align( ui_PrimaryStat, LV_ALIGN_CENTER );
lv_label_set_long_mode(ui_PrimaryStat,LV_LABEL_LONG_DOT);
lv_label_set_text(ui_PrimaryStat,"0.0");
lv_obj_set_style_text_align(ui_PrimaryStat, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_PrimaryStat, &ui_font_Open_Sans_Bold_48, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_PrimaryStatUnit = lv_label_create(ui_PrimaryStat);
lv_obj_set_width( ui_PrimaryStatUnit, 40);
lv_obj_set_height( ui_PrimaryStatUnit, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_PrimaryStatUnit, 64 );
lv_obj_set_y( ui_PrimaryStatUnit, 7 );
lv_obj_set_align( ui_PrimaryStatUnit, LV_ALIGN_CENTER );
lv_label_set_text(ui_PrimaryStatUnit,"kph");
lv_obj_add_flag( ui_PrimaryStatUnit, LV_OBJ_FLAG_FLOATING );   /// Flags
lv_obj_set_style_text_font(ui_PrimaryStatUnit, &lv_font_montserrat_14, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_SecondaryStats = lv_obj_create(ui_StatsScreenBody);
lv_obj_set_width( ui_SecondaryStats, lv_pct(100));
lv_obj_set_height( ui_SecondaryStats, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_SecondaryStats, LV_ALIGN_CENTER );
lv_obj_set_flex_flow(ui_SecondaryStats,LV_FLEX_FLOW_ROW);
lv_obj_set_flex_align(ui_SecondaryStats, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
lv_obj_set_scrollbar_mode(ui_SecondaryStats, LV_SCROLLBAR_MODE_ACTIVE);
lv_obj_set_style_bg_color(ui_SecondaryStats, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_SecondaryStats, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_width(ui_SecondaryStats, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_left(ui_SecondaryStats, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_right(ui_SecondaryStats, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_top(ui_SecondaryStats, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_bottom(ui_SecondaryStats, 12, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_SecondaryStats, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_SecondaryStats, &ui_font_Open_Sans_14, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_ConnectionState = lv_label_create(ui_SecondaryStats);
lv_obj_set_width( ui_ConnectionState, lv_pct(100));
lv_obj_set_height( ui_ConnectionState, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_ConnectionState, -17 );
lv_obj_set_y( ui_ConnectionState, 33 );
lv_obj_set_align( ui_ConnectionState, LV_ALIGN_CENTER );
lv_label_set_long_mode(ui_ConnectionState,LV_LABEL_LONG_DOT);
lv_label_set_text(ui_ConnectionState,"Disconnected");
lv_obj_add_flag( ui_ConnectionState, LV_OBJ_FLAG_SCROLL_ONE );   /// Flags
lv_obj_clear_flag( ui_ConnectionState, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM | LV_OBJ_FLAG_SCROLL_CHAIN );    /// Flags
lv_obj_set_scrollbar_mode(ui_ConnectionState, LV_SCROLLBAR_MODE_OFF);

ui_DistanceStats = lv_label_create(ui_SecondaryStats);
lv_obj_set_width( ui_DistanceStats, lv_pct(100));
lv_obj_set_height( ui_DistanceStats, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_DistanceStats, -17 );
lv_obj_set_y( ui_DistanceStats, 33 );
lv_obj_set_align( ui_DistanceStats, LV_ALIGN_CENTER );
lv_label_set_long_mode(ui_DistanceStats,LV_LABEL_LONG_DOT);
lv_label_set_text(ui_DistanceStats,"Trip: 0.0km | Rem: 0.0km");
lv_obj_add_flag( ui_DistanceStats, LV_OBJ_FLAG_SCROLL_ONE );   /// Flags
lv_obj_clear_flag( ui_DistanceStats, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM | LV_OBJ_FLAG_SCROLL_CHAIN );    /// Flags
lv_obj_set_scrollbar_mode(ui_DistanceStats, LV_SCROLLBAR_MODE_OFF);

ui_TempStats = lv_label_create(ui_SecondaryStats);
lv_obj_set_width( ui_TempStats, lv_pct(100));
lv_obj_set_height( ui_TempStats, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_TempStats, -17 );
lv_obj_set_y( ui_TempStats, 33 );
lv_obj_set_align( ui_TempStats, LV_ALIGN_CENTER );
lv_label_set_long_mode(ui_TempStats,LV_LABEL_LONG_DOT);
lv_label_set_text(ui_TempStats,"Mot: 0C | Cont: 0C");
lv_obj_add_flag( ui_TempStats, LV_OBJ_FLAG_SCROLL_ONE );   /// Flags
lv_obj_clear_flag( ui_TempStats, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM | LV_OBJ_FLAG_SCROLL_CHAIN );    /// Flags
lv_obj_set_scrollbar_mode(ui_TempStats, LV_SCROLLBAR_MODE_OFF);

ui_StatsScreenFooter = lv_obj_create(ui_StatsScreenContent);
lv_obj_remove_style_all(ui_StatsScreenFooter);
lv_obj_set_width( ui_StatsScreenFooter, lv_pct(100));
lv_obj_set_height( ui_StatsScreenFooter, lv_pct(15));
lv_obj_set_x( ui_StatsScreenFooter, 69 );
lv_obj_set_y( ui_StatsScreenFooter, -16 );
lv_obj_set_align( ui_StatsScreenFooter, LV_ALIGN_CENTER );
lv_obj_set_flex_flow(ui_StatsScreenFooter,LV_FLEX_FLOW_COLUMN);
lv_obj_set_flex_align(ui_StatsScreenFooter, LV_FLEX_ALIGN_END, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
lv_obj_clear_flag( ui_StatsScreenFooter, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_BatteryDisplay = lv_label_create(ui_StatsScreenFooter);
lv_obj_set_width( ui_BatteryDisplay, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_BatteryDisplay, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_BatteryDisplay, LV_ALIGN_CENTER );
lv_label_set_long_mode(ui_BatteryDisplay,LV_LABEL_LONG_CLIP);
lv_label_set_text(ui_BatteryDisplay,"0%");
lv_obj_set_style_text_font(ui_BatteryDisplay, &ui_font_Open_Sans_Bold_14, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_left(ui_BatteryDisplay, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_right(ui_BatteryDisplay, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_top(ui_BatteryDisplay, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_bottom(ui_BatteryDisplay, 5, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_add_event_cb(ui_BatteryDisplay, ui_event_BatteryDisplay, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_StatsScreen, ui_event_StatsScreen, LV_EVENT_ALL, NULL);

}
