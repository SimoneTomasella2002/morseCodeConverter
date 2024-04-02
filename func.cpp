#include "header.h"

void startMenu() {
    int choice;
    
    cout << "Salve, questo programma ti permette di convertire il codice morse in linguaggio naturale o viceversa, prego scegliere la modalità (1 per convertire da naturale a morse, 2 per convertire da morse a naturale, 0 per uscire):";

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
    
    cout << "__ Modalità Morse -> linguaggio naturale __";

    while (true) {
        cout << "Prego inserire la stringa da tradurre (cliccare su ESC e premere invio per tornare al menu principale):\n";
        cin >> inputText;

        while (inputText.empty()) {
            cout << "Errore: non puoi tradurre una stringa vuota, riprovare: \n";
            cin >> inputText;
        }

        if (inputText[0] == '\e') break;

        finalText = convertFromMorseToNat(inputText);

        cout << (finalText.empty() 
            ? "Errore: un carattere non appartenente al codice morse è stato inserito" 
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

    int pos = 0
    for (int i = 0; i < str.length(); ++i) {
        if (str[i] == ' ' || str[i] == '\n') {
            convertedText.append(addChar(str.substr(pos, i - pos)));
            pos = i;
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

char addChar(string toAdd)
{
    if (toAdd == ".-") return 'A';
    else if (toAdd == "-...") return 'B';
    else if (toAdd == "-.-.") return 'C';
    else if (toAdd == "-..") str.append("D");
    else if (toAdd == ".") str.append("E");
    else if (toAdd == "..-.") str.append("F");
    else if (toAdd == "--.") str.append("G");
    else if (toAdd == "....") str.append("H");
    else if (toAdd == "..") str.append("I");
    else if (toAdd == ".---") str.append("J");
    else if (toAdd == "-.-") str.append("K");
    else if (toAdd == ".-..") str.append("L");
    else if (toAdd == "--") str.append("M");
    else if (toAdd == "-.") str.append("N");
    else if (toAdd == "---") str.append("O");
    else if (toAdd == ".--.") str.append("P");
    else if (toAdd == "--.-") str.append("Q");
    else if (toAdd == ".-.") str.append("R");
    else if (toAdd == "...") str.append("S");
    else if (toAdd == "-") str.append("T");
    else if (toAdd == "..-") str.append("U");
    else if (toAdd == "...-") str.append("V");
    else if (toAdd == ".--") str.append("W");
    else if (toAdd == "-..-") str.append("X");
    else if (toAdd == "-.--") str.append("Y");
    else if (toAdd == "--..") str.append("Z");
    else if (toAdd == ".----") str.append("1");
    else if (toAdd == "..---") str.append("2");
    else if (toAdd == "...--") str.append("3");
    else if (toAdd == "....-") str.append("4");
    else if (toAdd == ".....") str.append("5");
    else if (toAdd == "-....") str.append("6");
    else if (toAdd == "--...") str.append("7");
    else if (toAdd == "---..") str.append("8");
    else if (toAdd == "----.") str.append("9");
    else if (toAdd == "-----") str.append("0");
}
  