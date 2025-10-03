#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    long long counter[5] = {};
    for(int i=0; i<N; i++){
        string s;
        cin >> s;
        char c = s[0];
        if(c == 'M') counter[0]++;
        else if(c == 'A') counter[1]++;
        else if(c == 'R') counter[2]++;
        else if(c == 'C') counter[3]++;
        else if(c == 'H') counter[4]++;
    }

    long long answer = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            for (int k = j + 1; k < 5; k++) {
                answer += counter[i] * counter[j] * counter[k];
            }
        }
    }

    cout << answer << endl;
}
