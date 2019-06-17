#include<cstdio>
#include<string>
#include<iostream>
#include<cmath>
using namespace std;
string num1[25] = {"tret","jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec","tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
string num2[13] = {"","tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
int main(){
  
 	 void tras1(string s);
  	void tras2(string s);
  
  	int n;
  	scanf("%d\n",&n);
  
  	string input;
  
  	while(n--){
  	  	getline(cin,input);
    
   	 	if(input[0]>='0'&&input[0]<='9'){
      		tras1(input);
    	}else{
      		tras2(input);
    	}
  	}
  	return 0;
} 
 
//数字转换火星文 
void tras1(string s){
  	int num=0;
  	int x = 0;
  	for(int i=s.size()-1 ;i>=0 ;i--){
  		num += (s[i]-48) * pow(10,x);
  		x++;
  	}
  	if(num<13){
    	cout<<num1[num]<<endl;
  	}
  	else if(num%13==0){
  	  	cout<<num2[num/13]<<endl;
  	}
  	else{
    	cout<<num2[num/13]<<" "<<num1[num%13]<<endl;
  	}
  
}
//火星文转换为数字 
void tras2(string s) {
    string a[13] = {"###", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
    string b[13] = {"###", "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
    int len = s.length();
    if (len == 3) {
        for (int j = 1; j <= 12; j++) {
 
			if(s == a[j]){
				cout << j << endl;
			}
			else if(s==b[j]){
                cout << 13 * j << endl;
            }
        }
    } else {
        int t1 = 0;
        int t2 = 0;
        string s1 = s.substr(0,3);
        string s2 = s.substr(4,3);
        for (int j = 1; j <= 12; j++) {
			if(s1==b[j]){
                t1 = j;
            }
 
			if(s2==a[j]){			
                t2 = j;
            }
        }
        cout << t1 * 13 + t2 << endl;
    }
}

