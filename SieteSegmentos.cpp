/*
  SieteSegmentos.h - Librería para controlar un display de siete segmentos.
  Created by Emilio Silva, 25 Diciembre 2021.
  Para uso privado

  Funcion escribirEnDisplay para escribir la letra que se quiera
  si se manda una x a esa funcion, el display se borra.
*/

#include "Arduino.h"
#include "SieteSegmentos.h"

SieteSegmentos::SieteSegmentos(int a, int b, int c, int d, int e, int f, int g){
  pinMode(a, OUTPUT);
  _a = a;
  pinMode(b, OUTPUT);
  _b = b;
  pinMode(c, OUTPUT);
  _c = c;
  pinMode(d, OUTPUT);
  _d = d;
  pinMode(e, OUTPUT);
  _e = e;
  pinMode(f, OUTPUT);
  _f = f;
  pinMode(g, OUTPUT);
  _g = g;
}

void SieteSegmentos::escribirEnDisplay(char letra){

  switch(letra){
   case 'a':
     digitalWrite(_a,HIGH);
     digitalWrite(_b,HIGH);
     digitalWrite(_c,HIGH);
     digitalWrite(_d,LOW);
     digitalWrite(_e,HIGH);
     digitalWrite(_f,HIGH);
     digitalWrite(_g,HIGH);
     break;

   case 'b':
     digitalWrite(_a,HIGH);
     digitalWrite(_b,HIGH);
     digitalWrite(_c,HIGH);
     digitalWrite(_d,HIGH);
     digitalWrite(_e,HIGH);
     digitalWrite(_f,HIGH);
     digitalWrite(_g,HIGH);
     break;

   case'c':
     digitalWrite(_a,HIGH);
     digitalWrite(_b,LOW);
     digitalWrite(_c,LOW);
     digitalWrite(_d,HIGH);
     digitalWrite(_e,HIGH);
     digitalWrite(_f,HIGH);
     digitalWrite(_g,LOW);
     break;

   case'd':
     digitalWrite(_a,LOW);
     digitalWrite(_b,HIGH);
     digitalWrite(_c,HIGH);
     digitalWrite(_d,HIGH);
     digitalWrite(_e,HIGH);
     digitalWrite(_f,LOW);
     digitalWrite(_g,HIGH);
     break;

   case'e':
     digitalWrite(_a,HIGH);
     digitalWrite(_b,LOW);
     digitalWrite(_c,LOW);
     digitalWrite(_d,HIGH);
     digitalWrite(_e,HIGH);
     digitalWrite(_f,HIGH);
     digitalWrite(_g,HIGH);
     break;

    case'f':
     digitalWrite(_a,HIGH);
     digitalWrite(_b,LOW);
     digitalWrite(_c,LOW);
     digitalWrite(_d,LOW);
     digitalWrite(_e,HIGH);
     digitalWrite(_f,HIGH);
     digitalWrite(_g,HIGH);
     break;

    case'g':
     digitalWrite(_a,HIGH);
     digitalWrite(_b,LOW);
     digitalWrite(_c,HIGH);
     digitalWrite(_d,HIGH);
     digitalWrite(_e,HIGH);
     digitalWrite(_f,HIGH);
     digitalWrite(_g,HIGH);
     break;

    case'h':
     digitalWrite(_a,LOW);
     digitalWrite(_b,HIGH);
     digitalWrite(_c,HIGH);
     digitalWrite(_d,LOW);
     digitalWrite(_e,HIGH);
     digitalWrite(_f,HIGH);
     digitalWrite(_g,HIGH);
     break;

    case'i':
     digitalWrite(_a,LOW);
     digitalWrite(_b,HIGH);
     digitalWrite(_c,HIGH);
     digitalWrite(_d,LOW);
     digitalWrite(_e,LOW);
     digitalWrite(_f,LOW);
     digitalWrite(_g,LOW);
     break;

    case'j':
     digitalWrite(_a,LOW);
     digitalWrite(_b,HIGH);
     digitalWrite(_c,HIGH);
     digitalWrite(_d,HIGH);
     digitalWrite(_e,LOW);
     digitalWrite(_f,LOW);
     digitalWrite(_g,LOW);
     break;

    case'l':
     digitalWrite(_a,LOW);
     digitalWrite(_b,LOW);
     digitalWrite(_c,LOW);
     digitalWrite(_d,HIGH);
     digitalWrite(_e,HIGH);
     digitalWrite(_f,HIGH);
     digitalWrite(_g,LOW);
     break;

    case'n':
     digitalWrite(_a,LOW);
     digitalWrite(_b,LOW);
     digitalWrite(_c,HIGH);
     digitalWrite(_d,LOW);
     digitalWrite(_e,HIGH);
     digitalWrite(_f,LOW);
     digitalWrite(_g,HIGH);
     break;

    case'o':
     digitalWrite(_a,LOW);
     digitalWrite(_b,LOW);
     digitalWrite(_c,HIGH);
     digitalWrite(_d,HIGH);
     digitalWrite(_e,HIGH);
     digitalWrite(_f,LOW);
     digitalWrite(_g,HIGH);
     break;

    case'p':
     digitalWrite(_a,HIGH);
     digitalWrite(_b,HIGH);
     digitalWrite(_c,LOW);
     digitalWrite(_d,LOW);
     digitalWrite(_e,HIGH);
     digitalWrite(_f,HIGH);
     digitalWrite(_g,HIGH);
     break;

    case's':
     digitalWrite(_a,HIGH);
     digitalWrite(_b,LOW);
     digitalWrite(_c,HIGH);
     digitalWrite(_d,HIGH);
     digitalWrite(_e,LOW);
     digitalWrite(_f,HIGH);
     digitalWrite(_g,HIGH);
     break;

    case't':
     digitalWrite(_a,HIGH);
     digitalWrite(_b,HIGH);
     digitalWrite(_c,HIGH);
     digitalWrite(_d,LOW);
     digitalWrite(_e,LOW);
     digitalWrite(_f,LOW);
     digitalWrite(_g,LOW);
     break;

    case'u':
     digitalWrite(_a,LOW);
     digitalWrite(_b,LOW);
     digitalWrite(_c,HIGH);
     digitalWrite(_d,HIGH);
     digitalWrite(_e,HIGH);
     digitalWrite(_f,LOW);
     digitalWrite(_g,LOW);
     break;

    case'x':
     digitalWrite(_a,LOW);
     digitalWrite(_b,LOW);
     digitalWrite(_c,LOW);
     digitalWrite(_d,LOW);
     digitalWrite(_e,LOW);
     digitalWrite(_f,LOW);
     digitalWrite(_g,LOW);
     break;

    case'z':
     digitalWrite(_a,HIGH);
     digitalWrite(_b,HIGH);
     digitalWrite(_c,LOW);
     digitalWrite(_d,HIGH);
     digitalWrite(_e,HIGH);
     digitalWrite(_f,LOW);
     digitalWrite(_g,HIGH);
     break;

    case'0':
     digitalWrite(_a,HIGH);
     digitalWrite(_b,HIGH);
     digitalWrite(_c,HIGH);
     digitalWrite(_d,HIGH);
     digitalWrite(_e,HIGH);
     digitalWrite(_f,HIGH);
     digitalWrite(_g,LOW);
     break;

    case'1':
     digitalWrite(_a,LOW);
     digitalWrite(_b,HIGH);
     digitalWrite(_c,HIGH);
     digitalWrite(_d,LOW);
     digitalWrite(_e,LOW);
     digitalWrite(_f,LOW);
     digitalWrite(_g,LOW);
     break;

    case'2':
     digitalWrite(_a,HIGH);
     digitalWrite(_b,HIGH);
     digitalWrite(_c,LOW);
     digitalWrite(_d,HIGH);
     digitalWrite(_e,HIGH);
     digitalWrite(_f,LOW);
     digitalWrite(_g,HIGH);
     break;

    case'3':
     digitalWrite(_a,HIGH);
     digitalWrite(_b,HIGH);
     digitalWrite(_c,HIGH);
     digitalWrite(_d,HIGH);
     digitalWrite(_e,LOW);
     digitalWrite(_f,LOW);
     digitalWrite(_g,HIGH);
     break;

    case'4':
     digitalWrite(_a,HIGH);
     digitalWrite(_b,HIGH);
     digitalWrite(_c,HIGH);
     digitalWrite(_d,LOW);
     digitalWrite(_e,LOW);
     digitalWrite(_f,HIGH);
     digitalWrite(_g,HIGH);
     break;

    case'5':
     digitalWrite(_a,HIGH);
     digitalWrite(_b,LOW);
     digitalWrite(_c,HIGH);
     digitalWrite(_d,HIGH);
     digitalWrite(_e,LOW);
     digitalWrite(_f,HIGH);
     digitalWrite(_g,HIGH);
     break;

    case'6':
     digitalWrite(_a,LOW);
     digitalWrite(_b,LOW);
     digitalWrite(_c,HIGH);
     digitalWrite(_d,HIGH);
     digitalWrite(_e,HIGH);
     digitalWrite(_f,HIGH);
     digitalWrite(_g,HIGH);
     break;

    case'7':
     digitalWrite(_a,HIGH);
     digitalWrite(_b,HIGH);
     digitalWrite(_c,HIGH);
     digitalWrite(_d,LOW);
     digitalWrite(_e,LOW);
     digitalWrite(_f,LOW);
     digitalWrite(_g,LOW);
     break;

   case'8':
     digitalWrite(_a,HIGH);
     digitalWrite(_b,HIGH);
     digitalWrite(_c,HIGH);
     digitalWrite(_d,HIGH);
     digitalWrite(_e,HIGH);
     digitalWrite(_f,HIGH);
     digitalWrite(_g,HIGH);
     break;

    case'9':
     digitalWrite(_a,HIGH);
     digitalWrite(_b,HIGH);
     digitalWrite(_c,HIGH);
     digitalWrite(_d,HIGH);
     digitalWrite(_e,HIGH);
     digitalWrite(_f,HIGH);
     digitalWrite(_g,LOW);
     break;
  }
}
