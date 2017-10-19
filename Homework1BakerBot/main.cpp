// Assignment #1
// Class: CST 276
// Professor: Mitch Besser
// Author: Julian Kaufman
// Date Due: 2017-10-09

#include "BakerBot.h"
#include "Portland.h"
#include "Seattle.h"
#include "LA.h"


template<class DerivedT>
void makeCake(BakerBot<DerivedT>* basePtr)
{
	if (basePtr)
	{
		basePtr->bakeChocCake();
	}
	
}

int main()
{
	
	cout << "Baking in Portland" << endl;
	BakerBot<Portland>* porBot = new Portland();
	makeCake(porBot);
	cout << endl << endl;

	cout << "Baking in Seattle" << endl;
	BakerBot<Seattle>* seaBot = new Seattle();
	makeCake(seaBot);
	cout << endl << endl;

	cout << "Baking in LA" << endl;
	BakerBot<LA>* laBot = new LA();
	makeCake(laBot);
	cout << endl << endl;

	delete porBot;
	delete seaBot;
	delete laBot;

	return 0;
}

