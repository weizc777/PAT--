#include<iostream>
using namespace std;
int main()
{   int N;
    int num,score,max=0;
	int sum[200010]={0};//该测试点超时的原因 应该本题应以空间换时间，必须建立大的数组
	cin>>N;
	for(int i=1;i<=N;i++)
	{
		cin>>num>>score;
		sum[num]+=score;
		if(sum[num]>max)
		max=sum[num];
	}
	for(int i=1;i<=N;i++)
	{
		if(sum[i]==max)
		cout<<i<<" "<<sum[i]<<endl;
	}
	
}
