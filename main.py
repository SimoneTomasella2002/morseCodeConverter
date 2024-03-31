def convertNatChar(natChar):
    morseToChar = {
        ".-": "A", "-...": "B", "-.-.": "C", "-..": "D", ".": "E",
        "..-.": "F", "--.": "G", "....": "H", "..": "I", ".---": "J",
        "-.-": "K", ".-..": "L", "--": "M", "-.": "N", "---": "O",
        ".--.": "P", "--.-": "Q", ".-.": "R", "...": "S", "-": "T",
        "..-": "U", "...-": "V", ".--": "W", "-..-": "X", "-.--": "Y",
        "--..": "Z", ".----": "1", "..---": "2", "...--": "3", "....-": "4",
        ".....": "5", "-....": "6", "--...": "7", "---..": "8", "----.": "9",
        "-----": "0"
    }
    return morseToChar.get(natChar, "")

def morseToNat(morseInput):
    convertedText = ""
    
    chars = morseInput.split(" ")

    for char in chars:
        convertedText += convertNatChar(char)

    return convertedText

if __name__ == "__main__":
    print("Salve, questo programma ti converte un linguaggio morse in un linguaggio naturale, prego inserisci di seguito il testo:")
    morseCode = input()
    convertedText = morseToNat(morseCode)
    print(convertedText)