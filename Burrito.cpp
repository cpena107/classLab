//************TO DO ***************
//write your names here



#include "Burrito.h"

Burrito::Burrito(string m, bool c)
{
	// Initializing instance variables using constructor parameters 
	meatType = m;
	hasCheese = c;
}

Burrito::Burrito()
{
	// Initializing instance variables without using constructor parameters
	this->meatType = "Nada";
	this->hasCheese = false;
}

string Burrito::meat()
{
	return meatType;
}

//************TO DO ***************
// *********Implement other methods
