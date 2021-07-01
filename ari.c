#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>



string ari(string s){
 int letters=0;
  for(int i=0; s[i]!='\0';i++)
  {
     if(isalpha(s[i])!=0)
        letters++;
     }
 
     
 int words=0;
 for(int i=0; s[i]!='\0';i++){
  if(s[i]==' ')
     words++;
  else{
     if(s[i]=='.' || s[i]=='!' || s[i]=='?' || s[i]==','){
     words++;
     i++;
     
  }}}
  
  
  

  int sentence=0;
  for(int i=0; s[i]!='\0';i++){
     if((s[i]=='.' ||s[i]=='?' || s[i]=='!') && s[i+1]==' ')
     sentence++;
     if(s[i]=='.' && s[i+1]=='\0')
     sentence++;
     }
   
     
     
float index=(4.71*((float)letters/words))+(0.5*((float)words/sentence))-21.43;
   int ind=index/1;
      ind++;
   if(ind<0 || ind==1)
      return "Kindergarden";
   if(ind==2)
      return "First/Second Grade";
   if(ind==3)
      return "Third Grade";
   if(ind==4)
      return "Fourth Grade";
   if(ind==5)
      return "Fifth Grade";
   if(ind==6)
      return "Sixth grade";
   if(ind==7)
      return "Seventh Grade";
   if(ind==8)
      return "Eight Grade";
   if(ind==9)
      return "Ninth Grade";
   if(ind==10)
      return "Tenth Grade";
   if(ind==11)
      return "Eleventh Grade";
   if(ind==12)
      return "Twelfth Grade";
   if(ind==13)
      return "College student";
   if(ind==14 || ind>14)
      return "Professor";
   else
      return "error";
     }
