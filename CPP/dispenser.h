#ifndef DISPENSER_H
#define DISPENSER_H

#include <string>
#include <map>

using namespace std;

class Vender {
public:
	Vender();
	~Vender();
	int selectItem(string item);
	void printOut();
protected:
	map<string,int> items;
	map<string,int>::iterator iter;	
};

#endif
