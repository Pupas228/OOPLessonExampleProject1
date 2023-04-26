#include "student.h"


class Manager {
public:
	float calculate_avg_mark(Group group, int size) {
		float avg = 0;

		for (int i = 0; i < size; i++)
		{
			avg += list[i].get_avg_mark();
		}
		return avg / size;
	}

};