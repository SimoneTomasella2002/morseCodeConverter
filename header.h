#ifndef HEADER_H
#define HEADER_H
    
    #include <iostream>

    #define EXIT_CHOICE 0
    #define FROM_NAT_TO_MORSE 1
    #define FROM_MORSE_TO_NAT 2

    using namespace std;

    char addChar(string toAdd);

    //TODO
    void fromMorseToNat();
    //TODO
    string convertFromMorseToNat(string str);

    //TODO
    void fromNatToMorse();
    void startMenu();

#endif