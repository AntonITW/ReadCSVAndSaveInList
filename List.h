#include <fstream>
#include <iostream>
#include <sstream>

template<class T>
class List
{
	struct Node {
		T data;
		Node* next = nullptr;

		Node(T arg)
		{
			data = arg;
		}
	};
public:
	Node* tail;
	Node* head;
	List() { };
	void addtail(const T& data) {

		const auto newNode = new Node(data);

		if (head == nullptr)
			head = newNode;
		else {
			auto p = head;

			while (p->next != nullptr)
				p = p->next;

			p->next = newNode;
		}
	}
};
