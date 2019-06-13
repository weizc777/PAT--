#include<iostream>
#include<string.h>
using namespace std;
class Student
{
	public:
		string sno;
		int snum;
		int knum;
};
int main()
{
	int N,M,a[1000];
	cin>>N;
	Student student[1000];
	for(int i=0;i<N;i++)
	{
		cin>>student[i].sno>>student[i].snum>>student[i].knum;
	}
	cin>>M;
	for(int i=0;i<M;i++)
	{
	cin>>a[i];
}
for(int i=0;i<M;i++){
	for(int j=0;j<N;j++){
		if(a[i]==student[j].snum){
	    cout<<student[j].sno<<" "<<student[j].knum<<endl;
		break;
		}
	}
	}
     
}

