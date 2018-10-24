#include<iostream>
using namespace std;

int main(){
	int t, i, j, str_len, range;
	bool unsafe_break;
	string str;

	cin >> t;

	while(t--){
		cin >> str;

		str_len=str.length();
		unsafe_break=false;
		
		for(i=0; i<str_len; ++i){

			if( str[i]!='.' && str[i]!='x' ){
				range=(int)str[i]-48;

				for(j=i+1; j<=i+range && j<str_len; ++j ){
					if( str[j]=='.' ){
						str[j]='x';
					}else{
						unsafe_break=true;
						break;
					}
				}

				for(j=i-1; j>=i-range && j>-1; --j ){
					if( str[j]=='.' ){
						str[j]='x';
					}else{
						unsafe_break=true;
						break;
					}
				}
				
				if(unsafe_break){
					printf("unsafe\n");
					break;
				}
			}
		}
		if(unsafe_break==false){
			printf("safe\n");
		}

	}
	return 0;
}