#include<bits/stdc++.h>
using namespace std;
void print7(int n){
    // for rows
	for(int i = 0; i < n; i++){
        // for columns
        // space
		for(int j = 0; j < n-i-1; j++){
			cout << " ";
		}
        //asterisk
        for(int j = 0; j < 2*i+1; j++){
            cout << "*";
        }
        //space
        for(int j = 0; j < n-i-1; j++){
			cout << " ";
		}
		cout << endl;
	}
}
void print8(int n){
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
        print7(n);
        print8(n);
    }
}
