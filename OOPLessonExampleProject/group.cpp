#include "group.h"

Group::Group() {
	size = 0;
	name = "no name";
}

Group::Group(string nm, Student* ls, int sz) {
	name = nm;
	if (sz <= DEFAULT_SIZE) {

	}
}

Group::~Group() {
	delete[] list;
}

string Group::get_name() {
	return name;
}

void Group::set_name(string nm) {
	name = nm;
}

bool Group::add(Student student) {
	if (size < DEFAULT_SIZE) {
		list[size] = student;
		size++;
		return true;
	} 

	return false;
}

void Group::remove(Student student) {}

void Group::remove(int index) {
	if (index >= 0 && index < size) {
		for (int i = index; i < size; i++)
		{
			list[index] = list[index + 1];
		}
		size--;
	}
}

Student Group::get(int index) {
	if (index >= 0 && index < size) {
		return list[index];
	}

	return NULL;
}

int Group::get_size() {
	return size;
}

string Group::convert_to_string() {
	string msg = "Student list of group " + name + ":/n";
	for (int i = 0; i < size; i++) {
		msg += "/n"
	}
	return msg
}