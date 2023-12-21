#include<iostream>
#include<algorithm>
using namespace std ;

int main(){
    int arr[10] , pmax , indx , c=1;

    cout<<"enter ten values : ";

    for(int i = 0 ; i<10 ; i++){
        cin>>arr[i];
    }

    cout<<"your entered  ten values : ";

    for(int i = 0 ; i<10 ; i++){
        cout<<arr[i]<<" ";
    }

    pmax = arr[0] ;

    cout<<endl << "finding max : "<< arr[0] ;
    for(int i = 1 ; i < 10 ; i++)
    {
        pmax = max(pmax , arr[i]);
        arr[i] = pmax ;
        cout<<" "<<arr[i];
    }

    bool t = true ; 

    while (t)
    {
        cout<<endl << "press 0  for exist "<<endl ;
        cout<<"press 1  for continue "<<endl ;
        cout<<"enter your choice : " ;
        cin>>c ;

        if(c==1){
            cout<<"enter your index between 0-9 : ";
            cin>>indx ;
            if(indx> 9 ){
                cout<<"invalid range ";
                return 0 ;
            }
            cout<<"maximum value = "<< arr[indx] ;
        }

        else if(c==0){
            t= false ;
        }

        else {
            cout<<"invalid input";
        }

    }
    



    return 0 ;
}