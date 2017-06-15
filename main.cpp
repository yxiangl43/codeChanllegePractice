#include <iostream>
#include <vector>
using namespace std;

int twinArrays(vector <int> ar1, vector <int> ar2){
    // Complete this function
       unsigned size = ar1.size();
    int a1Min = ar1[0], a2Min = ar2[0];
    for(int i = 1 ; i < size ; i++){
        if(a1Min > ar1[i]){
            a1Min = ar1[i];
        }

        if(a2Min > ar2[i]){
            a2Min = ar2[i];
        }
    }

    return a1Min+ a2Min;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar1(n);
    for(int ar1_i = 0; ar1_i < n; ar1_i++){
       cin >> ar1[ar1_i];
    }
    vector<int> ar2(n);
    for(int ar2_i = 0; ar2_i < n; ar2_i++){
       cin >> ar2[ar2_i];
    }
    int result = twinArrays(ar1, ar2);
    cout << result << endl;
    return 0;
}
