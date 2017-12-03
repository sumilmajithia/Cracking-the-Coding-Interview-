#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

void array_left_rotation(vector<int>& a, int k) {
    /*while(k--)
    {
        int temp = a[0];
        a.erase(a.begin());
        a.push_back(temp);   
    }*/
    rotate(a.begin(),a.begin()+k,a.end());
}
int main(){
    int n;
    int k;
    cin >> n >> k;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
        cin >> a[a_i];
    }
    array_left_rotation(a,k);
    for(int i = 0; i < n;i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}

