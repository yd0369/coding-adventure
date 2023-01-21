#include<iostream>
#include<climits>
using namespace std;
int main() {
    int n; cin >> n;
    int min = INT_MAX; 
    int min_loc(0);
    for(int i=0; i<n; i++) {
        int tmp; cin >> tmp;
        if(tmp < min) {
            min = tmp;
            min_loc = i;
        }
        cout << i+1 << " " << tmp << " " << min << " " << min_loc << "\n";
    } 
    cout << min_loc+1;
}