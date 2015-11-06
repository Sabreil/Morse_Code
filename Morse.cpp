/*
    Morse.cpp Library for flashing Morse code.
    Morse() Dot() and Dash() taken from David A. Mellis 2007
    Modified and re-written by Richard Michalka 2015
    -Includes character to morse code conversions for 0-9, . and a-z

*/

#include "Arduino.h"	   
#include "Morse.h"		   // Header file containing class definition


Morse::Morse(int pin)	   // Declares pin for output
{
  pinMode(pin, OUTPUT);
  _pin = pin;
}

void Morse::dot()		   // Turns output on for 250 ms then off for 250ms
{
  digitalWrite(_pin, HIGH);
  delay(250);
  digitalWrite(_pin, LOW);
  delay(250);  
}

void Morse::dash()		   // Turn output on for 1kms then off for 250ms
{
  digitalWrite(_pin, HIGH);
  delay(1000);
  digitalWrite(_pin, LOW);
  delay(250);
}

void Morse::Zero()		   // 0-9, period . and A-Z (both upper and lower case) use dot() and dash() to convert character to morse code
{
    Morse::dash();
    Morse::dash();
    Morse::dash();
    Morse::dash();
    Morse::dash();
}

void Morse::One()
{
    Morse::dot();
    Morse::dash();
    Morse::dash();
    Morse::dash();
    Morse::dash();
}

void Morse::Two()
{
    Morse::dot();
    Morse::dot();
    Morse::dash();
    Morse::dash();
    Morse::dash();
}

void Morse::Three()
{
    Morse::dot();
    Morse::dot();
    Morse::dot();
    Morse::dash();
    Morse::dash();
}
void Morse::Four()
{
    Morse::dot();
    Morse::dot();
    Morse::dot();
    Morse::dot();
    Morse::dash();
}
void Morse::Five()
{
    Morse::dot();
    Morse::dot();
    Morse::dot();
    Morse::dot();
    Morse::dot();
}

void Morse::Six()
{
    Morse::dash();
    Morse::dot();
    Morse::dot();
    Morse::dot();
    Morse::dot();
}
void Morse::Seven()
{
    Morse::dash();
    Morse::dash();
    Morse::dot();
    Morse::dot();
    Morse::dot();
}

void Morse::Eight()
{
    Morse::dash();
    Morse::dash();
    Morse::dash();
    Morse::dot();
    Morse::dot();
}
void Morse::Nine()
{
    Morse::dash();
    Morse::dash();
    Morse::dash();
    Morse::dash();
    Morse::dot();
}
void Morse::Period()
{
    Morse::dot();
    Morse::dash();
    Morse::dot();
    Morse::dash();
    Morse::dot();
    Morse::dash();
  
}

void Morse::A()
{
    Morse::dot();
    Morse::dash();
}
void Morse::B()
{

    Morse::dash();
    Morse::dot();
    Morse::dot();
    Morse::dot();
}
void Morse::C()
{
    Morse::dot();
    Morse::dash();
    Morse::dot();
    Morse::dash();
}
void Morse::D()
{

    Morse::dash();
    Morse::dot();
    Morse::dot();
}
void Morse::E()
{
    Morse::dot();

}
void Morse::Fa()
{
    Morse::dot();
    Morse::dot();
    Morse::dash();
    Morse::dot();
}
void Morse::G()
{
    Morse::dash();
    Morse::dash();
    Morse::dot();
   
}
void Morse::H()
{
    Morse::dot();
    Morse::dot();
    Morse::dot();
    Morse::dot();
}
void Morse::I()
{
    Morse::dot();
    Morse::dot();
}
void Morse::J()
{
    Morse::dot();
    Morse::dash();
    Morse::dash();
    Morse::dash();
}
void Morse::K()
{
    Morse::dash();
    Morse::dot();
    Morse::dash();
}
void Morse::L()
{
    Morse::dot();
    Morse::dash();
    Morse::dot();
    Morse::dot();
}
void Morse::M()
{
    Morse::dash();
    Morse::dash();
}
void Morse::N()
{
    Morse::dash();
    Morse::dot();
}
void Morse::O()
{
    Morse::dash();
    Morse::dash();
    Morse::dash();
}
void Morse::P()
{
    Morse::dot();
    Morse::dash();
    Morse::dash();
    Morse::dot();
}
void Morse::Q()
{
    Morse::dash();
    Morse::dash();
    Morse::dot();
    Morse::dash();
}
void Morse::R()
{
    Morse::dot();
    Morse::dash();
    Morse::dot();
}

void Morse::S()
{
    Morse::dot();
    Morse::dot();
    Morse::dot();
}
void Morse::T()
{
    Morse::dash();
}
void Morse::U()
{
    Morse::dot();
    Morse::dot();
    Morse::dash();
}
void Morse::V()
{
    Morse::dot();
    Morse::dot();
    Morse::dot();
    Morse::dash();
}
void Morse::W()
{
    Morse::dot();
    Morse::dash();
    Morse::dash();
}
void Morse::X()
{
    Morse::dash();
    Morse::dot();
    Morse::dot();
    Morse::dash();
}
void Morse::Y()
{
    Morse::dash();
    Morse::dot();
    Morse::dash();
    Morse::dash();
}
void Morse::Z()
{
    Morse::dash();
    Morse::dash();
    Morse::dot();
    Morse::dot();
}

