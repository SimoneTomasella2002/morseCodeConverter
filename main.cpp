#include "header.h"

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

/*
    string code;

    std::cout << "Salve, questo programma ti converte un linguaggio morse in un linguaggio naturale, prego inserisci di seguito il testo:\n";
    getline(cin, code);

    string convertedCode = "";

    int pointer = 0;
    int endCode = code.length();

    for (int pos = 0; pos <= endCode; ++pos)
    {
        if (code[pos] == ' ' || code[pos] == '\0')
        {
            addChar(convertedCode, code.substr(pointer, pos - pointer));
            pointer = pos + 1;
        }
    }

    std::cout << convertedCode << endl;

    return EXIT_SUCCESS;
*/
}


