#pragma once
#include "Snack.h"
#include <string>
using namespace std;

class SnackSlot
{
public:	
	SnackSlot(int NumSlots);
	SnackSlot() = default;
	~SnackSlot() = default;

	int getNumSlots() const;
	void setNumSlots(int NumSlots);
	int SnackCount = 0;
	void AddSnack(Snack* snack);
	
	
	
private:
	int _NumSlots;
};


