#include <iostream>   
#include <string>
using namespace std;   
 
int main(){    
	string s1,s2;
	cin>>s1>>s2;
	 
	int len1 = s1.length();
	int len2 = s2.length();
	int ki=0,flag;
	for(int i=0;i<len2;++i){
		flag = 0;
		for(int j=0;j<s1.length();++j){
			if(s2[ki]==s1[j]){
				flag = 1; 
				s1.erase(s1.begin()+j);
				s2.erase(s2.begin()+ki);
				break;
			}
		}
		if(flag==0){
			ki++; 
		} 
	}
 
	if(s2.length()==0){
		cout<<"Yes "<<(len1-len2)<<endl;
	}else{
		cout<<"No "<<(s2.length())<<endl;
	} 
 
	return 0;
}

