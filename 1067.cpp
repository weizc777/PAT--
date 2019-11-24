#include<iostream>
using namespace std;
int main(){   
	int n; string c;
	cin>>c>>n;
	getchar();
 
	int num = 0; 
	while(1){ 
		string t;
		getline(cin,t);  // 用 getline , 用cin>>t;有两个通过不了
		
		 
		++num;
		if(t == "#"){    // 注意用双引号 “ ”
			break;
		}else if(num>n){
			cout<<"Account locked"<<endl;
			break;
		}else if(t==c){
			cout<<"Welcome in"<<endl;
			break;
		}else{
			cout<<"Wrong password: "<<t<<endl;
			if(num==n){      // 后面没有了也有锁住
				cout<<"Account locked"<<endl;
				break;
			}
		}
	}
	 
	return 0;
}
