#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int k, count=0;
	char ch;
	string s;
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin >> k >> s;
	sort(s.begin(),s.begin()+s.size());

	for(int i = 0; i < s.size(); i++){
	    if(i % k == 0){
	       ch = s[i]; 
	    }
	    if(s[i] == ch){
	        count++;
	    }
	}

	if(s.size() == count && count % k == 0){
	    for(int i = 0; i < k ;i++){
	        for(int l = 0; l < s.size(); l+=k){
	            cout << s[l];
	        }
	    }
	}else{
	    cout << "-1";
	}
	cout << endl;
	return 0;
}
