/*
  SieteSegmentos.h - Librería para controlar un display de siete segmentos.
  Created by Emilio Silva, 25 Diciembre 2021.
  Para uso privado
*/
#ifndef Morse_h
#define Morse_h

#include "Arduino.h"

class SieteSegmentos
{
  public:
    SieteSegmentos(int a, int b, int c, int d, int e, int f, int g);
    void escribirEnDisplay(char letra);
  private:
  int _a;
  int _b;
  int _c;
  int _d;
  int _e;
  int _f;
  int _g;

};

#endif
