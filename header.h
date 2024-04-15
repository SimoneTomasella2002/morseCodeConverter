#ifndef HEADER_H
#define HEADER_H
    
    #include <iostream>
    #include <unordered_map>

    #define EXIT_CHOICE 0
    #define FROM_NAT_TO_MORSE 1
    #define FROM_MORSE_TO_NAT 2
    #define ESC_BUTTON 27
    #define LOWER_NUMBER_BOUND 48 
    #define UPPER_NUMBER_BOUND 57
    #define LOWER_LETTER_BOUND 65
    #define UPPER_LETTER_BOUND 90

    using namespace std;

    string addNatChar(string toAdd);

    string addMorseChar(char toAdd);

    unordered_map<string, string> generateMorseToNatMap();
    unordered_map<char, string> generateNatToMorseMap();
    extern unordered_map<string, string> fromMorseToNatMap;
    extern unordered_map<char, string> fromNatToMorseMap;

    void startMenu();
    void selectedMode(int mode);

    string convertFromMorseToNat(string str);
    string convertFromNatToMorse(string str);

#endif