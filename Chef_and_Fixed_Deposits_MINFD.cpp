#include <iostream>
#include<algorithm>
typedef long long ll;
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t!=0)
	{	
		ll N,X;
		ll sum=0;
		cin>>N>>X;
		int dep[N];
		for(int i=0;i<N;i++)
		{
			cin>>dep[i];
			sum+=dep[i];
		}
    if(sum<X)
      cout<< -1<<endl;
    else
		{
			sort(dep, dep+N,greater<int>());
      sum = 0;
      for(int i = 0;i<N;i++){
        sum+=dep[i];
        if(sum>=X)
        {  cout<<i+1<<endl;
            break;
          }
      }
    }
		t--;
	}
}
