#include <iostream>
#include "Circle.h"
#include "Airplane.h"

int main()
{
	//Circle c1(5);
	//Circle c2(5);
	//Circle c3(7);

	//if (c1 == c2) cout << "equal\n";
	//else  cout << "not equal\n";

	//if (c1 > c2) cout << "c1 more than c2\n";
	//else cout << "c2 more than c1 or equal\n";

	//c1 += 1;
	//c1.display();
	//
	//Circle a = c1 -c2;
	//a.display();

	Airplane a{ (char*)"F-16",2,2 },
		b{ (char*)"Boeing",210,132 };
	if (a == b) {
		cout << "equal\n";
	}
	else cout << "not equal\n";
	
	--a;
	++b;
	b.display();
	a.display();
	
	if (a > b) {
		cout << "a more than b or equal\n";
	}
	if (a < b) {
		cout << "a more than b or equal\n \n";
	}
}
