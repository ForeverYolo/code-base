//#include <stdio.h>
//int main()
//{
//	int a,b;
//	int max;
//	scanf("%d%d",&a,&b);
//	max = (a>b?a:b);
//	printf("%d\n",max);
//	return 0;
// } 




//#include <stdio.h>
//
//void a()
//{
//static	int b=1;
//	b=++b;
//	printf("%d\n",b);
//}
//int main(){
//
//int i=0;
//while(i<=9){
// a();
// i=++i;
//}
//return 0;
//}


//#include <stdio.h>
//int max(int x,int y)
//{
//	int z=(x>y?x:y);
//	return z;
//}
//#define Bax(x,y) (x>y?x:y)
//int main()
//{
//int a=10;
//int b=20;
////函数
//int c;
//c=max(a,b); 		
//printf("%d\n",c);
////宏
//int d;
//d=Bax(a,b);
//printf("%d\n",d);
//return 0;	
//}







//
//#include <stdio.h>
//int main(){
//int a = 10;
//int* p;
//printf("%p\n",&a);
//p=&a;
//printf("%p\n",p);
//*p=20;
//printf("%d\n",a);
//return 0;
//}




//#include <stdio.h> 
//int main()
//{
//printf("\"\\(^_^ )/\"");
//return 0;
//}


//
//#include <stdio.h> 
//int main()
//{
//	printf("? *&\\! _//\\a@\\\\\\r\\n! //\\\\\"_\"/\\\\^! ~zZ");
//	return 0;
//}



//#include <stdio.h> 
//int Cpp(int x,int y)
//{
//	int z = x/y;
//	if(x%y==0)
//	z=z;
//	else
//	z=z+1;
//	return z;
//}
//
//int main(){
//	int a,b,c;
//	scanf("%d%d",&a,&b);
//	c=Cpp(a,b);
//	printf("%d\n",c);
//	return 0;
//	
//	 
//}

//
//#include <stdio.h> 
//double money(double x,double y)
//{
//	double z =x*(1+y/100);
//	return z;
//}
//int main()
//{
//double a,c,b;
//scanf("%lf%lf",&a,&c);
//b=money(a,c);
//printf("%.2lf",b);	
//return 0;
//}
//


//#include <stdio.h> 
//#define average(x,y,z) ((x+y+z)/3)
//int main()
//{
//float a,b,c,d;
//scanf("%f%f%f",&a,&b,&c);
//d=average(a,b,c);
//printf("%.1f",d);
//return 0;
//}


//#include <stdio.h> 
//#define area(a,b) (3.14*a*a*2+3.14*2*a*b)
//int main()
//{
//double a,b,c;
//scanf("%lf%lf",&a,&b) ;
//c=area(a,b);
//printf("Area = %.3lf",c);
//return 0;
//}
		
//#include <stdio.h> 
//int main()
//{
// unsigned long long a,b;
//scanf("%lld",&a);
//a=a*3+1;
//b=a%100000007;
//printf("%lld",b);
//return 0;	
//}


//#include <stdio.h>
//int main()
//{
//	int num,a,b,c,d;
//	double e=0.1;
//	scanf("%d",&num);
//	c=10;
//	a=1;
//    d=0;
//	while(num*10/c>=1)
//	{
//	b=(num*10/c)%10;
//	d=d+a*b;
//	a=++a;
//	c=c*10;
//	}
//	printf("%d",d);
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	int num,a,b,c,d,e,i,g,l;
//	scanf("%d",&num);
//	c=10;
//	a=1;
//    d=0;
//    e=10000;
//    l=10000;
//    i=0;
//	while(a<5)
//	{
//	b=(num*10/c)%10;
//	a=++a;
//	c=c*10;
//	d=b*e/10+d;
//	e=e/10;
//	}
//	while(a>=5&&num*10/c>=1)
//	{
//	b=(num*10/c)%10;
//	g=b*c/10+g;
//	a=++a;
//	c=c*10;
//	}
//	g=g+d;
//	printf("%d",g);
	 
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	int num,a,b,c,d,e;
//	scanf("%d",&num);
//	c=10;
//	a=2;
//    d=0;
//	while(num*10/c>=1)
//	{
//	b=(num*10/c)%10;
//	d=d+a*b;
//	a=++a;
//	c=c*10;
//	}
//	e=d%10;
//	num=num*10;
//	num=num+e;
//	printf("%d",num);
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//int x,y,z;
//scanf("%d",&x);
//y=x%7;
//if(y==0){
//printf("g\n");
//}
//else
//{z=0;}
//if(y==1){
//printf("a\n");
//}
//else
//{z=0;}
//if(y==2){
//printf("b\n");
//}
//else
//{z=0;}
//if(y==3){
//printf("c\n");
//}
//else
//{z=0;}
//if(y==4){
//printf("d\n");
//}
//else
//{z=0;}
//if(y==5){
//printf("e\n");
//}
//else
//{z=0;}
//if(y==6){
//printf("f\n");
//}
//else
//{z=0;}
//return 0;
//}

