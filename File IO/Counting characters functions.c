// Prints the count of characters in a file, by:
// alpha
// digits
// whitespace
// other
// PRE: fp can be opened and read
// PARAM: fp is a pointer to a file to be read
void countCharacters(FILE* fp, char* fName)
{

    int alpha = 0;
    int digits = 0;
    int white = 0;
    int other = 0;
    int total = 0;
    char ch;


    void countCharacters(FILE* fp, char* fName)
    {

// ...
// Read file one character at a time
        while((ch = getc(fp)) != EOF)
        {

            if(isalpha(ch))
            {
                alpha++;

            }
            else if(isdigit(ch))
            {

                digits++;

            }
            else if(isspace(ch))
            {

                white++;

            }
            else
            {

                other++;

            }

        }
        total = alpha + digits + white + other;
