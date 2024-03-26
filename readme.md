# lets_mimich

<p float="center">
  <img src="/other/img/img_4.jpg" width="48%" />
  <img src="/other/img/img_0.jpg" width="48%" /> 
  <img src="/other/img/img_1.jpg" width="48%" />
  <img src="/other/img/img_5.jpg" width="48%" /> 
  <img src="/other/img/img_2.jpg" width="48%" />
  <img src="/other/img/img_3.jpg" width="48%" />
</p>

This is my first attempt at handwiring and writing custom firmware.

I have posted these photos on [reddit](https://www.reddit.com/r/olkb/comments/1bnd6md/my_first_handwired_ortho_split/), if you want to chat about this keeb leave a comment there.

I take inspiration from the [Let's split](https://github.com/qmk/qmk_firmware/tree/master/keyboards/lets_split).

Keyboard Maintainer: [Lu](https://github.com/anothermimich)

## Hardware used

| What                    | Quantity  |  
| ----------------------- | --------- |
| Pro micro `atmega32u4`  | 2         | 
| Case [XD24 / Cospad](https://kprepublic.com/collections/cospad-xd24/products/anodized-aluminium-case-for-cospad-xd24-custom-keyboard-dual-purpose-case-with-cnc-aluminum-cone-feet)             | 2         |
| Plate [ID75 aluminum](https://ymdkey.com/products/id75-idobe-75-hotswap-pcb-aluminum-plate?variant=32012207980605)         | 1         |
| Keycaps [DOYS](https://deadline.space/products/doys-keycaps)            | 48        |
| Diode 1N4148            | 48        |
| Kailh hot swap sockets  | 48        |
| Tecsee Purple Panda<sup>1</sup>     | 48        |
| 20mm two-stage springs  | 48        |
| Krytox 205g0            | ?         |
| 24 awg cable            | ?         |
| 4.7kΩ pull-up resistors | 2         |
| USB-C female connectors | 2         |
| M2 Brass standoff       | 8         |
| M2 screws               | 8         |

><sup>1</sup> I really like the way that the switches turned out after spring swap and lub. But I still do not recommend them due to poor quality control, allot of the switches don't work or make a weird sound when pressed.

## Flashing

### Vial  

Make example for this keyboard (after setting up your build environment):

    make handwired/lets_mimich:vial

Flashing example for this keyboard:

    make handwired/lets_mimich:vial:flash

In the **other** folder, i left a vial keymap that is quite adequate do use.

### Default

Make example for this keyboard (after setting up your build environment):

    make handwired/lets_mimich:default

Flashing example for this keyboard:

    make handwired/lets_mimich:default:flash

## Bootloader

* **Bootmagic**: Hold `(0,0)` when plugin the keyboard
* **Keycode in layout**: Hold lower and raise layer and press the key `(0,1)` that is mapped as `QK_BOOT`

## Making process

### Case

<p float="center">
  <img src="/other/img/img_6.jpg" width="48%" />
  <img src="/other/img/img_7.jpg" width="48%" /> 
</p>

As the cospad case only have one open for a cable, i take it to a someone with an appropriate machine to do one more open.

### Plate

For the plate I choose the ID75. Out of the box it has this size:

    ,-----------------------------------------------------------------------------------------.
    |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |
    |-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----|
    |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |
    |-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----|
    |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |
    |-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----|
    |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |
    |-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----|
    |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |
    `-----------------------------------------------------------------------------------------'
    
In order to use it i have done some cuts that i will try to ilustrate below. The cells market with an X represent what was cut.

    ,-----------------------------------------------------------------------------------------.
    |  x  |  x  |  x  |  x  |  x  |  x  |  x  |  x  |  x  |  x  |  x  |  x  |  x  |  x  |  x  |
    |-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----|
    |     |     |     |     |     |     |  x  |  x  |  x  |     |     |     |     |     |     |
    |-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----|
    |     |     |     |     |     |     |  x  |  x  |  x  |     |     |     |     |     |     |
    |-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----|
    |     |     |     |     |     |     |  x  |  x  |  x  |     |     |     |     |     |     |
    |-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----|
    |     |     |     |     |     |     |  x  |  x  |  x  |     |     |     |     |     |     |
    `-----------------------------------------------------------------------------------------'

Which left me with 2 plates, of this size:

    ,-----------------------------------.                 ,-----------------------------------.
    |     |     |     |     |     |     |                 |     |     |     |     |     |     |
    |-----+-----+-----+-----+-----+-----|                 |-----+-----+-----+-----+-----+-----|
    |     |     |     |     |     |     |                 |     |     |     |     |     |     |
    |-----+-----+-----+-----+-----+-----|                 |-----+-----+-----+-----+-----+-----|
    |     |     |     |     |     |     |                 |     |     |     |     |     |     |
    |-----+-----+-----+-----+-----+-----|                 |-----+-----+-----+-----+-----+-----|
    |     |     |     |     |     |     |                 |     |     |     |     |     |     |
    `-----------------------------------'                 `-----------------------------------'

### Connecting the halves

I used I2C to connect the halves, using `GND, VCC, 2, 3` on both pro micros. Between `VCC` and `2` and `VCC` and `3` i used 4.7kΩ pull-up resistors.
