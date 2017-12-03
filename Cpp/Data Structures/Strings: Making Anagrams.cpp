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

int number_needed(string a, string b)
{
    int n=0;
    map<char, size_t > mapa , mapb;
    for (const auto element : a)
    {
        if (mapa.count(element)>0)
            mapa[element]++;
        else
            mapa[element]=1;
    }
     for (const auto element : b)
    {
        if (mapb.count(element)>0)
            mapb[element]++;
        else
            mapb[element]=1;
    }

    
    for (const auto iter : mapa)
    {
       auto b_count = mapb.count(iter.first) ? mapb[iter.first] : 0;
       n+=abs(static_cast<long>(b_count-iter.second));
    }
    for(const auto iter : mapb)
    {
        if(mapa.count(iter.first) == 0) n += iter.second;
    }
    return n; 
}

int main(){
    string a;
    cin >> a;
    string b;
    cin >> b;
    cout << number_needed(a, b) << endl;
    return 0;
}
