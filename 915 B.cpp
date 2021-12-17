#include <bits/stdc++.h>
using namespace std ;

#define  ll   long long
#define  pb  push_back
#define  mp  make_pair
#define  MAX  1000006

void fastIO (){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(20);
}

int a[MAX];
int b[MAX];
int c[MAX];

int main ()
{

    ///freopen("output.txt","w",stdout);

    fastIO();
    int n;
    int f1,f2,f3,f4;
    int m;
    int cnt=0;
    int p,q,r;
    int cntr=0;
    int v=0;
    int pos,range1,range2;
    int check=0;
    int x,y,z;
    string s,s1,s2;

    cin>>n>>pos>>range1>>range2;

    if (pos>=range1&&pos<=range2){
        if (range1>1&&range2<n){
            if (pos-range1<range2-pos){
            if (range1>1){
                f1=pos-range1+1;
                //cout<<"F1 "<<f1<<endl;
            }
            else{
                f1=0;
                //cout<<"f1 "<<f1<<endl;
            }
            if (range2<n){
                f2=range2-range1+1;//cout<<"F2 "<<f2<<endl;
            }
            else{
                f2=0;//cout<<"f2 "<<f1<<endl;
            }
            cout<<f1+f2<<endl;
            }
            else {
                if (range1>1){
                f1=range2-range1+1;
                //cout<<"F1 "<<f1<<endl;
            }
            else{
                f1=0;
                //cout<<"f1 "<<f1<<endl;
            }
            if (range2<n){
                f2=range2-pos+1;//cout<<"F2 "<<f2<<endl;
            }
            else{
                f2=0;//cout<<"f2 "<<f1<<endl;
            }
            cout<<f1+f2<<endl;
            }
        }
       else {
            if (range1>1){
                f1=pos-range1+1;
                //cout<<"F1 "<<f1<<endl;
            }
            else{
                f1=0;
                //cout<<"f1 "<<f1<<endl;
            }
            if (range2<n){
                f2=range2-pos+1;//cout<<"F2 "<<f2<<endl;
            }
            else{
                f2=0;//cout<<"f2 "<<f1<<endl;
            }
            cout<<f1+f2<<endl;
       }
    }

    else {
        if (pos<range1){
            f3=range1-pos+1;//cout<<"F3 "<<f3<<endl;
            if (range2<n){
                f4=range2-range1+1;//cout<<"F4 "<<f4<<endl;
            }
            else {
                f4=0;//cout<<"F4 "<<f4<<endl;
            }
            cout<<f3+f4<<endl;
        }
        else{
            f3=pos-range2+1;//cout<<"f1 "<<f3<<endl;
            if (range1>1){
                f4=range2-range1+1;//cout<<"f4 "<<f4<<endl;
            }
            else {
                f4=0;//cout<<"f4 "<<f4<<endl;
            }
            cout<<f3+f4<<endl;
        }
    }

    return 0;
}



