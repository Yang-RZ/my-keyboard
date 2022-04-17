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
#include "main.h"
#include "bsp_key.h"
void key_info_get(key_info_t *key_cfg);

void mx_key_init(key_info_t *key_cfg)
{
    /* key seg gpio 配置*/
    key_cfg->key_seg[0].gpio     = R0_GPIO_Port;
    key_cfg->key_seg[0].gpio_pin = R0_Pin;
    key_cfg->key_seg[1].gpio     = R1_GPIO_Port;
    key_cfg->key_seg[1].gpio_pin = R1_Pin;
    key_cfg->key_seg[2].gpio     = R2_GPIO_Port;
    key_cfg->key_seg[2].gpio_pin = R2_Pin;
    key_cfg->key_seg[3].gpio     = R3_GPIO_Port;
    key_cfg->key_seg[3].gpio_pin = R3_Pin;
    key_cfg->key_seg[4].gpio     = R4_GPIO_Port;
    key_cfg->key_seg[4].gpio_pin = R4_Pin;
    key_cfg->key_seg[5].gpio     = R5_GPIO_Port;
    key_cfg->key_seg[5].gpio_pin = R5_Pin;
    key_cfg->key_seg[6].gpio     = R6_GPIO_Port;
    key_cfg->key_seg[6].gpio_pin = R6_Pin;
    key_cfg->key_seg[7].gpio     = R7_GPIO_Port;
    key_cfg->key_seg[7].gpio_pin = R7_Pin;
    key_cfg->key_seg[8].gpio     = R8_GPIO_Port;
    key_cfg->key_seg[8].gpio_pin = R8_Pin;
    key_cfg->key_seg[9].gpio     = R9_GPIO_Port;
    key_cfg->key_seg[9].gpio_pin = R9_Pin;
    key_cfg->key_seg[10].gpio     =R10_GPIO_Port;
    key_cfg->key_seg[10].gpio_pin =R10_Pin;
    key_cfg->key_seg[11].gpio     =R11_GPIO_Port;
    key_cfg->key_seg[11].gpio_pin =R11_Pin;

    /* key pos gpio 配置*/
    key_cfg->key_pos[0].gpio      = C0_GPIO_Port;
    key_cfg->key_pos[0].gpio_pin  = C0_Pin;
    key_cfg->key_pos[1].gpio      = C1_GPIO_Port;
    key_cfg->key_pos[1].gpio_pin  = C1_Pin;
    key_cfg->key_pos[2].gpio      = C2_GPIO_Port;
    key_cfg->key_pos[2].gpio_pin  = C2_Pin;
    key_cfg->key_pos[3].gpio      = C3_GPIO_Port;
    key_cfg->key_pos[3].gpio_pin  = C3_Pin;
    key_cfg->key_pos[4].gpio      = C4_GPIO_Port;
    key_cfg->key_pos[4].gpio_pin  = C4_Pin;
    key_cfg->key_pos[5].gpio      = C5_GPIO_Port;
    key_cfg->key_pos[5].gpio_pin  = C5_Pin;
    key_cfg->key_pos[6].gpio      = C6_GPIO_Port;
    key_cfg->key_pos[6].gpio_pin  = C6_Pin;
    key_cfg->key_pos[7].gpio      = C7_GPIO_Port;
    key_cfg->key_pos[7].gpio_pin  = C7_Pin;
    key_cfg->key_pos[8].gpio      = C8_GPIO_Port;
    key_cfg->key_pos[8].gpio_pin  = C8_Pin;
    key_cfg->key_pos[9].gpio     = C11_GPIO_Port;
    key_cfg->key_pos[9].gpio_pin = C11_Pin;
    key_cfg->key_pos[10].gpio     = C12_GPIO_Port;
    key_cfg->key_pos[10].gpio_pin = C12_Pin;
    key_cfg->key_pos[11].gpio     = C13_GPIO_Port;
    key_cfg->key_pos[11].gpio_pin = C13_Pin;
    key_cfg->key_pos[12].gpio     = C14_GPIO_Port;
    key_cfg->key_pos[12].gpio_pin = C14_Pin;
    key_cfg->key_pos[13].gpio     = C15_GPIO_Port;
    key_cfg->key_pos[13].gpio_pin = C15_Pin;
    key_cfg->key_pos[14].gpio     = C16_GPIO_Port;
    key_cfg->key_pos[14].gpio_pin = C16_Pin;
    key_cfg->key_pos[15].gpio     = C17_GPIO_Port;
    key_cfg->key_pos[15].gpio_pin = C17_Pin;
    key_cfg->key_pos[16].gpio     = C18_GPIO_Port;
    key_cfg->key_pos[16].gpio_pin = C18_Pin;
}

