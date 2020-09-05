#include<iostream>
using namespace std;

int main () {

    int N,limit = 1,ans=1;

    cin >> N;

    if(N==1) return 1;

    for(int level=1; level <= N-2 ; level += 2)
    {   
        for(int max = limit+level+1; max <= limit+( 4*level+4 ); max += level+1)
        {
            ans += max;
            if( max == limit+(4*level+4))
                {limit = max; break;}
        }
    }

    cout << ans;
}
