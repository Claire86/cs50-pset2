#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{

    string k = (argv[1]);
    //checks to see if key is alphanumeric
    for (int c=0; c<strlen(k);c++){
        if (!isalpha(k[c])){
            printf ("please enter a valid key\n");
            return 1;
        }
        }
    //turns string into int
        int o=atoi(argv[1]);
        
    //obtain plaintext
        string p= GetString();
        {
            printf("%s\n", p);
        }

    //sets counter for the key
        int count=0;
        int j=0;
    // starts obtaininig value of each char in plaintext
        for (j=0; j<strlen(p);j++){
            if(!isalpha(p[j])){
                printf ("%c", p[j]);
            }
            else if(isalpha(p[j])) {
                count++;
            }

            if (isupper(p[j]))
            {
                p[j]=tolower(p[j]);
                printf("%d", ((p[j]-97)) + o %26 + 97);
            }

            printf ("count: %d\n", count);
            int shift = (k[count] - 97);
            printf ("shift value: %d\n", shift);
            int co = p[j];
            char code = (shift + co);
            printf ("message: %c\n", code);



        }


        // obtain plaintext and add the value of a onto the plaintext
}
}
