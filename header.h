#ifndef HEADER_H
#define HEADER_H
    
    #include <iostream>

    #define INITIALIZER_CHOICE -1
    #define EXIT_CHOICE 0
    #define FROM_NAT_TO_MORSE 1
    #define FROM_MORSE_TO_NAT 2

    using namespace std;

    void addChar(string &str, string toAdd);

    //TODO
    void fromMorseToNat();
    //TODO
    void fromNatToMorse();
    //TODO
    void startMenu();

#endif