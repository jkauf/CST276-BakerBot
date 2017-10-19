// Assignment #1
// Class: CST 276
// Professor: Mitch Besser
// Author: Julian Kaufman
// Date Due: 2017-10-09

#pragma once

#include <iostream>

using namespace std;

template <class DerivedT>
class BakerBot
{
public:
	void addDry() { static_cast<DerivedT*>(this)->doAddDry(); }
	void addWet() { static_cast<DerivedT*>(this)->doAddWet(); }
	void moveToConveyor() { static_cast<DerivedT*>(this)->doMoveToConveyor(); }

	void mix() { cout << "Mixing" << endl; }
	void pourBatter() { cout << "Pouring Batter" << endl; }
	void bake() { cout << "Baking" << endl; }
	
	void bakeChocCake() {
		addDry();
		addWet();
		mix();
		pourBatter();
		moveToConveyor();
		bake();	
	}

private:
	void doAddDry() { cout << "Base:: Adding Dry Ingredients" << endl; }
	void doAddWet() { cout << "Base:: Adding Dry Ingredients" << endl; }
	void doMoveToConveyor() { cout << "Base:: Moving to Conveyor" << endl; }
};