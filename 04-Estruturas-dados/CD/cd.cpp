#include <iostream>

class Node {
	public:
		int value;
		Node *next;
};


int main() {
	int n, m, num, cont = 0;
	Node *numsN = NULL;
	Node *numsM = NULL;
	Node *tmp = NULL;

	std::cin >> n >> m;
	while(n != 0 && m != 0) {
		for(;n > 0; n--) {
			std::cin >> num;

			tmp = new Node();
			tmp->value = num;
			tmp->next = NULL;

			if(numsN != NULL) {
				tmp->next = numsN;
			}

			numsN = tmp;
		}	

		for(;m > 0; m--) {
			std::cin >> num;

			tmp = new Node();
			tmp->value = num;
			tmp->next = NULL;

			if(numsM != NULL) {
				tmp->next = numsM;
			}

			numsM = tmp;
		}	

		Node *i = numsN;
		Node *j = numsM;
		while(true) {
			while(i != NULL && i->value > j->value) {
				tmp = i;
				i = i->next;
				delete tmp;
				tmp = NULL;
			}
			while(j != NULL && j->value > i->value) {
				tmp = j;
				j = j->next;
				delete tmp;
				tmp = NULL;
			}
			if(i == NULL || j == NULL) {
				break;
			} else if(i->value == j->value) {
				cont++;
				
				tmp = j;
				j = j->next;
				delete tmp;

				tmp = i;
				i = i->next;
				delete tmp;
			}
		}	
		std::cout << cont << std::endl;
		cont = 0;
		std::cin >> n >> m;
	}

	return 0; 
} 
