#include<bits/stdc++.h>
using namespace std;
void print(int n){
    // for rows
	for(int i = 1; i <= n; i++){
        // for columns
		for(int j = 1; j <= i; j++){
            // printing asterisk
			cout << j << " ";
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