#include<bits/stdc++.h>
using namespace std;
void print(int n){
    // for rows
	for(int i = 1; i <= n; i++){
        // for columns
		for(int j = 0; j < n-i+1; j++){
			cout << "* ";
		}
		cout << endl;
	}
}

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        print(n);
    }
}