
#include <iostream>

using namespace std;



int main() {
    double x = 0; // Variable to store the value of X
    double y = 20; // Variable to store the value of Y
    
    while (y >= 6){ // Loop that continues until Y is less than 6
        y = y - 4;
        x = (2/y) + x;
    }
    cout << "Value of X : " << x << endl;
    
    
	return 0;
}
