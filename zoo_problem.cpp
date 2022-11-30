#include <iostream>
using namespace std;
int main() {
	char s[20];
	cin>>s;
	int x=0,y=0;
	for(int i=0;s[i]!='\0';i++){
		if(s[i]=='z'){
			x++;
		}
		if(s[i]=='o'){
			y++;
		}
	}
	if(x*2==y){
		cout<<"Yes"<<endl;
	}
	else
	cout<<"No";
}