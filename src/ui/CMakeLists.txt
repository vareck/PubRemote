SET(SOURCES ui_SplashScreen.c
    ui_StatsScreen.c
    ui_SettingsScreen.c
    ui_BrightnessScreen.c
    ui_PairingScreen.c
    ui_PowerScreen.c
    ui_CalibrationScreen.c
    ui_theme_manager.c
    ui_themes.c
    ui.c
    ui_comp_hook.c
    ui_helpers.c
    ui_img_icon_png.c
    fonts/ui_font_Inter_14.c
    fonts/ui_font_Inter_Bold_14.c
    fonts/ui_font_Inter_Bold_48.c)

add_library(ui ${SOURCES})
