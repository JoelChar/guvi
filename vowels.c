#include<stdio.h>
int main()
{
  char ch;
  scanf("%c",&ch);
  
  if((ch >= 'a'&& ch<='z')||(ch >='A' && ch >='Z')){
    if(ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'I' || ch == 'i' || ch == 'o' || ch == 'O' || ch == 'U' || ch == 'u')
      printf("Vowel");
     else
      printf("Consonant");
   }
   else
    printf("Invalid");
    
    return 0;
    


}
