#include "VendingMachine.h"


VendingMachine::VendingMachine(int AllSlots)
{
	_AllSlots = AllSlots;
}

int VendingMachine::getAllSlots() const
{
	return _AllSlots;
}

void VendingMachine::setAllSlots(int AllSlots)
{
	_AllSlots = AllSlots;
}

int VendingMachine::getEmptySlotsCount()
{
	if (SlotCount < _AllSlots)
	{
		cout << "����� ��������� ������: ";
		return _AllSlots - SlotCount;
	}
	else
	{
		cout << "��� ��������� ������." << endl;
	}
}

void VendingMachine::addSlot(SnackSlot* snackslot)
{
	if (SlotCount < _AllSlots)
	{
		SlotCount++;
	}
	else
	{
		cout << "������� ��������." << endl;
	}
}
