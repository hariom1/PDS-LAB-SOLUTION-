/********************************
Name-Hariom
Roll no- 21MI10021
Section -15
assig_8a:-print name in given format and also print no of vowels and consonants in printed name.
**********************************************************************************************/
#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char user[50],family[50];
    printf("Enter your name(user).\n");
    gets(user);    //taking user name
    printf("Enter your family name.\n");
    gets(family);    //taking family name of users.

    printf("Your Entered name(user): %s\n",user);   //print user name.
    printf("your entered family name: %s\n",family);   //print family name.

    int vowel_user=0,consonant_user=0;
    {
        user[0]=(user[0]>='a'&& user[0]<='z')? user[0]-32 : user[0];    //convert first letter of user name in capital if it's in small.
    }

    {
        (user[0] =='A' || user[0]=='E' || user[0]=='I' || user[0]=='O' || user[0]=='U')? vowel_user++ : consonant_user++; //count no of vowel & consonants in user first letter.
    }

    {
        family[0]=(family[0]>='a'&& family[0]<='z')? family[0]-32:  family[0];    //convert first letter of family in capital if it's in small.
    }

    for (i = 1; family[i]!='\0'; i++)
    {
        family[i]=(family[i] >= 'A' && family[i] <= 'Z')? family[i]+32: family[i];   //convert other letter (except first letter) of family in small if it's in capital.
    }

    //counting no of vowels and consonants in family  name.

    int vowel_family=0,consonant_family=0;
    for (i = 0; family[i]!='\0'; i++)
    {
        if((family[i]>='a' && family[i]<='z') || (family[i]>='A' && family[i]<='Z'))
        {
            (family[i] =='a' ||family[i]=='e' || family[i]=='i' || family[i]=='o' || family[i]=='u' ||  family[i] =='A' || family[i]=='E' || family[i]=='I' || family[i]=='O' || family[i]=='U')? vowel_family++:consonant_family++;
        }
    }
    printf("\n");
    printf("1.Full name in given format = %.1s. %s\n",user,family);  //print full name in given format.
    printf("2.No of vowel = %d\n",vowel_user+vowel_family);                //print total no of vowel present in full name.
    printf("3.No of consonant = %d\n",consonant_user+consonant_family);   //print total no of consonants present in full name.

    return 0;   //program ends.
}



