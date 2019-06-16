/*
 *思路：
 *遍历字符串，统计出PATest各字母的个数
 *按照PATest顺序输出字符,输出某字符后,相应字符个数-1
 *如果是0则不输出,知道PATest各字母个数都为0 结束程序 
 */
 
 
#include<iostream>
#include<string>
using namespace std;
 
int main(){
	string s;
	int P=0,A=0,T=0,e=0,s1=0,t=0; 
	cin>>s;
	for(int i=0 ;i<s.size() ;i++){
		if(s[i]=='P'){
			P++;
		}
		if(s[i]=='A'){
			A++;
		}
		if(s[i]=='T'){
			T++;
		}
		if(s[i]=='e'){
			e++;
		}
		if(s[i]=='s'){
			s1++;
		}
		if(s[i]=='t'){
			t++;
		}
	}
	
	while(1){
		if(P!=0){
			cout<<"P";
			P--;
		}
		if(A!=0){
			cout<<"A";
			A--;
		}
		if(T!=0){
			cout<<"T";
			T--;
		}
		if(e!=0){
			cout<<"e";
			e--;
		}
		if(s1!=0){
			cout<<"s";
			s1--;
		}
		if(t!=0){
			cout<<"t";
			t--;
		}
		if(P==0&&A==0&&T==0&&e==0&&s1==0&&t==0){
			break;
		}
	}
	cout<<endl;
	
	
	
	return 0;
} 

