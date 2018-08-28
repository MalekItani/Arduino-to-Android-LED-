This is an Android app that connects to the Arduino via Bluetooth using HC05 and HC06 Modules (at least those are the ones I've tested).
When a control buttons are pressed, a corresponding character is sent to the Arduino's serial.


The buttons are encoded as follows:

. Red ON -> 'R'
. Yellow ON -> 'Y'
. Green ON -> 'G'
. Red OFF -> '1'
. Yellow OFF -> '2'
. Green OFF -> '3'
. Turn all ON -> 'N'
. Turn all OFF -> 'F'

The arduino code is trivial, but I've included it anyway. (Make sure to remove it before building).

