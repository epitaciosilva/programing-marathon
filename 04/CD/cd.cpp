#include <iostream>

class Node {
	public:
		int value;
		Node *next;
};


int main() {
	int n, m, num;
	Node *nums = new Node();
	Node *first = NULL;
	Node *last = NULL;
	Node *tmp = NULL;

	std::cin >> n >> m;
	while(n != 0 && m != 0) {
		for(;n > 0; n--) {
			std::cin >> num;

			tmp = new Node();
			tmp->value = num;
			tmp->next = NULL;

			Node *i = first;
			if(first != NULL) {
				while(i->next != NULL) {
					i = i->next;
				}
				i->next = tmp;
			} else {
				first = tmp;
			}
		}	 	
		for(;m > 0; m--) {
			std::cin >> num;
		}	

		std::cin >> n >> m;
	}

	Node *i = first;
	while(i) {
		std::cout << i->value << std::endl;
		i = i->next;
	}
	return 0; 
} 
