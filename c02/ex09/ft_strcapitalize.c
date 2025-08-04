/* Create a function that capitalizes the first letter of each word and converts all other
letters to lowercase. A word is a sequence of alphanumeric characters */

/* Start with a flag like is_new_word = true.
Go through each character c in the string:
If c is alphanumeric:
If is_new_word is true → capitalize c, set is_new_word to false. Else → lowercase c.
If c is NOT alphanumeric: Leave it as it is.
Set is_new_word = true to prepare for the next word.
*/

int ft_strcapitalize(char *str)
{
    int i = 0;
    int c;
    int is_new_word = 1;

    while ((c = str[i]))
    {
     // if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))) 
    }

}

int main(void)
{
    char x = "hi, how are you? 42words forty-two; fifty+and+one";

    ft_strcapitalize(x);
}