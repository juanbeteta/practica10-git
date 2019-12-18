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
	
	TComplejo d(0,0);
	TComplejo e(1,0);
	TComplejo f;
	
	f = d + e;

	cout << "f = d + e  --> true" << endl;
	if((d.Re() + e.Re()) == f.Re() && (d.Im() + e.Im()) == f.Im())
		cout << "true" << endl;
	else
		cout << "false" << endl;

	f = d - e;
	cout << "f = d - e  --> true" << endl;
	if((d.Re() - e.Re()) == f.Re() && (d.Im() - e.Im()) == f.Im())
		cout << "true" << endl;
	else
		cout << "false" << endl;
	return 0;
}