//#include <stdio.h>
//int main()
//{
//int a,b,c,d,e,i;
//i=0;
//scanf("%d",&e);
//while(e<=9999&&i<1){
//a=e%10;
//b=(e/10)%10;
//c=(e/100)%10;
//d=(e/1000)%10;
//if((b*10+a)*(b*10+a)+(d*10+c)*(d*10+c)==e){
//printf("%d\n",e);
//i=++i;
//e=e+1;
//}
//else
//e=e+1;
//}
//if(i==0)
//printf("-1");
//else
//i=i;
//return 0;
//}

//
//#include <stdio.h>
//int main(){
//double a,b,c;
//scanf("%lf/%lf",&a,&b);
//c=a/b;
//printf("%.2lf",c);
//return 0;
//}



//#include <stdio.h>
//int main(){
//int a,b,c,d,i,e,f,g,h,k,w0,w1,w2,w3,z,q,t,m,n;
//scanf("%d",&e); 
//i=1;
//while(i<=e)	{
// scanf("%d%d%d%d%d%d",&a,&b,&w0,&w1,&w2,&w3);
// h=2;
// q=a;
// t=b;
// while (q/2!=0&&t/2!=0){
// f=q%2;
// q=q/2;
// g=t%2;
// t=t/2;
// if(f==1&&g==0)
// k=w2 * h + k ;
// else
// z=0;
// if(f==1&&g==1)
// k=w3 * h + k;
// else
// z=0;
// if(f==0&&g==1)
// k=w1 *h + k;
// else
// z=0;
// if(f==0&&g==0)
// k=w0 * h + k;
// else
// z=0;
// h=h*2;
//}
//  while(q/2!=0&&t/2==0){
//  m=q%2;
//  q=q/2;
//  if(m==1)
//  k=w2 * h + k;
//  else
//  k=w0*h+k;
//  h=h*2;
//  }
//  while(q/2==0&&t/2!=0){
//  n=t%2;
//  t=t/2;
//  if(n==1)
//  k=w2 * h + k;
//  else
//  k=w0*h+k;
//  h=h*2;
//  }
//  printf("%d",k);
//  i=i+1;
//}
//return 0;
//}


//#include <stdio.h>
//int main(){
//	long long a,b,w0,w1,w2,w3,c,d,i,k,h,l,e;
//    scanf("%lld",&e);
//	l=0;
//while(l<e){
//	k=0;
//	i=1;
//	h=1;
//	scanf("%lld%lld%lld%lld%lld%lld",&a,&b,&w0,&w1,&w2,&w3);
//	w0=0;
//	while(i<=32){
//	c=a&1;
//	d=b&1;
//		if(c==0&&d==0)
//		{k=k+w0*h;}
//		if(c==1&&d==0)
//		{k=k+w2*h;}
//		if(c==1&&d==1)
//		{k=k+w3*h;}
//		if(c==0&&d==1)
//		{k=k+w1*h;}
//	a=a>>1;
//	b=b>>1;
//	i=++i;
//	h=h*2;
//}
//    printf("%lld\n",k);
//    l=++l;
//}
//return 0;
//}


