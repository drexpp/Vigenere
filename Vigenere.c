#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    if(argc != 2){                  //prints out possible errors in the argument input line
        printf("YOU SCREWED UP!\n");
        return 1;
    }
    
    else if (argv[1]){
        for(int i = 0, n = strlen(argv[1]); i < n; i++){
            if(!isalpha(argv[1][i])){
                printf("There must be only alphanumeric characters for the key \n");
                return 1;
            }    

        }
    }
    
    string final_key=argv[1];                   //Vigenere pass
    int keylength = strlen(final_key);          //Length of the Vigenere pass
    
    string text = GetString();                  //User input for cipher
    
    for(int i = 0, j = 0, n = strlen(text); i < n; i++){
    
    int text_a=text[i];            
    int cipher_key = final_key[j% keylength];   //cipher key
    
        if(isalpha(text_a)){        //Check if it's alphabetic character
        
            if(islower(text_a)){    //Caesar encryption for lower characters
                int lower_cipher = ((text_a+cipher_key+14)%26)+97;
                printf("%c", lower_cipher);
            }
            else{                   //Caesar encryption for upper characters
                int upper_cipher = ((text_a+cipher_key+20)%26)+65;
                printf("%c", upper_cipher);
            }
            j++;
        }
        else
            printf("%c", text_a);    //Non-alphabetic characters output   
    }
    printf("\n");
    return 0;
}
