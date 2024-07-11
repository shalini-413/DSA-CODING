#include<bits/stdc++.h>
using namespace std;
void print(int n){
    // for rows
	for(int i = 0; i < n; i++){
        // for columns
        // space
		for(int j = 0; j < i; j++){
			cout << " ";
		}
        //asterisk
        for(int j = 0; j < 2*n-(2*i+1); j++){
            cout << "*";
        }
        //space equivalent to rows
        for(int j = 0; j < i; j++){
			cout << " ";
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