void mx_key_init_layer1(key_info_t *key_cfg)
{
    key_cfg->current_layer = 1;
	/*初始化键盘按键->向量表*/
    key_cfg->key_is_press[0][1].key_char = Keyboard_F1;
    key_cfg->key_is_press[0][2].key_char = Keyboard_F2;
    key_cfg->key_is_press[0][3].key_char = Keyboard_F3;
    key_cfg->key_is_press[0][4].key_char = Keyboard_F4;
    key_cfg->key_is_press[0][7].key_char = Keyboard_F5;
    key_cfg->key_is_press[1][0].key_char = Keyboard_BoLangXian;
    key_cfg->key_is_press[1][1].key_char = Keyboard_1;
    key_cfg->key_is_press[1][2].key_char = Keyboard_2;
    key_cfg->key_is_press[1][3].key_char = Keyboard_3;
    key_cfg->key_is_press[1][4].key_char = Keyboard_4;
    key_cfg->key_is_press[1][5].key_char = Keyboard_5;
    key_cfg->key_is_press[1][6].key_char = Keyboard_6;
    key_cfg->key_is_press[2][2].key_char = Keyboard_q;
    key_cfg->key_is_press[2][3].key_char = Keyboard_w;
    key_cfg->key_is_press[2][4].key_char = Keyboard_e;
    key_cfg->key_is_press[2][5].key_char = Keyboard_r;
    key_cfg->key_is_press[2][6].key_char = Keyboard_t;
    key_cfg->key_is_press[3][2].key_char = Keyboard_a;
    key_cfg->key_is_press[3][3].key_char = Keyboard_s;
    key_cfg->key_is_press[3][4].key_char = Keyboard_d;
    key_cfg->key_is_press[3][5].key_char = Keyboard_f;
    key_cfg->key_is_press[3][6].key_char = Keyboard_g;
    key_cfg->key_is_press[3][7].key_char = Keyboard_Home;
    key_cfg->key_is_press[4][1].key_char = Keyboard_ESCAPE;
    key_cfg->key_is_press[4][2].key_char = Keyboard_z;
    key_cfg->key_is_press[4][3].key_char = Keyboard_x;
    key_cfg->key_is_press[4][4].key_char = Keyboard_c;
    key_cfg->key_is_press[4][5].key_char = Keyboard_v;
    key_cfg->key_is_press[4][6].key_char = Keyboard_b;
    key_cfg->key_is_press[4][7].key_char = Keyboard_End;
    key_cfg->key_is_press[5][1].key_char = Keyboard_LeftShift;
    key_cfg->key_is_press[5][2].key_char = Keyboard_LeftWindows;
    key_cfg->key_is_press[5][4].key_char = Keyboard_LeftAlt;
    key_cfg->key_is_press[5][5].key_char = Keyboard_LeftControl;
    key_cfg->key_is_press[5][6].key_char = Keyboard_KongGe;
    key_cfg->key_is_press[6][8].key_char = Keyboard_F6;
    key_cfg->key_is_press[6][10].key_char = Keyboard_F9;
    key_cfg->key_is_press[6][11].key_char = Keyboard_F10;
    key_cfg->key_is_press[6][12].key_char = Keyboard_F11;
    key_cfg->key_is_press[6][13].key_char = Keyboard_F12;
    key_cfg->key_is_press[6][16].key_char = Keyboard_F8;
    key_cfg->key_is_press[7][8].key_char = Keyboard_F7;
    key_cfg->key_is_press[7][9].key_char = Keyboard_8;
    key_cfg->key_is_press[7][10].key_char = Keyboard_9;
    key_cfg->key_is_press[7][11].key_char = Keyboard_0;
    key_cfg->key_is_press[7][12].key_char = Keyboard_JianHao;
    key_cfg->key_is_press[7][13].key_char = Keyboard_DengHao;
    key_cfg->key_is_press[7][16].key_char = Keyboard_7;
    key_cfg->key_is_press[8][8].key_char = Keyboard_PageUp;
    key_cfg->key_is_press[8][9].key_char = Keyboard_u;
    key_cfg->key_is_press[8][10].key_char = Keyboard_i;
    key_cfg->key_is_press[8][11].key_char = Keyboard_o;
    key_cfg->key_is_press[8][12].key_char = Keyboard_p;
    key_cfg->key_is_press[8][13].key_char = Keyboard_ZuoZhongKuoHao;
    key_cfg->key_is_press[8][14].key_char = Keyboard_YouZhongKuoHao;
    key_cfg->key_is_press[8][15].key_char = Keyboard_FanXieGang;
    key_cfg->key_is_press[8][16].key_char = Keyboard_y;
    key_cfg->key_is_press[9][8].key_char = Keyboard_PageDown;
    key_cfg->key_is_press[9][9].key_char = Keyboard_j;
    key_cfg->key_is_press[9][10].key_char = Keyboard_k;
    key_cfg->key_is_press[9][11].key_char = Keyboard_l;
    key_cfg->key_is_press[9][12].key_char = Keyboard_FenHao;
    key_cfg->key_is_press[9][13].key_char = Keyboard_DanYinHao;
    key_cfg->key_is_press[9][14].key_char = Keyboard_ENTER;
    key_cfg->key_is_press[9][16].key_char = Keyboard_h;
    key_cfg->key_is_press[10][8].key_char = Keyboard_Backspace;
    key_cfg->key_is_press[10][9].key_char = Keyboard_m;
    key_cfg->key_is_press[10][10].key_char = Keyboard_Douhao;
    key_cfg->key_is_press[10][11].key_char = Keyboard_JuHao;
    key_cfg->key_is_press[10][12].key_char = Keyboard_XieGang_WenHao;
    key_cfg->key_is_press[10][14].key_char = Keyboard_UpArrow;
    key_cfg->key_is_press[10][16].key_char = Keyboard_n;
    key_cfg->key_is_press[11][8].key_char = Keyboard_Delete;
    key_cfg->key_is_press[11][9].key_char = Keyboard_RightControl;
    key_cfg->key_is_press[11][12].key_char = Keyboard_RightShift;
    key_cfg->key_is_press[11][13].key_char = Keyboard_LeftArrow;
    key_cfg->key_is_press[11][14].key_char = Keyboard_DownArrow;
    key_cfg->key_is_press[11][15].key_char = Keyboard_RightArrow;
    key_cfg->key_is_press[11][16].key_char = Keyboard_Tab;
}

