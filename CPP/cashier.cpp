#include "cashier.h"
#include "dispenser.h"
#include <iostream>
using namespace std;

int Cashier::checkSum(string item, int cash){
	if ( items[item] <= cash ) {
		cout << "Here's your " << item << endl;
		if (cash != items[item]) {
			cash = cash - items[item];
			cout << "Here's your change: " << cash << "cents" << endl;
		}
		return 1;
	}else {
		cout << "Wrong amount!" << endl;	
		return 0;
	}	
}