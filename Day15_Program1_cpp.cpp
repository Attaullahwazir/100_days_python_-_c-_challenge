#include <iostream>
#include <string>

using namespace std;

int main() {
    // 1. Character to ASCII (Encoding)
    char myChar = 'A';
    int asciiValue = (int)myChar; // Explicit type casting
    cout << "Character: " << myChar << " | ASCII Value: " << asciiValue << endl;

    // 2. ASCII to Character (Decoding)
    int myNum = 107;
    char decodedChar = (char)myNum;
    cout << "ASCII Value: " << myNum << " | Character: " << decodedChar << endl;

    // 3. Character Arithmetic (Increment/Decrement)
    char nextLetter = 'a';
    nextLetter++; // Increments the ASCII value from 97 to 98
    cout << "Next letter after 'a' is: " << nextLetter << endl;

    // 4. Case Conversion (Difference of 32)
    char upper = 'G';
    char lower = upper + 32; // Moving from Uppercase to Lowercase
    cout << "Uppercase: " << upper << " | Lowercase equivalent: " << lower << endl;

    // 5. Digit Conversion (Subtract '0')
    char digitChar = '7';
    int numericValue = digitChar - '0'; // 55 - 48 = 7
    cout << "Character '7' as an actual integer: " << numericValue << endl;

    // 6. Loop through ASCII range
    cout << "Letters A-E: ";
    for (int i = 65; i <= 69; i++) {
        cout << (char)i << " ";
    }
    cout << endl;

    return 0;
}