void mx_key_init_layer2(key_info_t *key_cfg)
{
    key_cfg->current_layer = 2;
	/*初始化键盘按键->向量表*/
    key_cfg->key_is_press[0][1].key_char = keyboard_MEDIA_PLAYPAUSE;
    key_cfg->key_is_press[0][2].key_char = keyboard_VolumnUp;
    key_cfg->key_is_press[0][3].key_char = keyboard_VolumnDown;
    key_cfg->key_is_press[0][4].key_char = keyboard_Mute;
    key_cfg->key_is_press[0][7].key_char = 0;
    key_cfg->key_is_press[1][0].key_char = 0;
    key_cfg->key_is_press[1][1].key_char = 0;
    key_cfg->key_is_press[1][2].key_char = 0;
    key_cfg->key_is_press[1][3].key_char = 0;
    key_cfg->key_is_press[1][4].key_char = 0;
    key_cfg->key_is_press[1][5].key_char = 0;
    key_cfg->key_is_press[1][6].key_char = 0;
    key_cfg->key_is_press[2][2].key_char = 0;
    key_cfg->key_is_press[2][3].key_char = 0;
    key_cfg->key_is_press[2][4].key_char = 0;
    key_cfg->key_is_press[2][5].key_char = 0;
    key_cfg->key_is_press[2][6].key_char = 0;
    key_cfg->key_is_press[3][2].key_char = 0;
    key_cfg->key_is_press[3][3].key_char = 0;
    key_cfg->key_is_press[3][4].key_char = 0;
    key_cfg->key_is_press[3][5].key_char = 0;
    key_cfg->key_is_press[3][6].key_char = 0;
    key_cfg->key_is_press[3][7].key_char = 0;
    key_cfg->key_is_press[4][1].key_char = 0;
    key_cfg->key_is_press[4][2].key_char = 0;
    key_cfg->key_is_press[4][3].key_char = 0;
    key_cfg->key_is_press[4][4].key_char = 0;
    key_cfg->key_is_press[4][5].key_char = 0;
    key_cfg->key_is_press[4][6].key_char = 0;
    key_cfg->key_is_press[4][7].key_char = 0;
    key_cfg->key_is_press[5][1].key_char = 0;
    key_cfg->key_is_press[5][2].key_char = 0;
    key_cfg->key_is_press[5][4].key_char = 0;
    key_cfg->key_is_press[5][5].key_char = 0;
    key_cfg->key_is_press[5][6].key_char = 0;
    key_cfg->key_is_press[6][8].key_char = 0;
    key_cfg->key_is_press[6][10].key_char = 0;
    key_cfg->key_is_press[6][11].key_char = 0;
    key_cfg->key_is_press[6][12].key_char = 0;
    key_cfg->key_is_press[6][13].key_char = 0;
    key_cfg->key_is_press[6][16].key_char = 0;
    key_cfg->key_is_press[7][8].key_char = 0;
    key_cfg->key_is_press[7][9].key_char = 0;
    key_cfg->key_is_press[7][10].key_char = 0;
    key_cfg->key_is_press[7][11].key_char = 0;
    key_cfg->key_is_press[7][12].key_char = 0;
    key_cfg->key_is_press[7][13].key_char = 0;
    key_cfg->key_is_press[7][16].key_char = 0;
    key_cfg->key_is_press[8][8].key_char = 0;
    key_cfg->key_is_press[8][9].key_char = 0;
    key_cfg->key_is_press[8][10].key_char = 0;
    key_cfg->key_is_press[8][11].key_char = 0;
    key_cfg->key_is_press[8][12].key_char = 0;
    key_cfg->key_is_press[8][13].key_char = 0;
    key_cfg->key_is_press[8][14].key_char = 0;
    key_cfg->key_is_press[8][15].key_char = 0;
    key_cfg->key_is_press[8][16].key_char = 0;
    key_cfg->key_is_press[9][8].key_char = 0;
    key_cfg->key_is_press[9][9].key_char = 0;
    key_cfg->key_is_press[9][10].key_char = 0;
    key_cfg->key_is_press[9][11].key_char = 0;
    key_cfg->key_is_press[9][12].key_char = 0;
    key_cfg->key_is_press[9][13].key_char = 0;
    key_cfg->key_is_press[9][14].key_char = 0;
    key_cfg->key_is_press[9][16].key_char = 0;
    key_cfg->key_is_press[10][8].key_char = 0;
    key_cfg->key_is_press[10][9].key_char = 0;
    key_cfg->key_is_press[10][10].key_char = 0;
    key_cfg->key_is_press[10][11].key_char = 0;
    key_cfg->key_is_press[10][12].key_char = 0;
    key_cfg->key_is_press[10][14].key_char = 0;
    key_cfg->key_is_press[10][16].key_char = 0;
    key_cfg->key_is_press[11][8].key_char = 0;
    key_cfg->key_is_press[11][9].key_char = 0;
    key_cfg->key_is_press[11][12].key_char = 0;
    key_cfg->key_is_press[11][13].key_char = 0;
    key_cfg->key_is_press[11][14].key_char = 0;
    key_cfg->key_is_press[11][15].key_char = 0;
    key_cfg->key_is_press[11][16].key_char = 0;
}

