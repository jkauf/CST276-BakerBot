// Assignment #1
// Class: CST 276
// Professor: Mitch Besser
// Author: Julian Kaufman
// Date Due: 2017-10-09

#pragma once

#include "BakerBot.h"

class LA : public BakerBot<LA>
{
public:
	void doAddDry() { cout << "LA:: Adding Dry Ingredients" << endl; }
	void doAddWet() { cout << "LA:: Adding Dry Ingredients" << endl; }
	void doMoveToConveyor() { cout << "LA:: Moving to Conveyor" << endl; }
};