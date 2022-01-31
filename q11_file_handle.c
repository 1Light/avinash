# include <stdio.h>
# include <string.h>

int main( )
{
	FILE *note_file ;
    note_file = fopen("note.txt", "a") ;
	
    char note[50];
    printf("please enter a note: ");
    fgets(note, 50, stdin);
    printf("You note is  \n", note);

	if ( note_file == NULL )
	{
		printf( "note.txt file failed to open." ) ;
	}
	else
	{
        fputs(note, note_file);
		printf("Data successfully written in file note.txt \n");
		fclose(note_file) ;
		printf("The file is now closed.") ;
	}
	return 0;	
}
