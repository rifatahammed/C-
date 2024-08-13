#include<iostream>
using namespace std;

int main() {
    //Vowel or a Consonant

    char c;
    bool isLowercaseVowel, isUppercaseVowel;

    cout << "Enter an alphabet: ";
    cin >> c;

    // check lowercase vowel
    isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    // check uppercase vowel
    isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    // check alphabet
    if (!isalpha(c)) {
        printf("Error! Non-alphabetic character.");
    }
    else if (isLowercaseVowel || isUppercaseVowel) {
        cout << c << " is a vowel.";
    }
    else {
        cout << c << " is a consonant.";
    }
     
	system("pause>0");
}

