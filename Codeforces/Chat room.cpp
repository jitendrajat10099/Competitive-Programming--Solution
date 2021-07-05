#include <bits/stdc++.h> 
#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
 
using namespace std;
 
int main () {
 
	string s, g;
 
	cin >> s;
 
	int temp = 0;
 
	for (int i = 0; i < s.length(); ++i)
	{
		if (temp == 0 && s[i] == 'h') {
			temp = 1;
		}
		else if (temp == 1 && s[i] == 'e') {
			temp = 2;
		}
		else if (temp == 2 && s[i] == 'l') {
			temp = 3;
		}
		else if (temp == 3 && s[i] == 'l') {
			temp = 4;
		}
		else if (temp == 4 && s[i] == 'o') {
			temp = 5;
			break;
		}
		else {
 
		}
	}
 
	if (temp == 5) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
	
	return 0;
}