/*拉高需要使用的seg gpio电平，将其余seg gpio置底*/
void key_scan_gpio_set(key_info_t *key_cfg,uint8_t seg)
{
    uint8_t i;
     for(i=0; i<MAX_ROW; i++)
        {
            if(i==(seg-1))
                {
                    HAL_GPIO_WritePin(key_cfg->key_seg[i].gpio,key_cfg->key_seg[i].gpio_pin,GPIO_PIN_RESET);
                }
            else
                {
                    HAL_GPIO_WritePin(key_cfg->key_seg[i].gpio,key_cfg->key_seg[i].gpio_pin,GPIO_PIN_SET);
                }

        }
}
/*读取GPIO 电平*/
void key_scan_gpio_read(key_info_t *key_cfg,uint8_t seg)
{
    uint8_t i;
    for(i=0; i<MAX_COL; i++)
        {
            key_cfg->key_is_press_seg[seg-1][i]=
                HAL_GPIO_ReadPin(key_cfg->key_pos[i].gpio,key_cfg->key_pos[i].gpio_pin);
        }
}
///*按键扫描 拉高电平后需要延时后读取，所以将函数内容放到了任务循环，此函数不使用*/
//void key_scan(key_info_t *key_cfg,uint8_t seg)
//{
//    key_scan_gpio_set(key_cfg,seg);
//    key_scan_gpio_read(key_cfg,seg);
//}
/*将扫描得到的键值更新到对应序号*/
void key_scan_updata(key_info_t *key_cfg)
{
    uint8_t i;
    /*
    	对应原理图
    	SEG1 1-13   ->13
    	SEG2 14-27  ->14
    	SEG3 28-41	->14
    	SEG4 42-54	->13
    	SEG5 55-66	->12
    	SEG6 67-74	->8
    	SEG7 75-87	->13
    */
    /*SEG1 0-12   ->13*/
    for(i=0; i<MAX_ROW; i++)
    {
        for (size_t j = 0; j < MAX_COL; j++)
        {
            if(key_cfg->key_is_press_seg[i][j]==PRESS_LEVEL)
            {
                /*按键按下计数*/
                if(key_cfg->key_is_press[i][j].press_it.time_count<=TIME_MAX_COUNT)
                {
                    key_cfg->key_is_press[i][j].press_it.time_count++;
                }
            }
            else
            {
                /*复位计数*/
                if(key_cfg->key_is_press[i][j].press_it.rester_time_count<=TIME_RESTER_COUNT)
                {
                    key_cfg->key_is_press[i][j].press_it.rester_time_count++;
                }
            }
        }
    }
}

