#include "header.h"

//TODO
void startMenu() {
    int choice = 0;
    
    cout << "Salve, questo programma ti permette di convertire il codice morse in linguaggio naturale o viceversa, prego scegliere la modalità (1 per convertire da naturale a morse, 2 per convertire da morse a naturale, 0 per uscire):";
    cin >> choice;

    while (choice != 0 || choice != 1 || choice != 2) {
        cout << "Hai scelto un valore errato, prego riprovare: ";
        cin >> choice;
    }

    // TODO menu
}

//TODO
void fromMorseToNat() {

}

//TODO
void fromNatToMorse() {

}

void addChar(string &str, string toAdd)
{
    if (toAdd == ".-") str.append("A");
    else if (toAdd == "-...") str.append("B");
    else if (toAdd == "-.-.") str.append("C");
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
  