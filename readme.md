# lets_mimich

<p float="center">
  <img src="/other/img_0.jpg" width="48%" />
  <img src="/other/img_1.jpg" width="48%" /> 
  <img src="/other/img_2.jpg" width="48%" />
  <img src="/other/img_3.jpg" width="48%" />
</p>

>This is my first attempt at handwiring and writing custom firmware.
>
>I take inspiration from the [Let's split](https://github.com/qmk/qmk_firmware/tree/master/keyboards/lets_split).
>
>Keyboard Maintainer: [Lu](https://github.com/anothermimich)

## Hardware used

| What                    | Quantity  |  
| ----------------------- | --------- |
| Pro micro `atmega32u4`  | 2         | 
| Cospad case             | 2         |
| XD75 allu plate         | 1         |
| DOYS keycaps            | 48        |
| Diode 1N4148            | 48        |
| Tecsee Purple Panda     | 48        |
| 20mm two-stage springs  | 48        |
| Krytox 205g0            | ?         |
| 24 awg cable            | ?         |
| 4.7kΩ pull-up resistors | 2         |
| USB-C female connectors | 2         |


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

* **Bootmagic**: Hold (0,0) when plugin the keyboard
* **Keycode in layout**: Hold lower and raise layer and press the key (0,1) that is mapped as `QK_BOOT`
