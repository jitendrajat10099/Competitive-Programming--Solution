//https://www.hackerrank.com/challenges/pangrams/problem

#include <bits/stdc++.h>

using namespace std;

// Complete the pangrams function below.
string pangrams(string str) {

vector<bool> check(26, false);
    int index,len = str.length();
    for (int i = 0; i < len; i++){
        if (str[i] >= 'A' && str[i] <= 'Z')index = str[i] - 'A';
        else if(str[i] >= 'a' && str[i] <= 'z')index = str[i] - 'a';
        check[index] = true;
    }
    for (int i = 0; i <= 25; i++)
        if (!check[i])return ("not pangram");
    return ("pangram");
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