void key_info_get(key_info_t *key_cfg)
{
    uint8_t i,point=0;
    /*记录正在使用的按键*/
    static uint8_t used_it[6] = {KEY_NO_USER,KEY_NO_USER,KEY_NO_USER,KEY_NO_USER,KEY_NO_USER,KEY_NO_USER};
    // static uint8_t used_key[6] = {KEY_NO_USER,KEY_NO_USER,KEY_NO_USER,KEY_NO_USER,KEY_NO_USER,KEY_NO_USER};
    static key_info_pos used_key[6];
    for(i=0; i<6; i++)
    {
        /*如果此缓冲区还在使用*/
        if(used_it[i]==1)
        {
            /*检查按键是否松手*/
            if(key_cfg->key_is_press[used_key[i].row][used_key[i].col].press_it.states==KEY_UPSPRING)
            {
                /*如果已经松手，清空缓冲区，六键无冲释放*/
                used_it[i] = KEY_NO_USER;
                used_key[i].row = KEY_NO_USER;
                used_key[i].col = KEY_NO_USER;
                key_cfg->keyboard.keypad[i] = 0;
                key_cfg->keyboard.keypad_status[i] = 0;
                key_cfg->keyboard.used_it[i] = 0 ;
            }
        }
    }
		
	/*特殊按键*/
    if(key_cfg->key_is_press[KEY_LEFT_ALT].press_it.states != KEY_UPSPRING)
    {
        key_cfg->keyboard.byte0_off.Left_Alt = 1;
    }
    else
    {
        key_cfg->keyboard.byte0_off.Left_Alt = 0;
        key_cfg->keyboard.byte0_off.Left_Alt_used_it = 0;
    }
    key_cfg->keyboard.byte0_off.Left_Alt_Status = key_cfg->key_is_press[KEY_LEFT_ALT].press_it.states;

    if(key_cfg->key_is_press[KEY_LEFT_CONTROL].press_it.states !=KEY_UPSPRING)
    {
        key_cfg->keyboard.byte0_off.Left_Control = 1;
    }
    else
    {
        key_cfg->keyboard.byte0_off.Left_Control = 0;
        key_cfg->keyboard.byte0_off.Left_Control_used_it = 0;
    }
    key_cfg->keyboard.byte0_off.Left_Control_Status = key_cfg->key_is_press[KEY_LEFT_CONTROL].press_it.states;

    if(key_cfg->key_is_press[KEY_LEFT_WIN].press_it.states != KEY_UPSPRING)
    {
        key_cfg->keyboard.byte0_off.Left_GUI = 1;
    }
    else
    {
        key_cfg->keyboard.byte0_off.Left_GUI = 0;
        key_cfg->keyboard.byte0_off.Left_GUI_used_it = 0;
    }
    key_cfg->keyboard.byte0_off.Left_GUI_Status = key_cfg->key_is_press[KEY_LEFT_WIN].press_it.states;

    if(key_cfg->key_is_press[KEY_LEFT_SHIFT].press_it.states != KEY_UPSPRING)
    {
        key_cfg->keyboard.byte0_off.Left_Shift = 1;
    }
    else
    {
        key_cfg->keyboard.byte0_off.Left_Shift = 0;
        key_cfg->keyboard.byte0_off.Left_Shift_used_it = 0;
    }
    key_cfg->keyboard.byte0_off.Left_Shift_Status = key_cfg->key_is_press[KEY_LEFT_SHIFT].press_it.states;

    // if(key_cfg->key_is_press[KEY_RIGHT_ALT].press_it.states != KEY_UPSPRING)
    //     {
    //         key_cfg->keyboard.byte0_off.Right_Alt = 1;
    //     }
    // else
    //     {
    //         key_cfg->keyboard.byte0_off.Right_Alt = 0;
    //         key_cfg->keyboard.byte0_off.Right_Alt_used_it = 0;
    //     }
    // key_cfg->keyboard.byte0_off.Right_Alt_Status = key_cfg->key_is_press[KEY_RIGHT_ALT].press_it.states;

    if(key_cfg->key_is_press[KEY_RIGHT_CONTROL].press_it.states != KEY_UPSPRING)
    {
        key_cfg->keyboard.byte0_off.Right_Control = 1;
    }
    else
    {
        key_cfg->keyboard.byte0_off.Right_Control = 0;
        key_cfg->keyboard.byte0_off.Right_Control_used_it = 0;
    }
    key_cfg->keyboard.byte0_off.Right_Control_Status = key_cfg->key_is_press[KEY_RIGHT_CONTROL].press_it.states;
   
    // if(key_cfg->key_is_press[KEY_RIGHT_WIN].press_it.states !=KEY_UPSPRING)
    //     {
    //         key_cfg->keyboard.byte0_off.Right_GUI = 1;
    //     }
    // else
    //     {
    //         key_cfg->keyboard.byte0_off.Right_GUI = 0;
    //         key_cfg->keyboard.byte0_off.Right_GUI_used_it = 0;
    //     }
    // key_cfg->keyboard.byte0_off.Right_GUI_Status = key_cfg->key_is_press[KEY_RIGHT_WIN].press_it.states;

    if(key_cfg->key_is_press[KEY_RIGHT_SHIFT].press_it.states != KEY_UPSPRING)
    {
        key_cfg->keyboard.byte0_off.Right_Shift = 1;
    }
    else
    {
        key_cfg->keyboard.byte0_off.Right_Shift = 0;
        key_cfg->keyboard.byte0_off.Right_Shift_used_it = 0;
    }
    key_cfg->keyboard.byte0_off.Right_Shift_Status = key_cfg->key_is_press[KEY_RIGHT_SHIFT].press_it.states;

		/*六键无冲按键处理*/
    for(i=0; i<MAX_ROW; i++)
    {
        for (size_t j = 0; j < MAX_COL; j++)
        {          
            uint8_t is_special_key = 0;
            if (
                ((i == KEY_LEFT_SHIFT_ROW   ) && (j == KEY_LEFT_SHIFT_COL   )) ||
                ((i == KEY_RIGHT_SHIFT_ROW  ) && (j == KEY_RIGHT_SHIFT_COL  )) ||
                ((i == KEY_LEFT_CONTROL_ROW ) && (j == KEY_LEFT_CONTROL_COL )) ||
                ((i == KEY_LEFT_WIN_ROW     ) && (j == KEY_LEFT_WIN_COL     )) ||
                ((i == KEY_LEFT_ALT_ROW     ) && (j == KEY_LEFT_ALT_COL     )) ||
                ((i == KEY_RIGHT_CONTROL_ROW) && (j == KEY_RIGHT_CONTROL_COL))
                )
            {
                is_special_key = 1;
            }

            if(is_special_key == 0)
            {
                if(key_cfg->key_is_press[i][j].press_it.states!=KEY_UPSPRING)
                {
                    uint8_t contains_key = 0;
                    for(point=0; point<6; point++)
                    {
                        if ((used_key[point].row == i)&&(used_key[point].col == j))
                        {
                            key_cfg->keyboard.keypad_status[point]=key_cfg->key_is_press[i][j].press_it.states;
                            contains_key = 1;
                        }
                    }

                    //如果该按键按下，遍历6个缓冲区，如果未使用，则使用此缓冲区
                    if(contains_key == 0)
                    {
                        for(point=0; point<6; point++)
                        /*如果六个缓冲区都未包含此按键*/
                        {
                            if(used_it[point]==KEY_NO_USER)
                            {
                                used_it[point]=1;//标记此按键已经使用
                                used_key[point].row = i;
                                used_key[point].col = j;
                                key_cfg->keyboard.keypad[point]=key_cfg->key_is_press[i][j].key_char;
                                key_cfg->keyboard.keypad_status[point]=key_cfg->key_is_press[i][j].press_it.states;
                                point = 6 ;//如果找到未使用的缓冲区，直接退出循环
                            }
                        }
                    }
                }
            }
        }
    }

    for(i=0; i<MAX_ROW; i++)
    for (size_t j = 0; j < MAX_COL; j++)
    {
        /*按键长按*/
        if(key_cfg->key_is_press[i][j].press_it.time_count>=TIME_PRESS_L_COUNT)
        {
            if(key_cfg->key_is_press[i][j].press_it.states != KEY_PRESS_L_TIME)
            {
                key_cfg->key_is_press[i][j].press_it.rester_time_count = 0;
                key_cfg->key_is_press[i][j].press_it.states = KEY_PRESS_L_TIME;
            }
        }
        /*按键短按*/
        else if(key_cfg->key_is_press[i][j].press_it.time_count>=TIME_PRESS_COUNT)
        {
            if(key_cfg->key_is_press[i][j].press_it.states != KEY_PRESS)
            {
                key_cfg->key_is_press[i][j].press_it.rester_time_count = 0;
                key_cfg->key_is_press[i][j].press_it.states = KEY_PRESS;
            }
        }
        /*按键复位*/
        if(key_cfg->key_is_press[i][j].press_it.rester_time_count>=TIME_RESTER_COUNT)
        {
            if(key_cfg->key_is_press[i][j].press_it.states != KEY_UPSPRING)
            {
                key_cfg->key_is_press[i][j].press_it.time_count = 0 ;
                key_cfg->key_is_press[i][j].press_it.states = KEY_UPSPRING;
            }
        }
    }
}
uint8_t key_update(uint8_t *pTxbuf,key_info_t *key_cfg)
{
    uint8_t i;
    uint8_t key_pressed = 0;
    for(i=0; i<8; i++)pTxbuf[i]=0;
    /*特殊按键特殊处理,特殊按键不需要长短按区分，否则电脑可能有滞带键提示*/
    key_info_get(key_cfg);

    if(key_cfg->keyboard.byte0_off.Left_Control == 1)
    {
        key_pressed = 1;
        pTxbuf[0]|= 1<<Left_Control;
        key_cfg->keyboard.byte0_off.Left_Control_used_it = 1;
    }

    if(key_cfg->keyboard.byte0_off.Left_Shift == 1)
    {
        key_pressed = 1;
        pTxbuf[0]|= 1<<Left_Shift;
        key_cfg->keyboard.byte0_off.Left_Shift_used_it = 1;
    }

    if(key_cfg->keyboard.byte0_off.Left_Alt == 1)
    {
        key_pressed = 1;
        pTxbuf[0]|= 1<<Left_Alt;
        key_cfg->keyboard.byte0_off.Left_Alt_used_it = 1;
    }

    if(key_cfg->keyboard.byte0_off.Left_GUI == 1)
    {
        key_pressed = 1;
        pTxbuf[0]|= 1<<Left_GUI;
        key_cfg->keyboard.byte0_off.Left_Alt_used_it = 1;
    }

    if(key_cfg->keyboard.byte0_off.Right_Control == 1)
    {
        // pTxbuf[0]|= 1<<Right_Control;
        if (key_cfg->current_layer == 1)
        {
            mx_key_init_layer2(key_cfg);
        }
        else if (key_cfg->current_layer == 2)
        {
            mx_key_init_layer1(key_cfg);
        }

        key_cfg->key_is_press[KEY_RIGHT_CONTROL].press_it.time_count = 0 ;
        key_cfg->key_is_press[KEY_RIGHT_CONTROL].press_it.states = KEY_UPSPRING;
        key_cfg->keyboard.byte0_off.Right_Control = 0;
        key_cfg->keyboard.byte0_off.Right_Control_used_it = 1;
        HAL_Delay(100);
    }

    if(key_cfg->keyboard.byte0_off.Right_Shift == 1)
    {
        key_pressed = 1;
        pTxbuf[0]|= 1<<Right_Shift;
        key_cfg->keyboard.byte0_off.Left_Alt_used_it = 1;
    }
    
    if(key_cfg->keyboard.byte0_off.Right_Alt == 1)
    {
        key_pressed = 1;
        pTxbuf[0]|= 1<<Right_Alt;
        key_cfg->keyboard.byte0_off.Left_Alt_used_it = 1;
    }

    if(key_cfg->keyboard.byte0_off.Right_GUI == 1)
    {
        key_pressed = 1;
        pTxbuf[0]|= 1<<Right_GUI;
        key_cfg->keyboard.byte0_off.Left_Alt_used_it = 1;
    }

    pTxbuf[1]=0;
	/*BYTE2--BYTE7 普通按键 需要区分长按短按*/
    for(i=0; i<6; i++)
    {
        if((key_cfg->keyboard.used_it[i]==0)&&(key_cfg->keyboard.keypad_status[i] == KEYBOARD_PRESS))
        {
            key_pressed = 1;
            pTxbuf[i+2]=key_cfg->keyboard.keypad[i];
            key_cfg->keyboard.used_it[i] = 1;
        }
        if(key_cfg->keyboard.keypad_status[i] == KEYBOARD_PRESS_L_TIME)
        {
            key_pressed = 1;
            pTxbuf[i+2]=key_cfg->keyboard.keypad[i];
        }
    }

    return key_pressed;
}



