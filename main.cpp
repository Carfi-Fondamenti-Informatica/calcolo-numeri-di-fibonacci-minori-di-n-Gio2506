#include <iostream>
using namespace std ;
int main(){
    int n=0,N1=1,N2=1,N3=0;
    cin>>n;

    if (n>0)
        {
        cout << N1 << '\n' << N2 << endl;
        N3=N1+N2;
        N1=N2;
        N2=N3;
        while (N3<=n){
        cout << N3 <<endl;
        N3=N1+N2;
        N1=N2;
        N2=N3;
        }
    }
   return 0;
    
}
