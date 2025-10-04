#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int P[N]={};
    int spaceRec[N]={};
    int spaceAnk=0;
    int valueRec[N]={};


    for(int i=0;i<N;i++){
        int num;
        cin >> num;

        if(num != -1 && valueRec[num] != 0) {
            cout << "No" << endl;
            return 0;
        } else if(num != -1){
            valueRec[num] = 1;
            spaceRec[spaceAnk] = i;
            spaceAnk++;
            P[i] = num;
        } 
    }

    for(int i=0;i<spaceAnk;i++){
        int space = spaceRec[i];
        int value=-1, valueAnk=0;
        while(value!=0){
            value = valueRec[valueAnk];
            valueAnk++;
            if(value==N) break;
        }
        P[space] = valueAnk-1;
    }

    cout << "Yes" << endl;
    for(int i=0;i<N;i++){
        cout << P[i] << " ";
    }
    cout << endl;
}
