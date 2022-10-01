#include "Snack.h"
#include "SnackSlot.h"
#include "VendingMachine.h"
#include <iostream>
#include <string>
using namespace std;

int main() 
{
	setlocale(LC_ALL, "");
	Snack* bounty = new Snack("Bounty");
	Snack* snickers = new Snack("Snickers");
	SnackSlot* slot = new SnackSlot(10);
	slot->AddSnack(bounty); 
	slot->AddSnack(snickers);
	VendingMachine* machine = new VendingMachine(10);
	machine->addSlot(slot);
	cout << machine->getEmptySlotsCount();
	delete machine;
	delete slot;
	delete snickers;
	delete bounty;
	
	return 0;
}