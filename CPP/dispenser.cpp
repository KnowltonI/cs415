#include "dispenser.h"
#include <iostream>
using namespace std;

Vender::Vender(){
	items["Snickers"] = 50;
	items["Skittles"] = 50;
	items["Hicew"] = 25;
	items["Bongo"] = 75;
	items["BBQ Chips"] = 75;
	items["Habababa"] = 10;
	items["Tictak"] = 25;
}

Vender::~Vender(){}

int Vender::selectItem(string item){
	return items[item];	
}

void Vender::printOut() {
	for (iter = items.begin(); iter != items.end(); ++iter) {
		cout << iter->first << endl; 
	}
}
