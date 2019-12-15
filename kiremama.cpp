#include<bits/stdc++.h>
#include<cstdio>
void f1(int a[],int n, int D){


  for(int i=0;i<n;i++){
    a[i]+=D;

  }


}
void f2(int a[],int n, int D){


  for(int i=0;i<n;i++){
    a[i]*=D;

  }


}
void f3(int a[],int n, int D){


  for(int i=0;i<n;i++){
    a[i]/=D;

  }


}
void f4(int a[],int n){

std:: reverse(a,a+n);


}
void f5(int a[],int Y, int Z){


std::  swap(a[Y],a[Z]);


}


using namespace std;
int main()
{
    //cin.clear();
    //cin.sync();
    int n;
    int t;
    int l=0;
    int q;


   // cin.clear();
    //cin.sync();

    cin>>t;

    while(t--)
    {
        l++;


        cin>>n;
        int q;

        int  a[n];
        int k[n];
        /*for(int i=0; i<n; i++)
        {
            a[i]=0;
            k[i]=0;
        }*/



        char  m;
        cin>>q;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];


        }
        //fflush(stdin);
        //getchar();
        //cout<<"helllo ";

        for(int i=1; i<=q; i++)
        {
            //getchar();
         fflush(stdin);
            //  cout<<"hello"<<endl;
            //cout<<"please entr the key u want to operate"<<endl;
            //scanf("%c",&m);
            getchar();
            scanf("%c",&m);
            //getchar();
            //getline(cin,m);
            //getchar();
            //getchar();
            switch(m-'A'){
                int D;
           case 18:
               cin>>D;
               f1(a,n,D);
                     //cin>>D;
                     //for(int i=0;i<n;i++){
                        //a[i]=a[i]+D;
                        break;
            case 12:
                     cin>>D;
                     /*for(int i=0;i<n;i++){
                        a[i]=a[i]*D;

                     }*/
                     f2(a,n,D);
                     break;
            case 3: int K;
                     cin>>K;
                     /*for(int i=0;i<n;i++){
                        a[i]=a[i]/K;

                     }*/
                     f3(a,n,K);
                     break;
            case 17:
                  f4(a,n);

                /*for(int i=0,j=n-1; i<(n-1)/2; i++,j--){


                    int temp=a[i];
                    a[i]=a[j];
                   // cout<<a[i]<<" ";
                    //cout<<"hello"<<endl;
                    a[j]=temp;
                    //cout<<a[j]<<" ";

                }*/
                break;
                 case 15:
                     int Y,Z ;
                     cin>>Y>>Z;
                     f5(a,Y,Z);
                     /*int temp=a[Y];
                     a[Y]=a[Z];
                     a[Z]=temp;*/
                     break;
            }









            }

            // getchar();


        cout<<"Case "<<l<<":";
        cout<<endl;
        for(int i=0; i<n; i++)
        {
            cout<<a[i];
            if(i!=n-1)
                cout<<" ";

        }
        cout<<endl;
    //cout<<a[n-1];
        //cout<<endl;
    }

}
