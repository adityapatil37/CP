#include <iostream>

using namespace std;
int main() {
    string n;
    cin>>n;

    int countup=0,countlow=0;
	for(int i=0;i<n.size();i++){
	    if(isupper(n[i])){
	        countup++;
	    }else{
	        countlow++;
	    }
	}

    if (countup>countlow)
    {
        for (char &c : n) {
        c = toupper(c);
    }
    }
    else{
        for (char &c : n) {
        c = tolower(c);
    }
    }
    
    cout<<n;

    return 0;
}