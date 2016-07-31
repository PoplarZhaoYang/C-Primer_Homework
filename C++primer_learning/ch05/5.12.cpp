#include <iostream>
#include <cstdio>


int main()
{
    char c;
    int vowel = 0, unvowel = 0, space = 0;
    while ((c = getchar())) {
        if (isalpha(c)) c = tolower(c);
        switch (c) {
            case 'a': case 'e': case 'i': case 'o': case 'u':
                ++vowel;
                break;
            case ' ': case '\n': case '\t':
                ++space;
                break;
            default :
                ++unvowel;
                break;
        }
    }
    return 0;
}
