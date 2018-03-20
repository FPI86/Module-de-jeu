
#ifndef _COMCLASSMDJ_h
#define _COMCLASSMDJ_h

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <Wire.h>


void reqEtat();

void reqParametres();

void reqPretEtConforme();

void envoyerErreur();

void reqFinDeJeu();

void reqDebutJeu();

void reqTemps();