#ifndef HEADER_H
#define HEADER_H
    
    #include <iostream>

    #define EXIT_CHOICE 0
    #define FROM_NAT_TO_MORSE 1
    #define FROM_MORSE_TO_NAT 2
    #define ESC_BUTTON 27

    using namespace std;

    string addNatChar(string toAdd);

    string addMorseChar(string toAdd);

    //TODO
    void fromMorseToNat();
    //TODO
    string convertFromMorseToNat(string str);
    //TODO
    string convertFromNatToMorse(string str);
    //TODO
    void fromNatToMorse();
    void startMenu();

#endif