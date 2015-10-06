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

int buyIceCream(int budget, IceCream ic[], int n) {
    //Implement buyIceCream here
	int x, y;
 
    // We need n+1 rows as the table is consturcted in bottom up manner using 
    // the base case 0 value case (n = 0)
    int table[n+1][budget];
    
    // Fill the enteries for 0 value case (n = 0)
    for (int i = 0; i<budget; i++)
        table[0][i] = 1;
 
    // Fill rest of the table enteries in bottom up manner  
    for (int i = 1; i < n+1; i++) {
        for (int j = 0; j < budget; j++) {
            // Count of solutions including S[j]
            x = (i-ic[j] >= 0)? table[i - ic[j]][j]: 0;
 
            // Count of solutions excluding S[j]
            y = (j >= 1)? table[i][j-1]: 0;
 
            // total count
            table[i][j] = x + y;
        }
    }
    return table[n][m-1];
}

int main(int argc, char const *argv[]) {
	cout << "hello!\n";
	IceCream ic[80];
	for (int i = 0; i < 80; i++){
		ic[i].price = i;
		ic[i].value = (i - 1)*5 + 3;
	}
	cout << "The maximum number of ice creams Ian can buy is:" << buyIceCream(2000, ic, 80) << " \n";
	return 0;
}

////    DO NOT EDIT BELOW   ////

// Ian will paste test cases here