#include<iostream>
using namespace std;

bool compare( unsigned short int first[], unsigned short int second[] ){

	unsigned short int gec=0, gc=0;

	for( unsigned short int k=0; k<3; ++k ){
		if( first[k]>second[k] ){
			++gec;
			++gc;
		}else if( first[k]>=second[k] ){
			++gec;
		}
	}
	if((gec==3) && (gc>0) ){
		return true;
	}else{
		return false;
	}
}

int main(){
	unsigned short int t, arr1[3], arr2[3], arr3[3], i, j;

	cin >> t;

	while(t--){

		cin >> arr1[0] >> arr1[1] >> arr1[2];
		cin >> arr2[0] >> arr2[1] >> arr2[2];
		cin >> arr3[0] >> arr3[1] >> arr3[2];

		if( compare(arr1, arr2) && compare(arr1, arr3) && compare(arr2, arr3) ){
			cout << "yes\n";
		}else if( compare(arr1, arr2) && compare(arr1, arr3) && compare(arr3, arr2) ){
			cout << "yes\n";
		}else if( compare(arr2, arr1) && compare(arr1, arr3) && compare(arr2, arr3) ){
			cout << "yes\n";
		}else if( compare(arr2, arr3) && compare(arr2, arr1) && compare(arr3, arr1) ){
			cout << "yes\n";
		}else if( compare(arr3, arr1) && compare(arr3, arr2) && compare(arr1, arr2) ){
			cout << "yes\n";
		}else if( compare(arr3, arr2) && compare(arr3, arr1) && compare(arr2, arr1) ){
			cout << "yes\n";
		}else{
			cout << "no\n";
		}

	}
	return 0;
}