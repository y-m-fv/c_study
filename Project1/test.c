#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main() {
//	printf("%zu\n", sizeof(char));
//	printf("%zu\n", sizeof(short));
//	printf("%zu\n", sizeof(int));
//	printf("%zu\n", sizeof(long));
//	printf("%zu\n", sizeof(long long));
//	printf("%zu\n", sizeof(float));
//	printf("%zu\n", sizeof(double));
//}
//


////ȫ�ֱ���a
//int a = 1;
//
//int main() {
//	//�ֲ�����a
//	int a = 100;
//	printf("a=%d\n", a);//��ȫ���ھֲ�������ͬʱ���ֲ�����
//}

//int main() {
//    int num1 = 0;
//    int num2 = 0;//��ʼ��
//    scanf("%d %d", &num1, &num2);
//    int sum = num1 + num2;
//    printf("%d\n", sum);
//}




//��������������
//���������ⲿ�ķ���
//extern int a;
//
//void test() {
//	printf("fdksla=%d\n", a);
//}
//int main() {
//	{ printf("a=%d\n", a); }
//	test();
//	printf("a=%d\n", a);
//}

//int main() {
//	const int a = 10;
//	a = 20;
//	printf("%d\n", a);
//}


////#define Max 100
////
////int main() {
////	printf("%d\n", Max);
////	int a = Max;
////	printf("%d\n", a);
////}

////ö�ٳ���
//enum Color
//{
//	RED,GREEN,BLUE
//};
//int main() {
//	enum Color c = RED;
//	printf("%d\n", c);
//	enum Color b = GREEN;
//	printf("%d\n", b);
//}



////int main() {
////	//printf("are you ok??");
////	printf("\a");
////}


//ѡ�����
//int main() {
//	int a = 0;
//	printf("����Ŭ��ѧϰ��yes or no\n");
//	scanf("%d", &a);
//	if (a == 1)
//	{ printf("��offer\n"); }
//	else
//	{
//		printf("�ؼ�������");
//	}
//}




//////////ѭ�����
////////int main() {
////////	int a = 0;
////////	while (a < 100) {
////////		printf("%d ", a);
////////		a++;
////////	}
////////
////////}

//int add(int x, int y) {
//	int s = 0;
//	s = x + y;
//	return s;
//}
////����
//int main() {
//	int a = 0, b = 0, sum = 0;
//	scanf("%d %d", &a, &b);
//	sum = add(a, b);
//	printf("%d", sum);
//}

////////��������
//////int main() {
//////	int arr[5] = {1,2,3,4,5};
//////	/*int i = 0;
//////	while (i < 5)
//////	{
//////		printf("%d ", arr[i]);
//////		i++;
//////	}*/
//////	for (int i = 0; i < 5; i++) {
//////		printf("%d ", arr[i]);
//////	}
//////}


//int main() {
//	int a = 10;
//	int b = a++;//���ã��ȸ�ֵ����++   b=a,a=a+1
//	printf("%d %d\n", a,b);
//	a = 10;
//	b = ++a;//ǰ�ã���ֵ����++   a++,b=a
//	printf("%d %d\n", a, b);
//}

//�ؼ���typedef
//////typedef  unsigned int   uint;
//////
//////int main() {
//////	unsigned int num = 1;
//////	uint num2 = 1;
//////}


////�ؼ���static
//void test() {
//	//�ڴ� a �����������ڲ��ᱻ����
//	static int a = 1;
//	a++; printf("%d ", a);
//}
//int main() {
//	for (int i = 0; i < 10; i++) {
//		test();
//	}
//}


////////#define�����
//////#define add(x,y) ((x)+(y))
//////int main() {
//////	int x = 10, y = 10;
//////	int c = add(x, y);
//////	printf("%d", c);
//////}



////ָ��
//int main() {
//	int a = 10;
//
//	int* p = &a;
//	//�����ò�������ͨ��p�д�ŵĵ�ַ���ҵ�p��ָ�Ķ���
//	*p = 20;
//
//	printf("%d\n", a);
//}


////////ѧ���ṹ��
//////struct stu
//////{
//////	char name[20];
//////	int age;
//////	char sex[10];
//////	char Pnum[12];
//////};
//////void print(struct stu* a) {
//////	printf("%s+%d+%s+%s\n", (*a).name, (*a).age, (*a).sex, (*a).Pnum);
//////	printf("%s %d %s %s\n", a->name,a->age,a->sex,a->Pnum);
//////}
//////int main() {
//////	struct stu s = {"zhangsan",20,"nan","18565852545"};
//////	printf("%s-%d-%s-%s\n", s.name, s.age, s.sex, s.Pnum);
//////	print(&s);
//////	return 0;
//////}


//int main() {
//	int a = 0, b = 0;
//	scanf("%d %d", &a, &b);
//	int c = a / b;
//	int d = a % b;
//	printf("%d %d", c, d);
//}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// ///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//1-100���ڵ�����
////int main() {
////	int a = 0;
////	for (int i = 1; i <= 100; i++) {
////		if (1 == i % 2)
////			printf("%d ", i);
////	}
////}


//////switch���
////int main() {
////	int a = 0;
////	scanf("%d\n", &a);
////	switch (a) {
////	case 1: 
////	case 2: 
////	case 3: 
////	case 4: 
////	case 5: printf("weekday"); break;
////	case 6: 
////	case 7: printf("weekend"); break;
////	}
////	return 0;
////}



////ѭ�����
//int main() {
//	int i = 0;
//	while (i <= 10) {
//		i++;
//		if (5 == i)
//			continue;//��������ѭ��
//		printf("%d ", i);
//		
//	}
//}//��δ���������ѭ��

	//����Ϊʲô��int ����Ϊ��EOF(end of file),��EOF= -1��char�����ܷ�һ���ֽڣ��Ų���-1
	/*int ch = getchar();
	printf("%c\n", ch);
	putchar(ch);*/

	/*int ch = 0;
	while ((ch = getchar()) != EOF) {
		putchar(ch);
	}
	return 0;*/

////	char pw[20] = { 0 };
////	printf("����������:>");
////	//��Ϊ������������ǵ�ַ������&ȡ��ַ
////	scanf("%s", pw);
////
////	/*getchar();*/
////
////	int ch = 0;
////	while ((ch = getchar()) != '\n') {
////		;
////	}
////
////	
////	printf("ȷ�ϵ�ַ��Y/N��:>");
////	int ret = getchar();
////	if (ret == 'Y')
////		printf("YES\n");
////	else
////		printf("NO\n");
////
////	return 0;
////
////}


int main() {
	int i = 0, j = 0;
	for (; i < 3; i++) {
		for (; j < 3; j++) {
			printf("hehe ");
		}
	}
}