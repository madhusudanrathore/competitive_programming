#include<iostream>
using namespace std;

int main(){
	unsigned short int t, i, str_len, left, right,prev_i,count,unsafe;
	string str;

	cin >> t;

	while(t--){
		cin >> str;

		str_len=str.length();
		count=0;
		unsafe=0;

		for(i=0; i<str_len;++i){
			if(str[i]!='.'){
				count+=1;
				if(count == 1){

					right=i+(unsigned short int)str[i];
					prev_i=i;
				}
				else
				{
				right=prev_i+(unsigned short int)str[prev_i];
				left=i-(unsigned short int)str[i];
				prev_i=i;
				

				if(left<0){ left=0; }
				if(right>=str_len){ right=str_len-1; }
				
				if(left<=right){
					unsafe+=1;
					break;
						}
				}
			}
			// right=i+(unsigned short int)str[i];

		}

		if(unsafe == 0){
			printf("safe");
		}
		else{
			printf("unsafe");
		}
	}
	return 0;
}