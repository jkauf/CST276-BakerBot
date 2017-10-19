// Assignment #1
// Class: CST 276
// Professor: Mitch Besser
// Author: Julian Kaufman
// Date Due: 2017-10-09

#pragma once

#include "BakerBot.h"

class Seattle : public BakerBot<Seattle>
{
public:
	void doAddDry() { cout << "Seattle:: Adding Dry Ingredients" << endl; }
	void doAddWet() { cout << "Seattle:: Adding Dry Ingredients" << endl; }
	void doMoveToConveyor() { cout << "Seattle:: Moving to Conveyor" << endl; }
};