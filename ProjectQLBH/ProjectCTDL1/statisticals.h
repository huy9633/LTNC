#ifndef __STATISTICALS__
#define __STATISTICALS__

#include<iostream>
#include<string>
#include<vector>
#include"goods.h"

using namespace std;

struct statisticals { 
	string seri;
	string name;
	int amountIn;
	int amountOut;
	
	friend istream& operator >> (istream& is, statisticals& statisticals) { 
		is >> statisticals.seri; is.ignore();
		getline(is, statisticals.name);	is.clear();
		is >> statisticals.amountIn;					is.ignore();
		is >> statisticals.amountOut;					is.ignore(); 
		return is;
	}
	friend ostream& operator << (ostream& os, statisticals statisticals) { 
		os << statisticals.seri << endl;
		os << statisticals.name << endl;
		os << statisticals.amountIn << endl;
		os << statisticals.amountOut << endl;
		 
		return os;
	}
	
};

#endif
