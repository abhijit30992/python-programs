/*Following c++ program sorts the sorted array into a wave-like array. In other words, arranges the elements into a sequence such that a1 >= a2 <= a3 >= a4 <= a5..... */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
 {
	    ll n;
	    cout<<"enter the size of array:\n";
	    cin>>n;
	    ll a[n];
	    cout<<"enter "<<n<<" elements of array:\n";
	    for(ll i=0;i<n;i++){
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    ll temp;
	    for(ll i=0;i<n;i+=2){
	        if(i<n-1){
	            temp=a[i];
    	        a[i]=a[i+1];
    	        a[i+1]=temp;
	        }else{
	            if(n%2==0){
	                temp=a[i];
        	        a[i]=a[i+1];
        	        a[i+1]=temp;
	            }
	        }
	    }
	     for(ll i=0;i<n;i++){
	        cout<<a[i]<<" ";
	    }
	    cout<<"\n";

	return 0;
}
