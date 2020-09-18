#include <iostream>
using namespace std;

class Node {
    public:
        int num;
        Node *next;

        Node(){}
};
class LinkedList { 
    public:
        Node *start;
        Node *end;



};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long num, cont = 0;
    //long long b[1000000] = {};

    int n,m;
    while(true) {
        cin >> n >> m;
        if (n == 0 && m == 0) {
            break;
        }

        while(n--) {
            cin >> num;
        }
    
        while(m--) {
            cin >> num;
        }
        cout << cont << endl;
        cont = 0;
    }
    return 0;
}
