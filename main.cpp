#include "header.h"

unordered_map<string, string> fromMorseToNatMap = generateMorseToNatMap();
unordered_map<char, string> fromNatToMorseMap = generateNatToMorseMap();

int main(int argc, char* argv[])
{
    if (argc > 2) {
        std::cout << "Error, more than one command line argument was written";
        return EXIT_FAILURE;
    }
    if (argc == 2 && ((string(argv[1]) != "-mn") || (string(argv[1]) != "-nm"))) {
        std::cout << "Error, you can choose argument -mn or -nm";
        return EXIT_FAILURE;
    } 
    
    if (argc == 2 && (string(argv[1]) == "-mn")) fromMorseToNat();
    else if (argc == 2 && (string(argv[1]) == "-nm")) fromNatToMorse();
    else startMenu();

    return EXIT_SUCCESS;
}


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
    // Cin buffer is not cleaned correctly, following code cleans it manually 
    cin.ignore();

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
        if (!(finalText = convertFromMorseToNat(inputText)).empty()) cout << finalText << endl;

        inputText = "";
        finalText = "";
    }

    return;
}

//TODO
void fromNatToMorse() {
    // Cin buffer is not cleaned correctly, following code cleans it manually 
    cin.ignore();
    
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

        if (!(finalText = convertFromNatToMorse(inputText)).empty()) cout << finalText << endl;

        inputText = "";
        finalText = "";
    }

    return;
}