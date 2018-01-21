#include <stdio.h>
#define MAXLINE 1000 

int getln(char line[], int maxline);
void copy(char to[], char from[]);

int main ()
{
	int len;
	int max;
	int mark;
	char line[MAXLINE];
	char longest[MAXLINE];


	max = 0;
	while ((len = getln(line, MAXLINE)) > 0 && len != 0) {
		copy(longest, line);
		printf("%c\n", len); 
		printf ("new code is// %s", longest);
	}
	return 0;
}

int getln(char s[], int lim)
{
	int c, i;

	for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n' && c != 0; ++i){
		s[i] = c;
	}
	if (c == '\n'){
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

void copy(char to[], char from[])
{
	int i;

	i = 0;
	if (char[0] == '\n')
		printf("run 1");

	while ((to[i] = from[i]) != '\0'){
		++i;
	}
}


// Глава 1.9. пример который мне больше нравится
/*#include <stdio.h>
#define MAXLINE 1000 
#define MAXLIM 80

int getln(char line[], int maxline);
void copy(char to[], char from[]);

int main ()
{
	int len;
	int max;
	int mark;
	char line[MAXLINE];
	char longest[MAXLINE];


	max = 0;
	while ((len = getln(line, MAXLINE)) > 0) {
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	}
	if (max > 0) {
			printf ("longest line is = %s", longest);
		}
	return 0;
}

int getln(char s[], int lim)
{
	int c, i;

	for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i){
		s[i] = c;
	}
	if (c == '\n'){
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

void copy(char to[], char from[])
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0'){
		++i;
	}
}*/

/*#include <stdio.h>
#define MAXLINE 10000 // максимальная дилна строки в потоке

int getln(char line[], int maxline);
void copy (char to[], char from[]); 

/* вывод самой длинной строки в потоке*/

/*int main()
{
	int len;		// длина текущей строки
	int max;		// текушей максимальная длина
	char line[MAXLINE]; 	// текущая введенная строка
	char longest[MAXLINE];	// самая длинная строка из веденных

	max = 0;
	while ((len = getln(line, MAXLINE)) > 0)
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	if (max > 0) // была непустая строка
		printf("%s", longest);
	return 0;
}*/

// getline: считывает строку в s, возвращает ее длину
/*int getln(char s[], int lim)
{
	int c, i;

	for (i = 0; i < lim -1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n'){
		s[i] =c;
		++i;
	}
	s[i] = '\0';
	return i;
}*/

/* copy: копирует стоку 'from' в 'to'; длина to считается достаточной 
void copy(char to[], char from[])
{
	int i;

	i = 0;
	while ((to[i] = from[i] != '\0'))
		++i;
}*/



// Решение упражнения взятое с интернете. Не так как я хотел
/*#include <stdio.h>
#define MAXLINE 1000 // Максимальный размер вводимой строки
#define MAXLENGTH 81 // 80 Символов + символ новой строки

int getl(char line[], int maxline);

int main(void)
{
	int len; // Длина текущей строки	
	char line[MAXLINE]; // Текущая строка

	while ((len = getstr(line, MAXLINE)) > 0)
		if (len > MAXLENGTH) // Данная строка длиннее 80 символов
			printf("%s", line);
	return 0;
}

// getsrt читает строку в s, возвращая длину
int getstr(char s[], int lim)
{
	int c, i;

	for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n')
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0'; // В конец строки дописываемм *0* 
	return i; 	// Функция возврата длину строки
}*/


/*#include <stdio.h>  

#define MAXLINE 10 // Максимальная длина строки

int getl(char line[], int maxline);
void copy(char to[], char from[]);

int main ()
{
	int len;
	int tmp;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;
	len = 0;
	tmp = 0;
	while ((tmp = getl(line, MAXLINE)) > 0)
	{
		len += tmp;
		if (tmp != MAXLINE -1) {
			if (len > max) {
				max = len;
				copy(longest, line);
			}
			len = 0;
		}
	} 

	if (max > 0) 
		printf("\nlength = %d,%s", max, longest);
	return 0;
}

int getl(char s[], int lim)
{
	char end_symbol;
	int c, i;
	int marker = 0;

	for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i){
		s[i] = c;

		while (marker != 1){
			end_symbol = sizeof(s);
			if (s[end_symbol - 1] == '\t' || s[end_symbol - 1] == ' ') {
				--s;
			} else {
				marker = 1;
			} 

		} 
		marker = 0;

	}




	if (c == '\n'){
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;

}

void copy(char to[], char from[])
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0'){
		++i;
	}
}*/


/*#include <stdio.h>
#define MAXLINE 1000

int getline_1(char line[], int maxline);
void copy(char to[], char from[]);

int main ()
{
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;
	while ((len = getline_1(line, MAXLINE)) > 0) {
		if (len > max) {
			max = len;
			copy(longest, line);
		}
		if (max > 0) {
			printf ("%s", longest);
		}
	}
	return 0;
}

int getline_1(char s[], int lim)
{
	int c, i;

	for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i){
		s[i] = c;
	}
	if (c == '\n'){
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;

}

void copy(char to[], char from[])
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0'){
		++i;
	}
}*/


/*1.8 Аргументы: передача по значению*/

/*#include <stdio.h>

int power(int m, int n);

int main () 
{
	int i;

	for (i = 0; i < 10; ++i)
	{
		printf("%d %d %d\n", i, power(2, i), power(-3, i));
	}
	return 0;
}

int power(int base, int n)
{
	int p;

	for (p = 1; n > 0; --n){
		p = p * base;
	}
	return p;
}*/


/*Упражнение 1.15*/


/*#include <stdio.h>

#define LOWER 0 	// Botton border of range
#define UPPER 300 	// Top border of range
#define STEP 20 	// Step size

double conversion (int m);

int main ()
{
	int fahr;

	for(fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
		printf("%3d %6.1f\n", fahr, conversion(fahr));
}

double conversion (int fahr)
{
	double ans;
	ans = (5.0/9.0) * (fahr -32);
	return ans;
}*/

/*1.7 Функции*/

/*
#include <stdio.h>

int power(int m, int n);

int main () 
{
	int i;

	for (i = 0; i < 10; ++i)
	{
		printf("%d %d %d\n", i, power(2, i), power(-3, i));
	}
	return 0;
}

int power(int base, int n)
{
	int i, p;

	p = 1;
	for (i = 1; i <= n; ++i){
		p = p * base;
	}
	return p;
}
*/



/*#include <stdio.h>

int main () 
{
	int c, i, nwhite, nother;
	int ndigit[10];

	nwhite = nother = 0;
	for (i = 0; i < 10; ++i) {
		ndigit[i] = 0;
	}

	while ((c = getchar()) != EOF){
		if (c >= '0' && c <= '9'){
			++ndigit[c - '0'];
		} else if (c == ' ' || c == '\n' || c == '\t'){
			++nwhite;
		} else {
			++nother;
		}
	}	
		printf("digits | ");
		for (i = 0; i < 10; ++i){
			printf("+");
		}
		printf("\n");
		//printf(", white space = %d, other = %d\n", nwhite, nother);
		

}*/



/*#include <stdio.h>

int main () 
{
	int c, i, nwhite, nother;
	int ndigit[10];

	nwhite = nother = 0;
	for (i = 0; i < 10; ++i) {
		ndigit[i] = 0;
	}

	while ((c = getchar()) != EOF){
		if (c >= '0' && c <= '9'){
			++ndigit[c - '0'];
		} else if (c == ' ' || c == '\n' || c == '\t'){
			++nwhite;
		} else {
			++nother;
		}
	}	
		printf("digits =");
		for (i = 0; i < 10; ++i){
			printf(" %d", ndigit[i]);
		}
		printf(", white space = %d, other = %d\n", nwhite, nother);
		

}




#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
	int c, b, prev;
	int nc, nl, nw, state;

	c = 0;
	b = 0;
	state = OUT;
	nl = nw = nc = 0;
	prev = 0;
	
	while ((c = getchar()) != EOF){
		++nc;
		if (c == '\n'){
			++nl;
		}
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT) {
			state = IN;
			++nw;
		}								// word counter 

		if (c == ' ' || c == '\n' || c == '\t'){
			prev = 1;
			c = 0;
		} else if (c != ' ' && prev == 1) {
			prev = 0;
			b = '\n';
			putchar(b);
			putchar(c);
		} else {
			putchar(c);
		}								// new line to each word


		
	}
	printf("\n %d %d %d\n", nl, nw, nc);
}*/




/*
#include <stdio.h>
#define MAX_SYMB 10


int main () 
{

	int c, count, str_pnt; 
	int ndigit[MAX_SYMB];

	if (MAX_SYMB == 10) {
		str_pnt = 48;
	} else {
		str_pnt = 0;
	}

	for (int i = 0; i < MAX_SYMB; ++i)
	{
		ndigit[i] = 0;
	}

	while ((c = getchar()) != EOF)
	{
				
	for(int i = 0; i < MAX_SYMB; ++i){
		if (c == (str_pnt + i))
			++ndigit[i];	}
			
	}

	if (MAX_SYMB == 10)	{

		for (int i = 0; i < 10; ++i)
		{
			printf("%c = ", i);
			for (;ndigit[i] > 0; --ndigit[i])
			{
				printf("+");
			}
			printf("\n");
		}

	} else {

		for (int i = 0; i < MAX_SYMB; ++i)
		{
			printf("%c = ", i);
			for (;ndigit[i] > 0; --ndigit[i])
			{
				printf("+");
			}
			printf("\n");
		}
	}
}
*/


/*#include <stdio.h>
#define MAX_SYMB 127

int main () 
{

	int c, count; 
	int ndigit[MAX_SYMB];

	for (int i = 0; i < MAX_SYMB; ++i)
	{
		ndigit[i] = 0;
	}

	while ((c = getchar()) != EOF)
	{
				
	for(int i = 0; i < MAX_SYMB; ++i){
		if (c == (0 + i))
			++ndigit[i];
	}
			
	}

	for (int i = 0; i < MAX_SYMB; ++i)
	{
		if (ndigit[i] != 0){
			if (i == 32) {
				printf("Space = ");
			} else if (i == 9) {
				printf("\\t = ");
			} else if (i == 10) {
				printf("\\n = ");
			} else{
				printf("%c = ", i);	
			}
			
		for (;ndigit[i] > 0; --ndigit[i]){
			
			printf("+");
			if (ndigit[i] == 1){
				printf("\n");
			}
		} 
		}
	}
}
*/


/*#include <stdio.h>
#define MAX_SYMB 127

int main () 
{

	int c, count; 
	int ndigit[MAX_SYMB];

	for (int i = 0; i < MAX_SYMB; ++i)
	{
		ndigit[i] = 0;
	}

	while ((c = getchar()) != EOF)
	{
				
	for(int i = 0; i < MAX_SYMB; ++i){
		if (c == (0 + i))
			++ndigit[i];	}
			
	}

	for (int i = 0; i < MAX_SYMB; ++i)
	{
		printf("%c = ", i);
		for (;ndigit[i] > 0; --ndigit[i]){
			
			printf("+");

		}
		printf("\n");
	}
}*/



/*
#include <stdio.h>


int main () {

	int  c, size;
	int ndigit[2];

	c = 0;
	size = 0;

	for (int i = 0; i < 3; ++i)
	{
		ndigit[i] = 0;
	}

	//printf("%lu\n", (sizeof(ndigit)));

	while((c = getchar()) != EOF){

		if(c == '0') {
			++ndigit[0];
		}
		if(c == '1') {
			++ndigit[1];
		}
		if(c == '2') {
			++ndigit[2];
		}
	}



	for(;ndigit[0] != 0; --ndigit[0]){
		printf("+");
		 
	}

	printf("\n");

	for(;ndigit[1] != 0; --ndigit[1]){
		printf("+");
		 
	}
	printf("\n");

	for(;ndigit[2] != 0; --ndigit[2]){
		printf("+");
		 
	}
	
	printf("\n");

	printf("0 = %d\n", ndigit[0]);
	printf("1 = %d\n", ndigit[1]);
	printf("2 = %d\n", ndigit[2]);

	return 1;

}
*/

/*
#include <stdio.h>

int main () 
{

	int c, count; 
	int ndigit[10];

	for (int i = 0; i < 10; ++i)
	{
		ndigit[i] = 0;
	}

	while ((c = getchar()) != EOF)
	{
				
	for(int i = 0; i < 11; ++i){
		if (c == (48 + i))
			++ndigit[i];
	}
			
	}

	for (int i = 0; i < 10; ++i)
	{
		for (;ndigit[i] > 0; --ndigit[i]){
			printf("+"); 
		}
		printf("\n");
	}
}
*/

/*
	int c, i, nwhite, nother;
	int ndigit[10];

	nwhite = nother = 0;
	for (int i = 0; i < 10; ++i)
	{
		ndigit[i] = 0;
	}

	while ((c = getchar()) != EOF)
	{
		if (c >= '0' && c <= '9'){
			++ndigit[c - '0'];
		} else if (c == ' ' || c == '\n' || c == '\t'){
			++nwhite;
		} else {
			++nother;
		}
	}

	printf ("digits =");
	for (i = 0; i < 10; ++i) {
		printf	(" %d", ndigit[i]);
	}
	printf(", white space = %d, other = %d\n", nwhite, nother);
}
*/

/*
#include <stdio.h>

int main ()
{
	double nc;

	for (nc = 0; getchar() != EOF; ++nc);
		
	printf("\n");
	//printf("%.0f\n", nc);
	printf("%.0f\n", nc);
}
*/

/*
#include <stdio.h>

int main () 
{
	long nc;

	nc = 0;
	while (getchar() != EOF)
		++nc;

	--nc;
	printf("%ld\n", nc);
}
*/


/*
#include <stdio.h>

int main ()
{

	printf ("EOF = %d\n", EOF);
}
*/

/*

#include <stdio.h>

int main () 
{
	int c;
	int x;

	c = getchar() != EOF;
		if (c == 1){
			printf ("1\n");
		} else {
			printf ("0\n");
		}


	}

		//printf("%d\n", c); // DOOOOONNNNN'T WORK !!!!!
*/	




/*
#include <stdio.h>

void main ()
{
	int c;

	c = getchar();
	while (c != EOF){
		putchar (c);
		c = getchar();
	}
}
*/

/*
#include <stdio.h>

#define LOWER 0 	// Botton border of range
#define UPPER 300 	// Top border of range
#define STEP 20 	// Step size

int main ()
{
	int fahr;

	for(fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
		printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr -32));
}
*/




/* #include <stdio.h>

int main()
{
	int fahr;

	for (fahr = 300; fahr >= 0; fahr = fahr - 20)
		printf ("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
*/




/*
#include <stdio.h>

/* Output temperature table with celsius and fahrenheit*/ 

/*
int main () 
{
	float fahr, celsius, step;
	int lower, upper;

	lower = -17;  //bottom border of temperature in table
	upper = 148;  /* top border */
// 	step = 20;	/*step length*/

/*	celsius = lower;

	printf("Fahrenheit to Celsius conversion\n");

	while (celsius <= upper) {
		//celsius = 5 * (fahr - 32) / 9;
		fahr = ((celsius/5.0)*9.0) + 32.0;
		//celsius = (5.0/9.0) * (fahr - 32.0);
		printf ("%3.0f \t %6.1f \n", celsius, fahr);
		celsius = celsius + step;
		}
}
*/

/* #include <stdio.h>

/* Output temperature table with fahrenheit and celsius */ 
/*
int main () 
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;  //bottom border of temperature in table
	upper = 300;  /* top border */
/*	step = 20;	/*step length*/

/*	fahr = lower;

	printf("Fahrenheit to Celsius conversion\n");

	while (fahr <= upper) {
		//celsius = 5 * (fahr - 32) / 9;
		celsius = (5.0/9.0) * (fahr - 32.0);
		printf ("%3.0f \t %6.1f \n", fahr, celsius);
		fahr = fahr + step;
		}
}
*/


/* 
#include <stdio.h>

int main()
{
	printf("hello, \t");
	printf("world\b");
	printf("\"   \" \\ \n");
}
*/

/*
#include <stdio.h>

int main() 
{
	printf("hello, world!\n");
}
*/