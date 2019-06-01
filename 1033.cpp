#include <iostream>  
#include <string> 
using namespace std;   
int main(){                                
	string bad,s; 
	getline(cin,bad); 
	cin>>s;
	int bigflag=0;
	for(int i=0;i<bad.length();++i){
		if(bad[i]=='+'){
			bigflag = 1;
			break;
		}
	}
	int kong=0;
	for(int i=0;i<s.length();++i){
		int flag = 0;
		for(int j=0;j<bad.length();++j){
			if(s[i]==bad[j]){
				flag = 1;
			}else if(bad[j]>='A' && bad[j]<='Z'){
				if(s[i]==(bad[j]+32)){  
					flag = 1;
				}
			} 
		}
		if(bigflag!=0){
			if(s[i]>='A' && s[i]<='Z'){
				flag = 1;
			}
		}
		if(flag==0){ 
			cout<<s[i];
			kong = 1;
		}
	}
	if(kong==0){
		cout<<endl; 
	}	 
	return 0;
}

