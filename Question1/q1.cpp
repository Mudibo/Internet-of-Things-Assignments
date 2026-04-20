
#include <iostream>
using namespace std;

//A function that takes days as an argument and returns the equivalent number of seconds
int calculateSeconds(int days) {
    int seconds = days * 24 * 60 * 60;
        return seconds;
}

int main() {
	int days; // Variable to store the number of days

    cout << "Enter the number of days:"; // Prompt the user to enter the number of days
    cin >> days; // Read number of days entered by the user

    int seconds = calculateSeconds(days); // Call the calculateSeconds function to get the equivalent number of seconds
    cout << "The number of seconds in " << days <<  " days is: " << seconds << endl;

	return 0;
}
