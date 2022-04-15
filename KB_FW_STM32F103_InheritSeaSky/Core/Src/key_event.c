#include "key_event.h"
#include "bsp_key.h"

extern USBD_HandleTypeDef hUsbDeviceFS;

uint8_t Tx_buffer[9]= {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
extern key_info_t key_info;

struct keyboard_report_t
{
    uint8_t id;
    uint8_t keycode[8];
} kbd_report;

void detect_key_events()
{
		uint8_t key_pressed;
    	for(size_t i=1;i<=MAX_ROW;i++)
		{
			key_scan_gpio_set(&key_info,i);
			HAL_Delay(READ_DELAY_TIME);
			key_scan_gpio_read(&key_info,i);
		}
		key_scan_updata(&key_info);
    // bule_keyboard_updata(Tx_buffer);
	key_pressed = key_update(kbd_report.keycode,&key_info);

	// if (key_pressed == 1)
	{
		if (key_info.current_layer == 2)
		{
			kbd_report.id = 2;
			kbd_report.keycode[0]= kbd_report.keycode[2];
			kbd_report.keycode[1]= 0x00;
			USBD_HID_SendReport(&hUsbDeviceFS,(uint8_t *)&kbd_report,3);
			// HAL_Delay(30);
			// kbd_report.keycode[0]= 0x00;
			// kbd_report.keycode[1]= 0x00;
			// USBD_HID_SendReport(&hUsbDeviceFS,(uint8_t *)&kbd_report,3);
		}
		else if (key_info.current_layer == 1)
		{
			kbd_report.id = 1;
			USBD_HID_SendReport(&hUsbDeviceFS,(uint8_t *)&kbd_report,9);
		}
	}
	// uint8_t sendbuffer[8]={0x00,0x00,0x2c,0x00,0x00,0x00,0x00,0x00};//空格
	// USBD_HID_SendReport(&hUsbDeviceFS,sendbuffer,8);//发送报文
    // HAL_Delay(1);
    // HAL_Delay(10);
}