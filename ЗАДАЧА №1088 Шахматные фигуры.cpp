#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int b1,t1,t2,b2,m,n,k=0;
    char a1,a2;
    scanf("%c%d /n",&a1,&b1);
    t1=a1;
    scanf("%c%d",&a2,&b2);
    t2=a2;
    if ((t1==t2)||(b1==b2)) { cout<<"Rook"<<endl; k=1; }
    n=t1-t2; if (n<0) n=n*(-1);
    m=b1-b2; if (m<0) m=m*(-1);
    if (n==m)               { cout<<"Bishop"<<endl; k=1; }
    if (((t2==t1+1) && (b2==b1+2)) || ((t2==t1+2) && (b2==b1+1)) || ((t2==t1-1) && (b2==b1+2)) || ((t2==t1-2) && (b2==b1+1)) ||
    ((t2==t1-1) && (b2==b1-2)) || ((t2==t1-2) && (b2==b1-1)) || ((t2==t1+1) && (b2==b1-2)) || ((t2==t1+2) && (b2==b1-1)))
                            { cout<<"Knight"<<endl; k=1; }
    if (((t1==t2)||(b1==b2))||(n==m))
                            { cout<<"Queen"<<endl; k=1; }
    if (((t2==t1+1) && (b1==b2)) || ((t2==t1-1) && (b1==b2)) || ((b2==b1+1) && (t1==t2)) || ((b2==b1-1) && (t1==t2)) || (((t2==t1+1)&&(b2==b1+1))||((t2==t1-1)&&(b2==b1+1))||((t2==t1-1)&&(b2==b1-1))||((t2==t1+1)&&(b2==b1-1))))
                            { cout<<"King"<<endl; k=1; }
     if (t1==t2&&b1!=1)
            if ((b1==2 && b1+2==b2) || b1+1==b2)
                            { cout<<"Pawn"<<endl; k=1; }
    if (k==0) cout<<"Nobody";
}
