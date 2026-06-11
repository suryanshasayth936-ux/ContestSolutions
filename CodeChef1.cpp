//10-06-26

//Qn1:
#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin>>x;
    if(x%5==0){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
    return 0;
}


//Qn2:
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    int ll =min(n,m);
	    string str1,str2;
	    cin>>str1>>str2;
	    int count = 0;
	    for(int i=0; i<ll; i++){
	        if(str1[i] == str2[i]){
	            count++;
	        }
	        else{
	            break;
	        }
	    }
	    for(int i=0; i<count; i++){
	        cout<<str1[i];
	    }
	    cout<<endl;
	}
	return 0;
}
