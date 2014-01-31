#include <iostream>
#include <sstream>
#include <string>

#include "dispenser.h"
#include "cashier.h"

using namespace std;

int main (int argc, char **argv) {
	bool again = true;
	while (again) {
		Vender v;
		Cashier c;
		cout << "Here are you choices" << endl << endl;
		/*
		Todo
		print out 3 candy bars and their prices, with 2 bags and chips
		and 2 types of gum
		*/
		v.printOut();
		cout << endl;

		string usrinput, usrItem;
		int amount;
		while (1) {
			cout << "What item would you like? (Case sensitive)" << endl;
			getline(cin, usrItem);
			if (v.selectItem(usrItem) == 0){
				cout << "Please check your spelling try again." << endl << endl;
			} else {
				break;
			}
		}
		//usrItem = toupper(usrItem[0]);
		//cout << "User Item: " << usrItem << endl;
		int price = v.selectItem(usrItem);
		cout << "Price: " << price << "cents" << endl;

		
		while (1){
			int testcash;
			cout << "Please insert cents" << endl;
			//amount = getline(stdin);
			getline(cin, usrinput);
			stringstream ss(usrinput);
			ss >> amount;
			testcash = c.checkSum(usrItem, amount);
			if (testcash == 1) {
				break;
			}
		}
		string ans;
		cout << "Would you like to buy someting else? (y/n)" << endl;
		getline(cin,ans);
		if (ans == "y"){
			again = true;
			usrItem.clear();
		} else {
			again = false;
		}
	}
	/*
	Check the amount make sure it matches up use a method to the despensure 
	class, have it print out a message to the user
	*/
	
	cout << endl << "Thank you for shopping" << endl;

	return 1;
}
