include <stdio.h>
#include <string.h>



int main()
{
  char s[100], t[100];
  int c, d = 0;

  printf("Enter a string to delete vowels\n");
  gets(s);

  for(c = 0; s[c] != '\0'; c++)
    {
    if(s[c] == 'a' || s[c] == 'A' || s[c] == 'e' || s[c] == 'E' || s[c] == 'i' || s[c] == 'I' || s[c] =='o' || s[c] =='O' || s[c] == 'u' || s[c] == 'U')
    {       // If not a vowel
      t[d] = s[c];
      d++;
    }
  }

  t[d] = '\0';

  strcpy(s, t);  // We are changing initial string. This is optional.

  printf("String after deleting vowels: %s\n", s);

  return 0;
}


