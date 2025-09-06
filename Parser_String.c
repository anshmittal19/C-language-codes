#include <stdio.h>
#include <string.h>

void parser(char *string)
{
    int in = 0; // ye Opening & Closing tag ko check krega
    int index = 0;
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == '<')
        {
            in = 1;
            continue;
        }
        else if (string[i] == '>')
        {
            in = 0;
            continue;
        }

        if (in == 0)
        {
            string[index] = string[i];
            index++;
        }
    }

    string[index] = '\0';
    //Now, we have to remove trailing spaces

    while(string[0] == ' '){
        // we are shifting string towards left side
        for (int i = 0; i < strlen(string); i++)
        {
            string[i]= string[i+1];
        }
        
    }
    while (string[strlen(string)-1] == ' ')
    // We are removing Back side spaces
    {

        string[strlen(string)-1] = '\0';

    }
    
}

int main()
{
    char string[] = "<h1>   This is Ansh File   </h1>";
    parser(string);
    printf("The parsed string is ~~%s~~", string);
    return 0;
}