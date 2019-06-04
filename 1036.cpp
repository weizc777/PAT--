#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double N;
    char c;
    cin>>N>>c;
    int hangshu=floor(N/2+0.5);//输出的行数实际上是列数的50%（四舍五入取整）
    for(int i=0;i<N;i++)  ////输出第一行字母
    cout<<c;
    cout<<endl;
    for(int i=0;i<hangshu-2;i++)////输出第二到倒数第二行
    {
        cout<<c;
        for(int j=0;j<N-2;j++)
        cout<<" ";//每行N-2个空格
        cout<<c<<endl;//每行换行
    }
    for(int i=0;i<N;i++)      //输出最后一行
    cout<<c;
    return 0;
} 

