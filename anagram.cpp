//anagarms
#include<stdio.h>
#include<stdlib.h>
int main(){
	char s1[10000],s2[1000];
	int len,len1,len2,i,j,anagram=0,notanagram=0;
	printf("enter the string1:");
	gets(s1);
	printf("enter the string2:");
	gets(s2);
	len1=strlen(s1);
	len2=strlen(s2);
	if(len1==len2){
		len=len1;
		for(i=0;i<len;i++){
			anagram=0;
			notanagram=0;
			for(j<0;j<len;j++){
				if(s1[i]==s2[j]){
				
				   anagram=1;
				   break;
		      	}
			}
			if(anagram==1){
				notanagram=1;
				break;
			}
			
		
		}
		if(notanagram==1){
			printf("not anagram");
		}
		else if(anagram==1){
			printf("given strings are anagram");
		}
		
		}
	else{
		printf("not anagram");
	}
	return 0;
	}

