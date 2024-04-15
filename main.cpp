#include "header.h"

unordered_map<string, string> fromMorseToNatMap = generateMorseToNatMap();
unordered_map<char, string> fromNatToMorseMap = generateNatToMorseMap();

int main(int argc, char* argv[])
{

    // Argument checking
    if (argc == 2){
        std::cout << "Error, you must choose a string to convert as second argument";
        return EXIT_FAILURE;
    }
    if (argc > 3) {
        std::cout << "Error, more than three arguments are passed";
        return EXIT_FAILURE;
    }
    if (argc == 3 && ((string(argv[1]) != "-mn") && (string(argv[1]) != "-nm"))) {
        std::cout << "Error, you can choose argument -mn or -nm";
        return EXIT_FAILURE;
    } 
    
    // Checking arguments for different modes
    if (argc == 3 && (string(argv[1]) == "-mn")) {
        string ret = convertFromMorseToNat((string)argv[2]);
        if (!ret.empty()) cout << ret << endl;
        return EXIT_SUCCESS;
    }
    else if (argc == 3 && (string(argv[1]) == "-nm")) {
        string ret = convertFromNatToMorse((string)argv[2]);
        if (!ret.empty()) cout << ret << endl;
        return EXIT_SUCCESS;
    }

    startMenu();
    return EXIT_SUCCESS;
}


void startMenu() {
    int choice;
    
    cout << "Salve, questo programma ti permette di convertire il codice morse in linguaggio naturale o viceversa.\n";

    while (true) {
        cout << "\n__ Menu' principale __\n\t- 1 per convertire da naturale a morse\n\t- 2 per convertire da morse a naturale\n\t- 0 per uscire\nScegliere la modalita': ";
        cin >> choice;

        while (choice != EXIT_CHOICE && choice != FROM_NAT_TO_MORSE && choice != FROM_MORSE_TO_NAT) {
            cout << "Hai scelto un valore non valido, prego riprovare: ";
            cin >> choice;
        }

        if (choice == EXIT_CHOICE) break;
        else if (choice == FROM_NAT_TO_MORSE || choice == FROM_MORSE_TO_NAT) selectedMode(choice);
    }
    
    return;
}

void selectedMode(int mode) {

    if (mode != FROM_MORSE_TO_NAT && mode != FROM_NAT_TO_MORSE) {
        cout << "Fatal error: a bad mode has been selected!\n";
        return;
    }
    
    cin.ignore();

    cout << (mode == FROM_MORSE_TO_NAT
        ? "\n\n__ Modalità Morse -> Linguaggio Naturale __\n"
        : "\n\n__ Linguaggio Naturale -> Modalità Morse __\n"
    );

    while (true) {
        string inputText, finalText = "";
        
        cout << "Prego inserire la stringa da tradurre (cliccare su ESC e premere invio per tornare al menu principale):\n";
        getline(cin, inputText);
    
        while (inputText.empty()) {
            cout << "Errore: non puoi tradurre una stringa vuota, riprovare: \n";
            getline(cin, inputText);
        }

        if (inputText[0] == ESC_BUTTON) break;

        finalText = (mode == FROM_MORSE_TO_NAT ? convertFromMorseToNat(inputText) : convertFromNatToMorse(inputText)); 

        if (!finalText.empty()) cout << finalText << endl;
    }

    return;
}