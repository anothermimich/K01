# lets_mimich

![](https://github.com/anothermimich/lets_mimich/blob/main/other/img_0.jpg) | ![](https://github.com/anothermimich/lets_mimich/blob/main/other/img_1.jpg)

![](https://github.com/anothermimich/lets_mimich/blob/main/other/img_2.jpg) | ![](https://github.com/anothermimich/lets_mimich/blob/main/other/img_3.jpg)

*This is my first attempt at handwiring and custom firmware. I take inspiration on the Let's split keyboard.*

* Keyboard Maintainer: [Lu](https://github.com/anothermimich)
* Hardware Supported: 2 x **atmega32u4** connected using I2C
* **Vial** compatible

## Vial  

Make example for this keyboard (after setting up your build environment):

    make handwired/lets_mimich:vial

Flashing example for this keyboard:

    make handwired/lets_mimich:vial:flash

## Default

Make example for this keyboard (after setting up your build environment):

    make handwired/lets_mimich:default

Flashing example for this keyboard:

    make handwired/lets_mimich:default:flash

## Bootloader

* **Keycode in layout**: Hold lower and raise layer and press the key (0,1) that is mapped as `QK_BOOT`
