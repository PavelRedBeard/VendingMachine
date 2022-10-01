#include <string>
#include "SnackSlot.h"
#include<iostream>
using namespace std;



SnackSlot::SnackSlot(int NumSlots)
{
	_NumSlots = NumSlots;
}

int SnackSlot::getNumSlots() const
{
	return _NumSlots;
}

void SnackSlot::setNumSlots(int NumSlots)
{
	_NumSlots = NumSlots;
}

void SnackSlot::AddSnack(Snack* snack)
{
	if (SnackCount < _NumSlots)
	{
		SnackCount++;
	}
	else
	{
		cout << "Слот заполнен." << endl;
	}
}


