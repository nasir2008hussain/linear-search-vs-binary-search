#include<iostream>
using namespace std;
bool l_search(int x,int a[],int n)
{
    int steps=0;
    for(int i=0;i<n;i++)
    {
        steps++;
        if(x==a[i]){
         cout<<"Steps : "<<steps<<endl;
         return true;}
    }
    cout<<"Steps : "<<steps<<endl;
    return false;
}
bool b_search(int x,int a[],int n)
{
    int steps=0;
    int start=0;
    int end=n-1;
    int mid;
    while(start<=end)
    {
        mid=(start+end)/2;
        steps++;
        if(x==a[mid]){
         cout<<"Steps : "<<steps<<endl;
         return true;}
        else if(x<a[mid])
         end=mid-1;
        else
         start=mid+1; 
    } 
    cout<<"Steps : "<<steps<<endl;                                                                                                                                                                                                                                                                                            
    return false;
}
int main()
{
    int n=1000;
    int *a;
    a= new int [n];
    for(int i=0;i<n;i++)
    {
        a[i]=n*2;
    }
    cout<<"Linear"<<endl;
    l_search(1001,a,1000);
    cout<<"Binary"<<endl;
    b_search(1001,a,1000);

    cout<<"Linears"<<endl;
    l_search(500,a,1000);
    cout<<"Binary"<<endl;
    b_search(500,a,1000);
    delete[]a;
    return 0;   
}