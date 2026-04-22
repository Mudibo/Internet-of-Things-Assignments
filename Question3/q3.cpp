
#include <iostream>

using namespace std;

// Function to calculate the area of a square given the length of its side
double calculateArea(double length){
    double area = length * length;
    return area;
}

// Function to calculate the perimeter of a square given the length of its side
double calculatePerimeter(double length){
    double perimeter = 4 * length;
    return perimeter;
}

int main() {
    double length; // Variable to store the length of the side of the square
    cout << "Enter the length of the side of the square in cm : "; // Prompt the user to enter the length of the side of the square

    cin >> length; // Read the length of the side of the square entered by the user

    double area = calculateArea(length); // Call the calculateArea function to get the area of the square
    double perimeter = calculatePerimeter(length); // Call the calculatePerimeter function to get the perimeter of the square

    cout << "The area of the square with side length " << length << " is : " << area << " cm2 " << endl;
    cout << "The perimeter of the square with side length " << length << " is : " << perimeter << " cm " << endl;
	return 0;
}
