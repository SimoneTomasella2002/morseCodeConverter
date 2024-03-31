#include <iostream>

using namespace std;

void addChar(string &str, string toAdd);

int main()
{
    string code;

    cout << "Salve, questo programma ti converte un linguaggio morse in un linguaggio naturale, prego inserisci di seguito il testo:\n";
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

    cout << convertedCode << endl;

    return 0;
}

void addChar(string &str, string toAdd)
{
    if (toAdd == ".-")
    {
        str.append("A");
    }
    else if (toAdd == "-...")
    {
        str.append("B");
    }
    else if (toAdd == "-.-.")
    {
        str.append("C");
    }
    else if (toAdd == "-..")
    {
        str.append("D");
    }
    else if (toAdd == ".")
    {
        str.append("E");
    }
    else if (toAdd == "..-.")
    {
        str.append("F");
    }
    else if (toAdd == "--.")
    {
        str.append("G");
    }
    else if (toAdd == "....")
    {
        str.append("H");
    }
    else if (toAdd == "..")
    {
        str.append("I");
    }
    else if (toAdd == ".---")
    {
        str.append("J");
    }
    else if (toAdd == "-.-")
    {
        str.append("K");
    }
    else if (toAdd == ".-..")
    {
        str.append("L");
    }
    else if (toAdd == "--")
    {
        str.append("M");
    }
    else if (toAdd == "-.")
    {
        str.append("N");
    }
    else if (toAdd == "---")
    {
        str.append("O");
    }
    else if (toAdd == ".--.")
    {
        str.append("P");
    }
    else if (toAdd == "--.-")
    {
        str.append("Q");
    }
    else if (toAdd == ".-.")
    {
        str.append("R");
    }
    else if (toAdd == "...")
    {
        str.append("S");
    }
    else if (toAdd == "-")
    {
        str.append("T");
    }
    else if (toAdd == "..-")
    {
        str.append("U");
    }
    else if (toAdd == "...-")
    {
        str.append("V");
    }
    else if (toAdd == ".--")
    {
        str.append("W");
    }
    else if (toAdd == "-..-")
    {
        str.append("X");
    }
    else if (toAdd == "-.--")
    {
        str.append("Y");
    }
    else if (toAdd == "--..")
    {
        str.append("Z");
    }
    else if (toAdd == ".----")
    {
        str.append("1");
    }
    else if (toAdd == "..---")
    {
        str.append("2");
    }
    else if (toAdd == "...--")
    {
        str.append("3");
    }
    else if (toAdd == "....-")
    {
        str.append("4");
    }
    else if (toAdd == ".....")
    {
        str.append("5");
    }
    else if (toAdd == "-....")
    {
        str.append("6");
    }
    else if (toAdd == "--...")
    {
        str.append("7");
    }
    else if (toAdd == "---..")
    {
        str.append("8");
    }
    else if (toAdd == "----.")
    {
        str.append("9");
    }
    else if (toAdd == "-----")
    {
        str.append("0");
    }
}