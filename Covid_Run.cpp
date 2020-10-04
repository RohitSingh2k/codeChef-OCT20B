#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin >> T;
	while(T--)
	{
		int N,K,X,Y,f=0;
		cin >> N >> K >> X >> Y;
		for(int i=0;i<N;i++)
		{
			if(X == Y)
			{
				cout << "YES" << endl;
				f=1;
				break;
			} 
			else {
				X = ( X + K) % N;
			}
		}
		if(f==0)
		{
			cout << "NO" << endl;
		}
	}
	return 0;
}
