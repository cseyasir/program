//manipulation of objects
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1("12345");//using string constant
	string s2("abcde");
	cout<<"ogrinal string"<<s1<<"\n"<<s2<<endl;
	cout<<"placing one string into anoher"<<s1.insert(5,s2)<<endl;
	cout<<"removing character of string"<<s1.erase(0,0)<<endl;
	cout<<"replacing middle 3 char"<<s1.replace(1,3,s1)<<endl;
	
}
