## Redirecting Standard Input, Standard Output and Standard Error

`<` operator redirects the **standard input** of a program. i.e. where is the data you want to feed to the program coming from? Is it coming from a keyboard input, a file ... etc. It's used on the command line

`>` operator is used to redirect **standarad output** i.e. where do you want to display the data you received from dtandard input? Will you display it on a screen, a file...etc. It's used on the command line

```c
/*
 * geo2json is a program converting geolocation to json format
 * it receives geolocation data from the gpsdata.csv file (which is the standard input)
 * then outputs the data to output.json (standard output) after converting it into json format
 */
./geo2json < gpsdata.csv > output.json
```

`echo $?` **displays the number returned by a program once it's finished running**. The returned number tells you whether the program was successful or had an error.

**Standard error** is a second output for *displaying errors* (from a program)

So basically: **there is only 1 stream of input (Standard Input) & 2 outputs (Standard Output & Standard Error)**

By default:
- Standard Input derives data from the keyboard
- Standard Output displays data to the screen
- Standard Error displays errors to the screen 

`fprintf()` allows you to **choose where you want to send text to; standard output or standard error**
```c
/* sending message to standard output */
fprintf(stdout, "Login successful");
/* sending message to standard error */
fprintf(stderr, "Error status 2");
```

printf() is just a cut down version of its parent function fprintf(). The following two codes do the exact same thing:
```c
/* printf */
printf("Stephen Wardell Curry");
/* fprintf */
fprintf(stdout, "Stephen Wardell Curry");
```

The only difference between printf() & fprintf() is that printf() only displays to the standard output while fprintf() can print to either standarad output or standard error.

Behind the scenes, printf() is just calling fprintf().

To redirect standard error, use operator `2>` on the command line