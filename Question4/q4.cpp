
#include <iostream>

using namespace std;

bool isLower(int character){
    return islower(character);
}

int main() {

    char character; // Variable to store the character entered by the user

    cout << "Enter a character : "; //Prompt the user to enter a character
    cin >> character; // Read the character entered by the user

    if(isLower(character)){
        cout << "The character " << character << " is a lowercase letter." << endl;
    }else{
        cout << "The character " << character << " is an uppercase letter." << endl;
    }
    
	return 0;
}
