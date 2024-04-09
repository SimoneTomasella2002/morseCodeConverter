#include "header.h"

void startMenu() {
    int choice;
    
    cout << "Salve, questo programma ti permette di convertire il codice morse in linguaggio naturale o viceversa.\n";

    while (true) {
        cout << "Prego scegliere la modalità (1 per convertire da naturale a morse, 2 per convertire da morse a naturale, 0 per uscire): ";
        cin >> choice;

        while (choice != EXIT_CHOICE && choice != FROM_NAT_TO_MORSE && choice != FROM_MORSE_TO_NAT) {
            cout << "Hai scelto un valore non valido, prego riprovare: ";
            cin >> choice;
        }

        if (choice == EXIT_CHOICE) break;
        else if (choice == FROM_NAT_TO_MORSE) fromNatToMorse();
        else if (choice == FROM_MORSE_TO_NAT) fromMorseToNat();
    }
    
    return;
}

//TODO
void fromMorseToNat() {
    string inputText, finalText = "";
    
    cout << "\n\n__ Modalità Morse -> linguaggio naturale __\n";

    while (true) {
        cout << "Prego inserire la stringa da tradurre (cliccare su ESC e premere invio per tornare al menu principale):\n";
        getline(cin, inputText);

        while (inputText.empty()) {
            cout << "Errore: non puoi tradurre una stringa vuota, riprovare: \n";
            getline(cin, inputText);
        }

        if (inputText[0] == ESC_BUTTON) break;

        // The following code assumes that convertFromMorseToNat returns a string if everthing went ok, if not it returns empty strng
        if ((finalText = convertFromMorseToNat(inputText)).empty()) cout << finalText << endl;

        inputText = "";
        finalText = "";
    }

    return;
}

//TODO
void fromNatToMorse() {
    string inputText, finalText = "";

    cout << "\n\n__ Modalità linguaggio naturale -> Morse __\n";

    while (true) {
        cout << "Prego inserire la stringa da convertire in morse (cliccare su ESC e premere INVIO per tornare al menu principale): \n";
        getline(cin, inputText);

        while(inputText.empty()) {
            cout << "Errore: non puoi tradurre una stringa vuota, riprovare: \n";
            getline(cin, inputText);
        }

        if (inputText[0] == ESC_BUTTON) break;

        if ((finalText = convertFromNatToMorse(inputText)).empty()) cout << finalText << endl;

        inputText = "";
        finalText = "";
    }

    return;
}

//TODO
string convertFromNatToMorse(string str) {
    string convertedText = "";

    for(unsigned int i = 0; i <= str.length(); ++i) {
        //TODO Error checking missing

        cout << "Current value: " << str[i] << " Current converted text: " << convertedText << endl;

        if (str[i] == ' ') ++i;
        if (str[i] == '\0') break;

        convertedText.append(addMorseChar(str[i]) + " ");
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
    if (toAdd == ".-") return "A";
    else if (toAdd == "-...") return "B";
    else if (toAdd == "-.-.") return "C";
    else if (toAdd == "-..") return "D";
    else if (toAdd == ".") return "E";
    else if (toAdd == "..-.") return "F";
    else if (toAdd == "--.") return "G";
    else if (toAdd == "....") return "H";
    else if (toAdd == "..") return "I";
    else if (toAdd == ".---") return "J";
    else if (toAdd == "-.-") return "K";
    else if (toAdd == ".-..") return "L";
    else if (toAdd == "--") return "M";
    else if (toAdd == "-.") return "N";
    else if (toAdd == "---") return "O";
    else if (toAdd == ".--.") return "P";
    else if (toAdd == "--.-") return "Q";
    else if (toAdd == ".-.") return "R";
    else if (toAdd == "...") return "S";
    else if (toAdd == "-") return "T";
    else if (toAdd == "..-") return "U";
    else if (toAdd == "...-") return "V";
    else if (toAdd == ".--") return "W";
    else if (toAdd == "-..-") return "X";
    else if (toAdd == "-.--") return "Y";
    else if (toAdd == "--..") return "Z";
    else if (toAdd == ".----") return "1";
    else if (toAdd == "..---") return "2";
    else if (toAdd == "...--") return "3";
    else if (toAdd == "....-") return "4";
    else if (toAdd == ".....") return "5";
    else if (toAdd == "-....") return "6";
    else if (toAdd == "--...") return "7";
    else if (toAdd == "---..") return "8";
    else if (toAdd == "----.") return "9";
    else if (toAdd == "-----") return "0";
    else return "";
}

string addMorseChar(char toAdd){
    if (toAdd == 'A') return ".-";
    else if (toAdd == 'B') return "-...";
    else if (toAdd == 'C') return "-.-.";
    else if (toAdd == 'D') return "-..";
    else if (toAdd == 'E') return ".";
    else if (toAdd == 'F') return "..-.";
    else if (toAdd == 'G') return "--.";
    else if (toAdd == 'H') return "....";
    else if (toAdd == 'I') return "..";
    else if (toAdd == 'J') return ".---";
    else if (toAdd == 'K') return "-.-";
    else if (toAdd == 'L') return ".-..";
    else if (toAdd == 'M') return "--";
    else if (toAdd == 'N') return "-.";
    else if (toAdd == 'O') return "---";
    else if (toAdd == 'P') return ".--.";
    else if (toAdd == 'Q') return "--.-";
    else if (toAdd == 'R') return ".-.";
    else if (toAdd == 'S') return "...";
    else if (toAdd == 'T') return "-";
    else if (toAdd == 'U') return "..-";
    else if (toAdd == 'V') return "...-";
    else if (toAdd == 'W') return ".--";
    else if (toAdd == 'X') return "-..-";
    else if (toAdd == 'Y') return "-.--";
    else if (toAdd == 'Z') return "--..";
    else if (toAdd == '1') return ".----";
    else if (toAdd == '2') return "..---";
    else if (toAdd == '3') return "...--";
    else if (toAdd == '4') return "....-";
    else if (toAdd == '5') return ".....";
    else if (toAdd == '6') return "-....";
    else if (toAdd == '7') return "--...";
    else if (toAdd == '8') return "----.";
    else if (toAdd == '9') return "----.";
    else if (toAdd == '0') return "-----";
    else return "";
}