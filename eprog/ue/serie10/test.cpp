#include <cstdlib>
#include <iostream>
#include <cmath>


using std::cin;
using std::cout;
using std::endl;


#define ROW 10;
#define COL 10;


int main() {
	int n = 9;
	double A[n];
	for (int i = 0; i<n; i++ ) {
		cin>>A[i];
	}
	cout<<"\n";
	// for (int i = 0; i<n; i++){
	// 	cout<<A[i]<<endl;
	// }
	int sum, max_sum = 0;

	for (int i=0;i<n;i++) {
		for (int j=0;j<n;i++) {
			if (i % j == 0) {
				cout<<A[i]<<endl;
				sum += A[i];
			}
		}
		if (sum > max_sum) {
			max_sum = sum;
		}
	}
	cout<<max_sum<<endl;

	// for (int i=0;i<n;i++) {
	// 	for (int j=0;j<n;j++) {
	// 		if (i % 3 == 0) {
	// 			cout<<A[i]<<endl;
	// 		}
	// 	}
	// }
	return 0;
}
