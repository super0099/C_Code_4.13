#include <stdio.h>
/*����������*/
//int main() {
//	float f = 5.5;
//	//101.1
//	//S = 0
//	//M = 1.011
//	//E = 2^2
//	//��S = 0
//	//��M = 011
//	//��E = 1000 0001
//	//0100 0000 1011 0000 0000 0000 0000 0000
//	//ʮ������:0x40b00000
//	printf("%f", f);
//	return 0;
//}

/*����ָ��*/
//����һ������ָ��
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

/*�ߵ͵�ַ,�ʹ�С�˴洢*/
//int main() {
//	int a = 10;//0000 0000 0000 0000 0000 0000 0000 1010
//	//תʮ������:0x0000000a,�����ҷֱ��Ǹߵ���
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

/*ָ��*/
//int main() {
//	char arr[] = "abcdfg";
//	char* pc = &arr;
//	printf("%s\n", arr);//�����%s��ӡ���������ַ���,%p��ӡ����������Ԫ�ص�ַ
//	printf("%s\n", pc);//��Ϊ��Ԫ�ص�ַһ��,���Դ�ӡ�������ַ���Ҳ��һ����
//	printf("%p\n", arr);//��ӡ������Ԫ�صĵ�ַ
//	printf("%p\n", pc);//��ӡ��Ԫ�صĵ�ַ
//	return 0;
//}

/*ָ��*/
//int main() {
//	//ָ��ֻ��4���ֽڿռ�,���������Ǵ��abcdef��Щ,��ֻ���a�ĵ�ַ,������ͬ��
//	char* p = "abcdef";//abcdef�Ǹ������ַ���
//	printf("%c", *p);//�ŵ�Ҳ����Ԫ�ص�ַ
//	printf("%s", p);//��ӡ�����������ַ���
//	return 0;
//}

/*ָ��*/
//int main() {
//	char* p = "abcdef";//�����ַ���,����ͨ��*p������
//	*p = "w";
//	printf("%s", p);
//	return 0;
//}

/*ָ�볣����ָ�����*/
//int main() {
//	char arr1[] = "acbdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef";//�����ᱻϵͳ��Ϊͬһ���Ķ������Բ�����ȥΪֵ���ٿռ�
//	const char* p2 = "abcdef";//�����ᱻϵͳ��Ϊͬһ���Ķ������Բ�����ȥΪֵ���ٿռ�
//	if (p1 == p2) {
//		printf("hehe\n");
//	}
//	else {
//		printf("haha\n");
//	}
//	return 0;
//}

/*ָ������*/
//int main() {
//	int arr[10] = { 0 };//��������
//	char ch[5] = { 0 };//�ַ�����
//	int* parr1[4];//�������ָ�������,��Ϊ����ָ������;
//	char* pch[4];//����ַ�ָ�������,��Ϊ�ַ�ָ������
//	return 0;
//}

/*ָ������*/
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

/*ָ���ά����*/
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