// Function message(String input)
// Precondition: Input will be a string or string object or character array
// Postcondition: None
// Parameter(input): A string object, or character array entered in main program
// Description: Function takes a string, iterates through each character in the string 
// and compares the value to a switch statement (test). Then executes the code block and exists
// each character will have sent a call to the appropiate morse code funtion for that character



void Morse::message(String input)		
{
    int count = input.length();
    for (int i = 0; i < count; i++)
    {


	   char test = input.charAt(i);

	   switch (test)
	   {
	   case '0':
	   {
		  Morse::Zero();
		  delay(250);
		  break;
	   }

	   case '1':
	   {
		  Morse::One();
		  delay(250);
		  break;
	   }
	   case '2':
	   {
		  Morse::Two();
		  delay(250);
		  break;
	   }
	   case '3':
	   {
		  Morse::Three();
		  delay(250);
		  break;
	   }
	   case '4':
	   {
		  Morse::Four();
		  delay(250);
		  break;
	   }
	   case '5':
	   {
		  Morse::Five();
		  delay(250);
		  break;
	   }
	   case '6':
	   {
		  Morse::Six();
		  delay(250);
		  break;
	   }
	   case '7':
	   {
		  Morse::Seven();
		  delay(250);
		  break;
	   }
	   case '8':
	   {
		  Morse::Eight();
		  delay(250);
		  break;
	   }
	   case '9':
	   {
		  Morse::Nine();
		  delay(250);
		  break;
	   }
	   case '.':
	   {
		  Morse::Period();
		  delay(250);
		  break;
	   }
	   case 'A':
	   case 'a':
	   {
		  Morse::A();
		  delay(250);
		  break;
	   }
	   case 'B':
	   case 'b':
	   {
		  Morse::B();
		  delay(250);
		  break;
	   }
	   case 'C':
	   case 'c':
	   {
		  Morse::C();
		  delay(250);
		  break;
	   }
	   case 'D':
	   case 'd':
	   {
		  Morse::D();
		  delay(250);
		  break;
	   }
	   case 'E':
	   case 'e':
	   {
		  Morse::E();
		  delay(250);
		  break;
	   }
	   case 'F':
	   case 'f':
	   {
		  Morse::Fa();
		  delay(250);
		  break;
	   }
	   case 'G':
	   case 'g':
	   {
		  Morse::G();
		  delay(250);
		  break;
	   }
	   case 'H':
	   case 'h':
	   {
		  Morse::H();
		  delay(250);
		  break;
	   }
	   case 'I':
	   case 'i':
	   {
		  Morse::I();
		  delay(250);
		  break;
	   }
	   case 'J':
	   case 'j':
	   {
		  Morse::J();
		  delay(250);
		  break;
	   }
	   case 'K':
	   case 'k':
	   {
		  Morse::K();
		  delay(250);
		  break;
	   }
	   case 'L':
	   case 'l':
	   {
		  Morse::L();
		  delay(250);
		  break;
	   }
	   case 'M':
	   case 'm':
	   {
		  Morse::M();
		  delay(250);
		  break;
	   }
	   case 'N':
	   case 'n':
	   {
		  Morse::N();
		  delay(250);
		  break;
	   }
	   case 'O':
	   case 'o':
	   {
		  Morse::O();
		  delay(250);
		  break;
	   }
	   case 'P':
	   case 'p':
	   {
		  Morse::P();
		  delay(250);
		  break;
	   }
	   case 'Q':
	   case 'q':
	   {
		  Morse::Q();
		  delay(250);
		  break;
	   }
	   case 'R':
	   case 'r':
	   {
		  Morse::R();
		  delay(250);
		  break;
	   }
	   case 'S':
	   case 's':
	   {
		  Morse::S();
		  delay(250);
		  break;
	   }
	   case 'T':
	   case 't':
	   {
		  Morse::T();
		  delay(250);
		  break;
	   }
	   case 'U':
	   case 'u':
	   {
		  Morse::U();
		  delay(250);
		  break;
	   }
	   case 'V':
	   case 'v':
	   {
		  Morse::V();
		  delay(250);
		  break;
	   }
	   case 'W':
	   case 'w':
	   {
		  Morse::W();
		  delay(250);
		  break;
	   }
	   case 'X':
	   case 'x':
	   {
		  Morse::X();
		  delay(250);
		  break;
	   }
	   case 'Y':
	   case 'y':
	   {
		  Morse::Y();
		  delay(250);
		  break;
	   }
	   case 'Z':
	   case 'z':
	   {
		  Morse::Z();
		  delay(250);
		  break;
	   }
	   case ' ':
	   {
		  delay(700);
	   }
	   default:
	   {
		  break;
	   }

	   }
    }
}

