/**
   Caja Fuerte Electronica Arduino

   Copyright (C) 2020, Uri Shaked.
   Publicado bajo la licencia MIT.
*/

#ifndef ICONS_H
#define ICONS_H

#include <LiquidCrystal.h>

// Nuestros números de iconos personalizados
#define ICON_LOCKED_CHAR   (byte)0
#define ICON_UNLOCKED_CHAR (byte)1

// Este es un icono standard en el LCD1602 caracter colocar
#define ICON_RIGHT_ARROW   (byte)126

void init_icons(LiquidCrystal &lcd);

#endif /* ICONS_H */