//#include <stdio.h>
//int main(){
//int a;
//scanf("%d",&a);
//switch(a){
//  case 1:
//  printf("星期一\n") ;
//  break;
//  case 2:
//  printf("星期二\n") ;
//  break;
//  case 3:
//  printf("星期三\n") ;
//  break;
//  case 4:
//  printf("星期四\n") ;
//  break;
//  case 5:
//  printf("星期五\n") ;
//  break;
//  case 6:
//  printf("星期六\n") ;
//  break;
//  case 7:
//  printf("星期日\n") ;
//  break;
//  }
//return 0;
//}


//
//#include <stdio.h>
//int main(){
//int a;
//scanf("%d",&a);
//switch(a){
//  case 1:
//  case 2:
//  case 3:
//  case 4:
//  case 5:
//  printf("工作日\n") ;
//  break;
//  case 6:
//  case 7: 
//  printf("星期日\n") ;
//  break;
//  }
//return 0;
//}

//#include <stdio.h>
//int main()
//{
//int ch;
//while((ch = getchar()) != EOF) {
//	if (ch < 0 || ch > 60)
//	 continue;
//	putchar(ch);
//}
//return 0;
//}



//#include <stdio.h>
//int main(){
//	int arr[100000];
//	int i;
//	for(i=0;i<100000;i++) {
//		arr[i]=i+1;
//	}
//	int k;
//	scanf("%d",&k);
//	int az=sizeof(arr)/sizeof(arr[0]);
//	int left=0;
//	int right=az-1;
//	while(left<=right)
//	{
//	int mid=(left+right)/2;
//	if(mid<k)
//	left=mid+1;
//	else if(mid>k)
//	right=mid-1;
//	else
//	{
//	printf("找到了，下标为%d\n",mid-1);
//	break;	
//	}
//	}
//	if(left>right){
//	printf("找不到\n");
//    } 
//    return 0;
//}




//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//#include <stdlib.h>
//
//
//int main()
//{
//char arr1[]= "welcome to Juan to Die Buaa";
//char arr2[]= "###########################";
//int a=0;
//int b=strlen(arr1)-1;
//while(a<=b){
//printf("%s\n",arr2);
//arr2[a]=arr1[a];
//arr2[b]=arr1[b];
//a=++a;
//b=--b;
//Sleep(500);
//system("cls");
//}
//printf("%s\n",arr1);
//return 0;
//}



//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//int main()
//{
//char a[20]={0};
//int i = 0;
//int num = 3;
//for(i=0;i<3;i++)
//{
//printf("请输入密码:\n");
//scanf("%s",a);
//    if(strcmp(a,"abcdef") == 0)
//    {
//    printf("密码正确！");
//    break;
//    } 
//    else
//    {
//    num=num-1;
//    system("cls");
//    printf("密码错误，重新输入，你还有%d次机会\n",num);
//    }
//}
//if(i==3)
//printf("错误达三次，你没机会了！");
//return 0; 
//}


//#include <stdio.h>
//int main()
//{
//int arr[]={1,2,3,4,5,6};
//int arr2[6];
//int a,b,c,d,i;
//d=0;
//i=0;
//while(d<=5)
//{
//scanf("%d",&arr2[d]);
//d=d+1;
//}
//for(a=0;a<=5;a++)
//{
//c=arr[a];
//b=arr2[a];
// if(b==c) 
// {
// printf("*");
// i=i+1 ;
// }
//}
//if(i==0)
//printf("Sorry!Unlucky!"); 
//return 0;
//}

//
//#include <string.h>
//#include <stdio.h>
//int main()
//{
//char arr[]= "Hello World";
//memset(arr,'*',5);
//printf("%s",arr);
//return 0;
//}





//#include <stdio.h>
//void swap(int* pa,int* pb)
//{
//  int tmp =0;
//  tmp = *pa;
//  *pa=*pb;
//  *pb=tmp;
//}
//
//int main()
//{
//int a=10;
//int b=20;
//printf("a=%d b=%d\n",a,b); 
//swap(&a,&b);
//printf("a=%d b=%d\n",a,b); 
//return 0;
//}
