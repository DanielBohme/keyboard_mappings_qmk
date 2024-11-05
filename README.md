# Using [smores56](https://github.com/smores56) QMK fork for his keymaps for the Osprette and the Steel Toe (Clog).

## Flashing Osprette with Blok controller
### Run in QMK MSYS
- qmk setup (if not already done)
- qmk flash -kb osprette -km bohme* -e CONVERT_TO=blok

*bohme in this case is the name of the keymap folder

Reset the keyboard to open up the controller folder and then move the created uf2 file over to the folder.

## Flashing Steel Toe (Clog)
### Run in QMK MSYS
- qmk setup (if not already done)
- qmk compile -kb clog -km bohme*

*bohme in this case is the name of the keymap folder

Add the hex file over to the QMK Toolbox and reset the keyboard to flash.