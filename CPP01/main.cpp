#include "header1.h"
#include "header2.h"
#include <iostream>

using namespace header2;

int main() {
	header1::foo(); //	-> header1
	header1::bar(); //	-> header1
	foo();			//	-> header2
	bar();			//	-> header2
	return 0;
}