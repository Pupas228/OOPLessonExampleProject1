#include "student.h"


int main() {
	Student s1("Alex", "XXX", 15, 10);
	Student s2("Max", "YYY", 14, 4);
	Group gr("P33022");
	gr.add(s1);
	gr.add(s2);
	cout << gr.convert_to_string() << endl;

	return 0;
}