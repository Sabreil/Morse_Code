/*
  Morse.h - Library for flashing Morse code.
  Dash(), Dot() by David A. Mellis, November 2, 2007.
  0-9, A-Z, period and character to Morse by Richard Michalka 2015  
*/

#ifndef Morse_h
#define Morse_h

#include "Arduino.h"

class Morse				  // Class containing functions 
{
  public:
    Morse(int pin);
    void message(String input);
    void dot();
    void dash();
    void Zero();
    void One();
    void Two();
    void Three();
    void Four();
    void Five();
    void Six();
    void Seven();
    void Eight();
    void Nine();
    void A();
    void B();
    void C();
    void D();
    void E();
    void Fa();
    void G();
    void H();
    void I();
    void J();
    void K();
    void L();
    void M();
    void N();
    void O();
    void P();
    void Q();
    void R();
    void S();
    void T();
    void U();
    void V();
    void W();
    void X();
    void Y();
    void Z();
    void Period();
    
  private:
    int _pin;		// Pin declaration
};

#endif

