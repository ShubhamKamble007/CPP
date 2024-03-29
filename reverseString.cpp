//1. C++ program  to Create Custom function for my_strstr()
 
#include<iostream>
using namespace std;
 
char *my_strstr( char *str1, char *str2)
{
    int i,j,k,l;
	for(i=0,j=0;str1[i]!='\0';i++)
    {
		if(str1[i]==str2[j])
		{
			for(k=j+1,l=i+1;str2[k]!='\0';k++,l++)
			{
				if(str1[l]!=str2[k])
				{
					break;
				}
			}
			if(str2[k]=='\0')
			{
				return (str1 + i);
			}
		}
	}
}
 
 // modifying this file
int main()
{
	char s1[]="Hello World";
	char s2[]="H";
	cout<<my_strstr(s1,s2);
	return 0;
}

