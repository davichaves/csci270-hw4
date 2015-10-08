////    DO NOT EDIT BELOW   ////
#include <iostream>
#include <time.h>
#include <string>

using namespace std;

struct IceCream{
	int value;
	int price;
};

int buyIceCream(int budget, IceCream ic[], int n);

////    DO NOT EDIT ABOVE   ////

using namespace std;

const string STUDENT_NAME = "Davi Rodrigues Chaves";
const string STUDENT_EMAIL = "dchaves@usc.edu";

int getMax(int a, int b) {
	if (a > b) {
		return a;
	} else {
		return b;
	}
}

int buyIceCream(int budget, IceCream ic[], int n) {
	
	int matrix[n+1][budget+1];

	if (n == 0 || budget = 0) {
		return 0;
	}
 
   for (int i = 0; i <= n; i++) { //building the matrix
       for (int j = 0; j <= W; j++) {
           	if (i==0 || j==0) {
            	matrix[i][j] = 0; //first row and column are zero
            } else if (ic[i-1].price <= j) {
            	matrix[i][j] = getMax(val[i-1] + matrix[i-1][j-ic[i-1].price],  matrix[i-1][j]);
           	} else {
            	matrix[i][j] = matrix[i-1][j];
           	}
       }
   }
   // runtime of this is o(n*budget)
   return matrix[n][budget];
}

int main(int argc, char const *argv[]) {
	cout << "hello!\n";
	IceCream ic[80];
	for (int i = 0; i < 80; i++){
		ic[i].price = i;
		ic[i].value = (i - 1)*5 + 3;
	}
	cout << "The maximum number of ice creams Ian can buy is:"; 
	cout << buyIceCream(2000, ic, 80) << " \n";
	return 0;
}

////    DO NOT EDIT BELOW   ////

// Ian will paste test cases here