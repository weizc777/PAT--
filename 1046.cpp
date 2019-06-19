#include<iostream>
using namespace std;
class HQ
{
	public:
		int JH;
		int JS;
		int YH;
		int YS;
	
};
int main()
{   
	int N; int j=0,y=0;
	cin>>N;
	HQ Lnum[N];
	for(int i=0;i<N;i++)
	{
		cin>>Lnum[i].JH>>Lnum[i].JS>>Lnum[i].YH>>Lnum[i].YS;
	}
	for(int i=0;i<N;i++)
	{
		if(Lnum[i].JH+Lnum[i].YH==Lnum[i].JS&&Lnum[i].JH+Lnum[i].YH!=Lnum[i].YS) y++;
		else if(Lnum[i].JH+Lnum[i].YH==Lnum[i].YS&&Lnum[i].JH+Lnum[i].YH!=Lnum[i].JS) j++;
	}
	cout<<j<<" "<<y<<endl;
	
	
}
