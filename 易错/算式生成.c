#include <stdio.h>
typedef struct 
{
	int a;
	int b;
	int signal;
}Formula;


char formula[200];

Formula Check_Signal(char* a , Formula b);
int compute_length(int a , int b , int Mode);


#define ADD 97
#define MUL 99
#define MINUS 98 

int main()
{
	int n;
	scanf("%d" , &n);
	while(getchar() != '\n');
	Formula a;
	while (n--)
	{
		
		scanf("%[^\n]" , formula);
		while(getchar() != '\n');
	    a = Check_Signal(formula , a);
		if (a.signal == ADD)
		{
			printf("%d+%d=%d\n" , a.a , a.b , a.a+a.b);
			printf("%d\n" , compute_length(a.a , a.b , ADD));
		}
		else if (a.signal == MUL)
		{
			printf("%d*%d=%d\n" , a.a , a.b , a.a*a.b);
			printf("%d\n" , compute_length(a.a , a.b , MUL));
		}
		else if (a.signal == MINUS)
		{
			printf("%d-%d=%d\n" , a.a , a.b , a.a-a.b);
			printf("%d\n" , compute_length(a.a , a.b , MINUS));
		}
	}
	return 0;
}

Formula Check_Signal(char* a , Formula b)
{
	Formula f;
	int flag = 0 , cnt , num = 0;;
	if (a[0] == 97)      
	{
		f.signal = ADD;
		flag = 1;
	}
	else if (a[0] == 98)
	{
		f.signal = MINUS;
		flag = 1;
	}
	else if (a[0] == 99) 
	{
		f.signal = MUL;
		flag = 1;
	}
	else f.signal = b.signal;

	if(flag) cnt = 2;
	else     cnt = 0;

	while(a[cnt] != ' '){
		num = num*10 + (a[cnt]-'0') ;
		cnt++;
	}
	f.a = num;
	num = 0;
	cnt++;
	while (a[cnt] != 0)
	{
		num = num*10 + (a[cnt]-'0') ;
		cnt++;
	}
	f.b = num;
	return f;
}

int compute_length(int a , int b , int Mode)
{
	int cnt = 2;
	int temp = a;
	do{
		cnt++;
	}while(temp/=10);

		temp = b;
	do{
		cnt++;
	}while(temp/=10);

	if(Mode == ADD){
		int c = a + b;
		do{
		cnt++;
	}while(c/=10);
	}
	else if(Mode == MINUS)
	{
		if(a < b) cnt++;
		int c = a-b;
		do{
		cnt++;
	}while(c/=10);
	}
	else if(Mode == MUL)
	{
		int c = a*b;
		do{
		cnt++;
	}while(c/=10);
	}
	return cnt;
}

//问题总结
//1.scanf("%[^\n]" , &<char*>); %[^\n]实现含空格的输入 %[^\n](读到换行符为止)
//2.%[^\n]和%s均不会将末尾的'\n'读入字符串 ， 而他们会在末尾读入一个 \0 , printf%s读取时会读到\0为止
//3.'\0'(空字符) ASCII：0 '\n'(换行符) ASCII：10 ， ' '（空格） ASCII：32
//4.清空缓冲区： while(getchar() != '\n')
//5.获取整型a的位数     注意：！！最好使用temp替换a的值，否则难以意识到你实际上更改了a的值
// int cnt = 0 ;
// do{
// 	cnt++;
// }while(a/=0);
