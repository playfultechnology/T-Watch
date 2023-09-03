# T-Watch
Application code for the LilyGo T-Watch 2020, which you can purchase from https://www.aliexpress.com/item/1005004531572564.html

This is an ESP32-based smartwatch with a pretty neat array of features

There are various versions of this watch available. I've been primarily developing on the "V1". The "V3" is almost identical, except also features an I2S microphone.
The "V2" has GPS, but omits some other functionality to do so :
     
| Product |	T-Watch-2019 | T-Watch-2020-V1 | T-Watch-2020-V2 | T-Watch-2020-V3 | T-Block/T-Block-V1
| :------------- | :------------ | :------------ | :------------ | :------------ | :------------ |
| Core | ESP32-D0WDQ6 | ESP32-D0WDQ6 | ESP32-D0WDQ6 | ESP32-D0WDQ6 | ESP32-D0WDQ6 | 
| PSRAM | 16MBytes | 16MBytes | 16MBytes | 16MBytes | 16MBytes | 
| Flash | 8MBytes | 8MBytes | 4MBytes | 8MBytes | 8MBytes  | 
| PMU | 	AXP202 | AXP202 | AXP202 | AXP202 | AXP202 | 
| IMU | 	BMA423 | BMA423 | BMA423 | BMA423 | MPU6050 | 
| TFT | 	1.54"/240X240/ST7789V  | 1.54"/240X240/ST7789V | 1.54"/240X240/ST7789V | 1.54"/240X240/ST7789V  | [1] 
| TouchScreen | 	FT6336 | FT6336 | FT6336 | FT6336 | [1] 
| Real Time Clock | 	PCF8563 | PCF8563 | PCF8563 | PCF8563  | PCF8563  | 
| Infrared sensor | 	❌ | 	✅ | 	✅ | ✅ | ❌ 	 | 
| Microphone | 	[1]  | ❌ | ❌  | SPM1423HM4H  | [1] 	 | 
| GPS | 	[1]  | ❌ | Quectel L76K | ❌ | [1] 	 | 
| Decoder | 	[1] | MAX98357A | ❌ | MAX98357A 	[1] 	 | 
| Tactile | 	[1]  | ✅(IO Control) | DRV2605(I2C Control) | ✅(IO Control) 	[1] 	 | 
| Button | 	✅ | 	✅[2] | ✅[2] | ✅[2] | ✅[2]  | 

    [1]:Need expansion board to support
    [2]:The buttons are AXP202 PEK programmable buttons

### Installation
Download the library from https://github.com/Xinyuan-LilyGO/TTGO_TWatch_Library and place in your Arduino libraries folder
(easiest way to do this is download the entire repository as a .zip, and then from the Arduino IDE select Sketch->Include Library->Add .ZIP library

The library comes with example code although I didn't find it particularly easy to follow, and it seems to be heavily-tied to its use of the LVGL library (https://docs.lvgl.io/master/index.html), which is used to create the menu/displays.

Target Board is ESP32>TTGO T-Watch

Requires https://github.com/earlephilhower/ESP8266Audio for audio
To upload code, first set the watch into low power mode by holding down the button on the side for 6 seconds, and then releasing. The screen should go blank.
Now, select to upload a sketch from the Arduino IDE. Once the sketch has finished compiling and first attempts to upload, hold down the button on the side for 2 seconds, until the code starts to upload. Then release.
