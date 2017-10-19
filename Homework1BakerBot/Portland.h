// Assignment #1
// Class: CST 276
// Professor: Mitch Besser
// Author: Julian Kaufman
// Date Due: 2017-10-09

#pragma once

#include "BakerBot.h"

class Portland : public BakerBot<Portland>
{
public:
	void doAddDry() { cout << "Portland:: Adding Dry Ingredients" << endl; }
	void doAddWet() { cout << "Portland:: Adding Dry Ingredients" << endl; }
	void doMoveToConveyor() { cout << "Portland:: Moving to Conveyor" << endl; }
};