#include "header.h"

string convertFromNatToMorse(string str) {
    string convertedText = "";

    for (unsigned int i = 0; i <= str.length(); ++i) {
        str[i] = toupper(str[i]);
        
        if ((str[i] < LOWER_NUMBER_BOUND || str[i] > UPPER_NUMBER_BOUND) 
            && (str[i] < LOWER_LETTER_BOUND || str[i] > UPPER_LETTER_BOUND) 
            && str[i] != ' ' && str[i] != '\0')
        {
            cout << "Errore: Trovato un carattere non supportato\n";
            return "";
        }

        if (str[i] == ' ') ++i;
        if (str[i] == '\0') break;

        convertedText.append(addMorseChar(string(str[i], 1) + " "));
    }

    return convertedText; 
}

string convertFromMorseToNat(string str) {
    string convertedText = "";

    int pos = 0;
    for (unsigned int i = 0; i <= str.length(); ++i) {
        if (str[i] != '.' && str[i] != '-' && str[i] != ' ' && str[i] != '\0') {
            cout << "Errore: Trovato un carattere non supportato\n";
            return "";
        }
        
        if (str[i] == ' ' || str[i] == '\0') {
            convertedText.append(addNatChar(str.substr(pos, i - pos)));
            pos = i + 1;
        }
    }

    return convertedText;
}

string addNatChar(string toAdd)
{
    auto ret = fromMorseToNatMap.find(toAdd);
    return (ret == fromMorseToNatMap.end() ? "" : ret->second);
}

string addMorseChar(string toAdd) {
    auto ret = fromNatToMorseMap.find(toAdd);
    return (ret == fromNatToMorseMap.end() ? "" : ret->second);
}