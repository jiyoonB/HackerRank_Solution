#include <bits/stdc++.h>

using namespace std;



int main()
{
    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int max = 0, sum = 0;

    for(int k = 0 ; k < 3 ; k++){
        for(int i = 0 ; i < 3 ; i++){
            for(int j = 0 ; j < 3 ; j++){
                if (j == 1){
                    sum += arr[i+k][j+k];
                    break;    
                }
                sum += arr[i+k][j+k];
            }
            if(max < sum){
                    max = sum;
                    sum = 0;
                }
        }
    }
    

    cout << max;

    return 0;
}
