# lets_mimich

<p float="center">
  <img src="/other/img/img_4.jpg" width="48%" />
  <img src="/other/img/img_0.jpg" width="48%" /> 
  <img src="/other/img/img_1.jpg" width="48%" />
  <img src="/other/img/img_5.jpg" width="48%" /> 
  <img src="/other/img/img_2.jpg" width="48%" />
  <img src="/other/img/img_3.jpg" width="48%" />
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

In the **other** folder, i left a vial keymap that is quite adequate do use.

## Default

Make example for this keyboard (after setting up your build environment):

    make handwired/lets_mimich:default

Flashing example for this keyboard:

    make handwired/lets_mimich:default:flash

## Bootloader

* **Bootmagic**: Hold `(0,0)` when plugin the keyboard
* **Keycode in layout**: Hold lower and raise layer and press the key `(0,1)` that is mapped as `QK_BOOT`

## Making process

<p float="center">
  <img src="/other/img/img_6.jpg" width="48%" />
  <img src="/other/img/img_7.jpg" width="48%" /> 
</p>

>As the cospad case only have one open for a cable, i take it to a someone with an appropriate machine to do one more open.

>I used I2C to connect the halves, using `GND, VCC, 2, 3` on both pro micros. Between `VCC` and `2` and `VCC` and `3` i used 4.7kΩ pull-up resistors.
