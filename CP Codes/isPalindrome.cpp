/*
    * isPalindrome.c
    *
    */
    #include <stdio.h>
    #include <ctype.h>
    #include <conio.h>
    #include <string.h>
    int isPalindrome( char *str, int length )
    {
    if ( length < 1 )
    {
    return 1; /* no more chars to compare, its a palindrome */
    }
    if ( str[0] == str[length-1] ) /* Are the two ends same? */
    {
    return isPalindrome( str+1, length-2 ); /* continue checking */
    }
    else
    {
    return 0; /* comparison failed, not a palindrome */
    }
    }
    void strToUpper( char *src )
    {
    /* convet to upper case any letter */
    while( ( *src = toupper( *src ) ) != '\0' )
    {
    ++src;
    }
    }
    int main( void )
    {
    int result = 0;
    char str[40] = { '\0' };
    fputs( "Enter text: ", stdout );
    fflush( stdout );
    fgets( str, sizeof str, stdin );
    strToUpper( str ); /* make all letters the same for comparison */
    result = isPalindrome( str, ( strlen( str ) - 1 ) ); /* recursive starts here */
    if( result == 1 )
    {
    puts( "Its a palindrome string." );
    }
    else
    {
    puts( "Its not a palindrome string." );
    }
    getchar();
    return 0;
    }
    /* input: Sator Arepo Tenet Opera Rotas */
    /* output: Its a palindrome string. */
