
#include <iostream>

using namespace std;

double calculateArrayAverage(double arr[], int size){
    double sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }
    return sum / size;
}


int main() {
    
    double arr[5]; // Array to store 5 values entered by the user

    

    for(int i = 0; i < 5; i++){ // Loop to read 5 values from the user and store them in the array
        cout << "Enter value " << i + 1 << " : "; // Prompt the user to enter a value
        cin >> arr[i];
    }

    cout << " The entered values are : "; // Print the entered values
    
    for(int i = 0; i < 5; i++){ // Loop to print the 5 values stored in the array
        cout << arr[i] << " ";
    }
    cout << endl;

    double ArrayAverage = calculateArrayAverage(arr, 5); // Call the calculateArrayAverage function to get the average of the array elements
    cout << "The average of the entered values is : " << ArrayAverage << endl;


	return 0;
}
