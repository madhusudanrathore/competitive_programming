/*
BITOBYT

In the magical land of Byteland, there are three kinds of citizens:

    a Bit - 2ms

after a Bit appears, it grows up and becomes a Nibble (i.e. it disappears and a Nibble appears)
a Nibble - 8ms
after a Nibble appears, it grows up and becomes a Byte
a Byte - 16ms

    after a Byte appears, it grows up, splits into two Bits and disappears

Chef wants to know the answer to the following question: what would the population of Byteland be immediately before the time Nms
if only 1 Bit appeared at time 0ms?


Input

    The first line of the input contains a single integer T

denoting the number of test cases. The description of T
test cases follows.
The first and only line of each test case contains a single integer N

    .

Output

For each test case, print a single line containing three space-separated integers — the number of Bits, Nibbles and Bytes.
Constraints

    1≤T≤104

1≤N≤1,600

Subtasks

Subtask #1 (25 points): 1≤N≤140

Subtask #2 (75 points): original constraints
Example Input

2
2
3

Example Output

1 0 0
0 1 0

Explanation

Immediately before the time 2ms
, there is only one Bit. At 2ms, this Bit grows up, so immediately before 3ms, there is only one Nibble in Byteland.

*/
#include<stdio.h>

int main(){
	unsigned short t, n, arr[3], time[3], i;
	
	scanf("%hu", &t);

	while(t--){
		scanf("%hu",&n);
		arr[0]=1, arr[1]=0, arr[2]=0;
		time[0]=0, time[1]=0, time[2]=0;

		for (i=1; i<n; ++i){
			// bits
			if( i%2==0 && arr[0]>0 ){
				--time[0];
				++time[1];
			}
			
			// nibbles
			if( i%8==0 && arr[1]>0 && i>10){
				--time[1];
				++time[2];
			}
			
			// bytes
			if( i%16==0 && arr[2]>1 && i>26){
				time[1]+=2;
				time[2]-=2;
			}

			arr[0]=time[0], arr[1]=time[1], arr[2]=time[2];
		}
		printf("%d %d %d\n", arr[0], arr[1], arr[2]);
	}
	return 0;
}