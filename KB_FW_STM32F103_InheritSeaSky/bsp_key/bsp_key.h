/*MIT License

Copyright (c) 2020 SEASKY-Master

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/
#ifndef _BSP_KEY_H
#define _BSP_KEY_H
#include "struct_typedef.h"
#include "stm32f1xx_hal.h"
#include "keyboard_cfg.h"

#define MAX_ROW 12
#define MAX_COL 17
// #define MAX_KEY 87

#define PRESS_LEVEL 0 //定义按键按下时的电平

#define READ_DELAY_TIME 1	//定义切换扫描IO后的延时时间 
#define READ_TIME 7         //MAX_ROW*READ_DELAY_TIME

#define TIME_CYCLE  7	    //MAX_ROW*READ_DELAY_TIME 单位ms

#define TIME_RESTER_COUNT  2	//定义按键复位时间，一般来说按键弹起最好比按键按下快

#define TIME_PRESS_COUNT   2    //实际时间 TIME_CYCLE*TIME_P_COUNT (单位ms)确认为短按时间
#define TIME_PRESS_L_COUNT 30	//实际时间 TIME_CYCLE*TIME_L_COUNT (单位ms)确认为长按时间
#define TIME_MAX_COUNT     300  //定义按键最长计数时间

#define KEY_NO_USER 255

/*宏定义特殊按键 减少if判断的使用*/

#define KEY_LEFT_SHIFT_ROW    5
#define KEY_RIGHT_SHIFT_ROW   11
#define KEY_LEFT_CONTROL_ROW  5
#define KEY_LEFT_WIN_ROW      5
#define KEY_LEFT_ALT_ROW      5
#define KEY_RIGHT_CONTROL_ROW 11
//      #define               KEY_RIGHT_ALT_ROW 5
//      #define               KEY_RIGHT_WIN_ROW 5

#define KEY_LEFT_SHIFT_COL    1
#define KEY_RIGHT_SHIFT_COL   12
#define KEY_LEFT_CONTROL_COL  5
#define KEY_LEFT_WIN_COL      2
#define KEY_LEFT_ALT_COL      4
#define KEY_RIGHT_CONTROL_COL 9
//      #define               KEY_RIGHT_ALT_COL 2
//      #define               KEY_RIGHT_WIN_COL 2

#define KEY_LEFT_SHIFT       KEY_LEFT_SHIFT_ROW  ][KEY_LEFT_SHIFT_COL  
#define KEY_RIGHT_SHIFT       KEY_RIGHT_SHIFT_ROW ][KEY_RIGHT_SHIFT_COL 
#define KEY_LEFT_CONTROL     KEY_LEFT_CONTROL_ROW][KEY_LEFT_CONTROL_COL
#define KEY_LEFT_WIN         KEY_LEFT_WIN_ROW    ][KEY_LEFT_WIN_COL    
#define KEY_LEFT_ALT         KEY_LEFT_ALT_ROW    ][KEY_LEFT_ALT_COL   
#define KEY_RIGHT_CONTROL     KEY_RIGHT_CONTROL_ROW][KEY_RIGHT_CONTROL_COL 
//      #define               KEY_RIGHT_ALT     5][2
//      #define               KEY_RIGHT_WIN     5][2

typedef enum
{
    KEY_UPSPRING,    //按键弹起
    KEY_PRESS,		 //按键按下
    KEY_PRESS_L_TIME,//按键长按
} key_states;

typedef struct
{
    key_states states;	//按键状态
    uint16_t time_count;//按键按下时间
    uint8_t rester_time_count;//按键复位时间
} key_time_info;

typedef struct
{
    GPIO_TypeDef* gpio;
    uint16_t	gpio_pin;
} key_gpio;
typedef struct
{
    keypad_page_t key_char;
    key_time_info press_it;

} key_press;

typedef struct
{
    uint8_t current_layer;
    key_gpio key_seg[MAX_ROW];
    key_gpio key_pos[MAX_COL];
    uint8_t key_is_press_seg[MAX_ROW][MAX_COL];//在所在行，判断是否按下
    key_press key_is_press[MAX_ROW][MAX_COL]; 	  //更新到ID
    keyboard_cfg keyboard;
} key_info_t;

typedef struct
{
    uint8_t row;
    uint8_t col;
} key_info_pos;

void mx_key_init(key_info_t *key_cfg);
void mx_key_init_layer1(key_info_t *key_cfg);
void mx_key_init_layer2(key_info_t *key_cfg);
void key_scan_gpio_set(key_info_t *key_cfg,uint8_t seg);
void key_scan_gpio_read(key_info_t *key_cfg,uint8_t seg);

void key_scan_updata(key_info_t *key_cfg);
uint8_t key_update(uint8_t *pTxbuf,key_info_t *key_cfg);
#endif
