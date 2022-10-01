#pragma once
#include "SnackSlot.h"
#include <string>
#include <iostream>
using namespace std;

class VendingMachine
{
public:
    VendingMachine(int AllSlots);
    VendingMachine() = default;
    ~VendingMachine() = default;

    int getAllSlots() const;
    void setAllSlots(int AllSlots);
    int SlotCount = 0;
    int getEmptySlotsCount();
    void addSlot(SnackSlot* snackslot);


private:    
    int _AllSlots;        
};