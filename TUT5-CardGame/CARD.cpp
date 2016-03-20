#include "CARD.h"


CARD::CARD()
{
	num=0;
	col="none";
}

CARD::~CARD()
{
}

string CARD::colour(){
	return col;
}

int CARD::number(){
	return num;
}

void CARD::print(){
	cout << "colour: " << col << endl;
	cout << "number: " << num << endl;
}