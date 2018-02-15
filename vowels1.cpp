#include<iostream>
using namespace std;
int main()
{ 
	char smallcase,capscase;
	char c;
	smallcase=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
	capscase=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
	if(smallcase||capscase)
	{
	cout<<"vowels";
	}
	else
	{
		cout<<"constants";
		
	}
	return 0;
}
