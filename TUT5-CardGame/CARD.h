#pragma once

#include <iostream>
#include <string>

using namespace std;
class CARD
{
	public:
		int num;
		string col = "";
		CARD();
		~CARD();
		string colour();
		int number();
		void print();
	};
	
