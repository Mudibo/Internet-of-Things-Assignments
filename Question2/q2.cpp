
#include <iostream>
#include <cmath>
using namespace std;

#ifndef M_PI
#define M_PI 3.142
#endif

int calculateVolume(double radius) {
    double volume = (4.0/3.0) * M_PI * pow(radius, 3);
    return volume;
}

int main() {
    double radius; //Variable to store the radius of sphere

    cout << "Enter the radius of the sphere : "; // Prompt the user to enter the radius of the sphere
    cin >> radius; // Read the radius entered by the user

    double volume = calculateVolume(radius); //Call the calculateVolume function to get the volumen of the sphere
    cout << "The volume of the sphere with radius " << radius << " is : " << volume << " cm3 " << endl;
	
	return 0;
}
