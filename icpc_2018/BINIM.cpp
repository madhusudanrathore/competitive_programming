#include<iostream>
using namespace std;

int main(){
	unsigned short int t, n, i, dee_count, dum_count;
	string turn, stack_str;

	cin >> t;

	while(t--){
		cin >> n >> turn;

		dee_count=0;
		dum_count=0;
		
		for( i=0; i<n; ++i ){
			cin >> stack_str;

			for( short int j=0; j<stack_str.length(); ++j){
				(stack_str[0]=='0')? ++dee_count: ++dum_count;
			}
		}

		if( dee_count==dum_count ){ // same count
			cout << (turn=="Dum" ? "Dee\n": "Dum\n");
		}else{ // higher count wins
			cout << (dee_count>dum_count ? "Dee\n": "Dum\n");
		}
	}
	return 0;
}