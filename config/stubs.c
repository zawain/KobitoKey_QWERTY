#include <stdint.h>

// ZMK Studio用のLEDダミー関数（エラー回避用）
uint8_t zmk_rgbled_widget_get_layer_color(uint8_t layer_id) { return 0; }
void zmk_rgbled_widget_set_layer_color(uint8_t layer_id, uint8_t color_idx) {}

// 右手側のスクロール反転エラー回避用ダミー関数
int zmk_pointing_toggle_scroll_invert(void) { return 0; }
