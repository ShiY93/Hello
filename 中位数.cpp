#include<iostream>
using namespace std;
int main(){
	int i[1500], n, j, q, temp;
	while (1){
		cin >> n;
		if (n == 0) break;
		for (j = 0; j < n; j++){
			cin >> i[j];
		}
		for (j = 0; j < n - 1; j++){
			for (q = j + 1; q < n; q++){
				if (i[j] < i[q]){
					temp = i[q];
					i[q] = i[j];
					i[j] = temp;
				}
			}
		}
		if (n % 2 == 0){
			temp = (i[n / 2] + i[n / 2 - 1]) / 2;
		}
		else{
			temp = i[n / 2];
		}
		cout << temp << endl;
	}
}
