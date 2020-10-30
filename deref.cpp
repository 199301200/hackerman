// deref.cpp by Bill Weinman <http://bw.org/>
#include <iostream>
using namespace std;

struct S {
	int v;
	int g;
	int c;
};

int main( int argc, char ** argv ) {
	struct S s = { 1, 2, 3 };
	printf("s has members a: %d, b: %d, c: %d\n", s.v, s.g, s.c);
	return 0;
}
