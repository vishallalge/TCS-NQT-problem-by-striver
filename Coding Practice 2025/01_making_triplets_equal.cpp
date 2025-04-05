#include <bits/stdc++.h>
using namespace std;

int min_steps_to_equal(int i, int j, int k){
    int arr[3] = {i, j, k};
    sort(arr, arr+3);
    
    if(arr[0] == arr[1] && arr[1] == arr[2]){
        return 0;
    }

    int steps = 0;
    while(true){
        arr[0] += 1;
        arr[1] += 1;
        arr[2] += -1;
        steps++;
        sort(arr, arr+3);
        
        if(arr[0] == arr[1] && arr[1] == arr[2]){
            return steps;
        }

        if((arr[0] == arr[1] && arr[1] + 1 == arr[2]) || 
            (arr[1] == arr[2] && arr[0] + 1 == arr[1])){
                return -1;
        }
    }
}

int main(){
    int n;
    cin>>n; // number of test cases
    while(n--){
        int i, j, k;
        cin>>i>>j>>k;
        cout<<min_steps_to_equal(i, j, k)<<endl;
    }
    return 0;
}






















// #include <bits/stdc++.h>
// using namespace std;

// int min_steps_to_equal(int i, int j, int k){
//     int arr[3] = {i, j, k};
//     sort(arr, arr + 3); // Sort the numbers

//     // If all numbers are already equal, return 0 steps.
//     if (arr[0] == arr[1] && arr[1] == arr[2]) {
//         return 0;
//     }

//     // If sum of all three numbers is not divisible by 3, it's impossible to make them equal.
//     if ((arr[0] + arr[1] + arr[2]) % 3 != 0) {
//         return -1;
//     }

//     // The maximum number needs to be reduced, and the others need to be incremented.
//     int diff1 = arr[2] - arr[1];
//     int diff2 = arr[2] - arr[0];

//     return (diff1 + diff2) / 2;
// }

// int main(){
//     int n;
//     cin >> n; // Number of test cases
    
//     while (n--) {
//         int i, j, k;
//         cin >> i >> j >> k;
//         cout << min_steps_to_equal(i, j, k) << endl;
//     }
    
//     return 0;
// }
