#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char str[110];
	int i,count1=0,count2=0;
	cin.getline(str,110);
	int n=strlen(str);
	for(i=0;i<n;i++)
	{
		if(isupper(str[i]))
		{
			count1++;
			
		}
		else
		{
			count2++;
		}
		
	}
	
	if(count1>count2)
	{
		for (int i=0; str[i]!='\0'; i++)
        putchar(toupper(str[i]));
	}
	else
	{
		for (int i=0; str[i]!='\0'; i++)
        putchar(tolower(str[i]));
    }

	
	return 0;
			
	
}
