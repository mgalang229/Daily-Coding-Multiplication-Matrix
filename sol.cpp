#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a[100][100], b[100][100];
	int r, c, r2, c2, i = 0, j = 0;
	cin >> r >> c >> r2 >> c2;
	if(c == r2){
		for(i = 0; i < r; i++){
			for(j = 0; j < c; j++){
				cin >> a[i][j];
			}
		}
		for(i = 0; i < r2; i++){
			for(j = 0; j < c2; j++){
				cin >> b[i][j];
			}
		}
		int nr = 0;
		if(r > c2){
			nr = c2;
		} else{
			nr = c;
		} 
		int t = 0, s = 0;
		for(int k = 0; k < r; k++){
			for(i = 0; i < nr; i++){
				for(j = 0; j < r2; j++){
					t = a[k][j] * b[j][i];
					s += t;
				}
				cout << s << " ";
				t = s = 0;
			}
			cout << "\n";
		}
	} else{
		cout << "Not Possible";
	}
	cout << "\n";
	return 0;
}
