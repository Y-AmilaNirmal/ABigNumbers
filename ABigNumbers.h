#ifndef ABigNumbers_h
#define ABigNumbers_h

#include "Arduino.h"
#include "LiquidCrystal_I2C.h"

class ABigNumbers
{
    public:
        ABigNumbers(LiquidCrystal_I2C *);
        void begin();
        void clearLargeNumber(byte, byte);
        void displayLargeNumber(byte, byte, byte);
        void displayLargeInt(int, byte, byte, byte, bool);

    private:
        LiquidCrystal_I2C *_lcd;
};

#endif