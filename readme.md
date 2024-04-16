# Morse Translator by Simone Tomasella

## Features

- **Text to Morse Conversion**: Converts any natural language text to Morse code
- **Morse to Text Conversion**: Decodes a Morse code string and converts it into readable text.
- **Simple Use Interface**: Provides a simple Command Line Interface (CLI) for easy usage.
- **Shortcuts to immediately Convert**: Use -mn or -nm to convert immediately from Morse to Natural Language, or viceversa 

## Prerequisites

To use this software you'll need:
- A C++ compiler
- (optional) make software for automated compilation

## Installation

To install Morse Translator, follow these steps:

1. Clone the repository
2. Navigate to the project directory:
3. Compile the project using "make" from Command Line (alternatively write "g++ *.cpp -O2 -o morse.out")

## Usage

After compiling the program with 'make', you can run it from the Command Line by writing "./morse.out"

Alternatively you can launch the program in:
- "morse to natural language" mode by writing './morse.out -mn "Hello World"'
- "natural language to morse" mode by writing './morse.out -nm ".... . .-.. .-.. ---  .-- --- .-. .-.. -.."'

## License

Morse Translator is distribuited under the MIT License. For more details see the 'LICENSE' file included with the source code.

## Support

If you encounter any issues or have questions regarding the software, feel free to open an issue in the GitHub repository.
