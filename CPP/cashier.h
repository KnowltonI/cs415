#ifndef CASHIER_H
#define CASHIER_H

#include <string>
#include <map>
#include "dispenser.h"

using namespace std;


class Cashier : Vender{
public:
	int checkSum(string item, int cash);
};

#endif