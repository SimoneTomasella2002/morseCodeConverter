#include "header.h"

unordered_map<string, string> generateMorseToNatMap() {
    unordered_map<string, string> ret = {
        {".-", "A"},
        {"-...", "B"},
        {"-.-.", "C"},
        {"-..", "D"},
        {".", "E"},
        {"..-.", "F"},
        {"--.", "G"},
        {"....", "H"},
        {"..", "I"},
        {".---", "J"},
        {"-.-", "K"},
        {".-..", "L"},
        {"--", "M"},
        {"-.", "N"},
        {"---", "O"},
        {".--.", "P"},
        {"--.-", "Q"},
        {".-.", "R"},
        {"...", "S"},
        {"-", "T"},
        {"..-", "U"},
        {"...-", "V"},
        {".--", "W"},
        {"-..-", "X"},
        {"-.--", "Y"},
        {"--..", "Z"},
        {".----", "1"},
        {"..---", "2"},
        {"...--", "3"},
        {"....-", "4"},
        {".....", "5"},
        {"-....", "6"},
        {"--...", "7"},
        {"---..", "8"},
        {"----.", "9"},
        {"-----", "0"}
    };

    return ret;
}

unordered_map<string, string> generateNatToMorseMap() {
    unordered_map<string, string> ret = {
        {"A", ".-"},
        {"B", "-..."},
        {"C", "-.-."},
        {"D", "-.."},
        {"E", "."},
        {"F", "..-."},
        {"G", "--."},
        {"H", "...."},
        {"I", ".."},
        {"J", ".---"},
        {"K", "-.-"},
        {"L", ".-.."},
        {"M", "--"},
        {"N", "-."},
        {"O", "---"},
        {"P", ".--."},
        {"Q", "--.-"},
        {"R", ".-."},
        {"S", "..."},
        {"T", "-"},
        {"U", "..-"},
        {"V", "...-"},
        {"W", ".--"},
        {"X", "-..-"},
        {"Y", "-.--"},
        {"Z", "--.."},
        {"1", ".----"},
        {"2", "..---"},
        {"3", "...--"},
        {"4", "....-"},
        {"5", "....."},
        {"6", "-...."},
        {"7", "--..."},
        {"8", "---.."},
        {"9", "----."},
        {"0", "-----"}
    };

    return ret;
}