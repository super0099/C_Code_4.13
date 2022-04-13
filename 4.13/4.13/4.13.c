#include <stdio.h>
/*浮点数储存*/
//int main() {
//	float f = 5.5;
//	//101.1
//	//S = 0
//	//M = 1.011
//	//E = 2^2
//	//存S = 0
//	//存M = 011
//	//存E = 1000 0001
//	//0100 0000 1011 0000 0000 0000 0000 0000
//	//十六进制:0x40b00000
//	printf("%f", f);
//	return 0;
//}

/*函数指针*/
//声明一个函数指针
//typedef void (*Fu_p)(int);
//void shows(int a) {
//	printf("%d\n", a);
//}
//int main() {
//	int a = 30;
//	Fu_p test = NULL;
//	printf("%p\n", shows);
//	test = &shows;
//	printf("%p\n", shows);
//}

/*高低地址,和大小端存储*/
//int main() {
//	int a = 10;//0000 0000 0000 0000 0000 0000 0000 1010
//	//转十六进制:0x0000000a,从左到右分别是高到低
//	int b = a << 2;
//	//0000 0000 0000 0000 0000 0000 0010 1000
//	//0x00000028
//	printf("%d\n", b);
//	int c = b << 2;
//	//0000 0000 0000 0000 0000 0000 1010 0000
//	//0x000000a0
//	printf("%d\n", c);
//	return 0;
//}

/*指针*/
//int main() {
//	char arr[] = "abcdfg";
//	char* pc = &arr;
//	printf("%s\n", arr);//如果是%s打印的是整个字符串,%p打印的是数组首元素地址
//	printf("%s\n", pc);//因为首元素地址一致,所以打印出来的字符串也是一样的
//	printf("%p\n", arr);//打印数组首元素的地址
//	printf("%p\n", pc);//打印首元素的地址
//	return 0;
//}

/*指针*/
//int main() {
//	//指针只有4个字节空间,所以它不是存放abcdef这些,它只存放a的地址,和数组同理
//	char* p = "abcdef";//abcdef是个常量字符串
//	printf("%c", *p);//放的也是首元素地址
//	printf("%s", p);//打印出来的整个字符串
//	return 0;
//}

/*指针*/
//int main() {
//	char* p = "abcdef";//常量字符串,不能通过*p来更改
//	*p = "w";
//	printf("%s", p);
//	return 0;
//}

/*指针常量和指针变量*/
//int main() {
//	char arr1[] = "acbdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef";//常量会被系统认为同一样的东西所以不会再去为值开辟空间
//	const char* p2 = "abcdef";//常量会被系统认为同一样的东西所以不会再去为值开辟空间
//	if (p1 == p2) {
//		printf("hehe\n");
//	}
//	else {
//		printf("haha\n");
//	}
//	return 0;
//}

/*指针数组*/
//int main() {
//	int arr[10] = { 0 };//整型数组
//	char ch[5] = { 0 };//字符数组
//	int* parr1[4];//存放整型指针的数组,称为整型指针数组;
//	char* pch[4];//存放字符指针的数组,称为字符指针数组
//	return 0;
//}

/*指针数组*/
//int main() {
//	int a = 10;
//	int b = 15;
//	int c = 20;
//	int d = 25;
//	int* arr[4] = { &a,&b,&c,&d };
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%p\n", arr[i]);
//	}
//}

/*指针二维数组*/
int main() {
	int arr1[5] = { 1,2,3,4,5 };
	int arr2[5] = { 2,3,4,5,6 };
	int arr3[5] = { 3,4,5,6,7 };
	int* arr4[3] = { arr1,arr2,arr3 };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d,", *(arr4[i] + j));
		}
		printf("\n");
	}
	return 0;
}