// uint8_t bule_keyboard[12]={0x0C,0x00,0xA1,0x01,0,0,0,0,0,0,0,0};
// void bule_keyboard_updata(uint8_t* pTx_bule)
// {
// 	/*每个按键按下对应一个按键抬起，特殊键除外*/
// 	bule_keyboard[0] =  0x0C;//固定值
// 	bule_keyboard[1] =  0x00;//固定值
// 	bule_keyboard[2] =  0xA1;//固定值
// 	bule_keyboard[3] =  0x01;//固定值
// 	bule_keyboard[4] =  pTx_bule[0];//变动值（ALT、SHIFT、CTRL、GUI 按键状态指示）
// 	bule_keyboard[5] =  		  0;//固定值
// 	bule_keyboard[6] =  pTx_bule[2];//变动值1
// 	bule_keyboard[7] =  pTx_bule[3];//变动值2
// 	bule_keyboard[8] =  pTx_bule[4];//变动值3
// 	bule_keyboard[9] =  pTx_bule[5];//变动值4
// 	bule_keyboard[10] = pTx_bule[6];//变动值5
// 	bule_keyboard[11] = pTx_bule[7];//变动值6
// 	HAL_UART_Transmit(&huart4,bule_keyboard,12,100);
// //	bule_keyboard[4]=0;//防止滞键提示
// 	bule_keyboard[6]=0;
// 	bule_keyboard[7]=0;
// 	bule_keyboard[8]=0;
// 	bule_keyboard[9]=0;
// 	bule_keyboard[10]=0;
// 	bule_keyboard[11]=0;
// 	HAL_UART_Transmit(&huart4,bule_keyboard,12,100);
// }