Este proyecto implementa una caja fuerte electrónica, alimentada por un Arduino Uno..

La caja fuerte tiene tres componentes principales.:
Un [16x02 LCD Monitor](https://wokwi.com/playground/lcd1602)
y un [Membrane Keypad](https://wokwi.com/playground/keypad) para el
interfaz de usuario, y un Servo motor que alimenta el mecanismo de bloqueo.

El estado de la caja fuerte (bloqueado/desbloqueado), así como el código secreto
se almacenan en el Arduino [EEPROM](https://wokwi.com/playground/eeprom), entonces
el código no se borra incluso cuando se corta la energía.