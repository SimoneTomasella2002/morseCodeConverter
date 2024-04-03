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
    string inputText = "";
    string finalText = "";
    
    cout << "\n\n__ Modalità Morse -> linguaggio naturale __\n";

    while (true) {
        cout << "Prego inserire la stringa da tradurre (cliccare su ESC e premere invio per tornare al menu principale):\n";
        getline(cin, inputText);

        while (inputText.empty()) {
            cout << "Errore: non puoi tradurre una stringa vuota, riprovare: \n";
            getline(cin, inputText);
        }

        if (inputText[0] == 27) break;

        finalText = convertFromMorseToNat(inputText);

        cout << (finalText.empty() 
            ? "Errore: un carattere non appartenente al codice morse è stato inserito \n" 
            : finalText) 
            << endl;

        inputText = "";
        finalText = "";
    }

    return;
}


string convertFromMorseToNat(string str) {
    string convertedText = "";

    // TODO Controllo errore

    int pos = 0;
    for (unsigned int i = 0; i <= str.length(); ++i) {
        if (str[i] == ' ' || str[i] == '\0') {
            convertedText.append(addChar(str.substr(pos, i - pos)));
            pos = i + 1;
        }
    }

    return convertedText;
}

//TODO
void fromNatToMorse() {
    cout << "__ Modalità linguaggio naturale -> Morse __";

    while (true) {

    }

    return;
}

string addChar(string toAdd)
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
  