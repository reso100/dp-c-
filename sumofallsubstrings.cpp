//sumofdigit[i]  =  (i+1)*num[i] + 10*sumofdigit[i-1]
//sumofdigit[i]  =  (i+1)*num[i] + 10*sumofdigit[i-1]
#include<iostream>
//hackerrank problem
//link to the below problem is
//https://www.hackerrank.com/challenges/sam-and-substrings/problem
// sumofdigit[i]  =  (i+1)*num[i] + 10*sumofdigit[i-1]
#include<bits/stdc++.h>
#include<algorithm>
long long m=1000000007;
using namespace std;
int main(){
    string s;
    cin>>s;
    long long n=s.length();
    char ch=s[0];
    long long x1=int(ch)-48;
    vector<long long> sum;
    sum.push_back(x1);
    long long sumf=sum[0];
    for(long long i=1;i<n;i++){
        char x2=s[i];
        long long x3=int(x2)-48;
        long long bsd=(i+1)*x3 +10*sum[i-1];
        sumf=sumf%m;
        bsd=bsd%m;
        sum.push_back(bsd);
        sumf=sumf+sum[i];
        sumf=sumf%m;
    }
    sumf=sumf%m;
    cout<<sumf<<endl;
    
}