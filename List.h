#include <fstream>
#include <iostream>
#include <sstream>

template<class T>
class List
{
	struct node {
		T* current;
		node *next;
	};
public:
	node st;
	List() {
		st = NULL;
	}

	node last;
	void add(T obj) {
		if (st == NULL) {
			st = last;
			return;
		}

		last->next = this->st;
		last = this->st;

	}
};