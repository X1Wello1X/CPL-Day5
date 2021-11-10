#include <stdio.h>  
#include <string.h>  
  
int str_len( char *st);  
void revstr( char *st);  
int main()  
{  
    char st[70];
    printf("enter the word you want to reverse: ");
    scanf("%[^\n]%*c",&st);
      
    revstr(st);   
      
    printf (" The reverse string is: %s", st);  
    return 0;  
}  
  
void revstr (char *st)  
{  
    int len, i;  
    char *start, *end, temp;  
      
    len = str_len (st);  
    start = st;  
    end = st;  
      
    for (i = 0; i < len - 1; i++)  
    end++;  
      
    for (i = 0; i < len/2; i++)  
    {  
        temp = *end;  
        *end = *start;  
        *start = temp;  
          
        start++;  
        end--;  
    }  
}  
  
int str_len (char *ptr)  
{  
    int i = 0;  
    while ( *(ptr + i) != '\0')  
    i++;  
    return i;  
}  
