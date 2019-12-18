#include <iostream>

using namespace std;

#include "tcomplejo.h"

int
main(void)
{
	TComplejo a;
	TComplejo b(a);
	TComplejo c;
	c = a;
		
	cout << "a == b --> true" << endl;
	if(a == b){
		cout << "true" << endl;
	} else {
		cout << "false" << endl;
	}
	

	return 0;
}

