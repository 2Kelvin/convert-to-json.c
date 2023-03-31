## Redirecting Standard Input, Standard Output and Standard Error

`<` operator redirects the **standard input** of a program. i.e. where is the data you want to feed to the program coming from? Is it coming from a keyboard input, a file ... etc

`>` operator is used to redirect **standarad output** i.e. where do you want to display the data you received from dtandard input? Will you display it on a screen, a file...etc

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