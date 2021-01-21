/* #include <stdio.h>
#include <malloc.h>
typedef struct a 
{
    int base;
    int top;
    int stacksize;
}SqStack;
void Inti(SqStack s);

int main()
{

}
void Init(SqStack s)              //创建一个栈
{
    s.base=( int * )malloc(size*sizeof( int ) );
    s.top=s.base;
    s.stacksize=size;
}
void push( SqStack s,int e)        //在栈内插入一个元素
    if(s.top-s.base>s.stacksize){
        s.base=( int* )realloc( s.base, ( s.stacksize+incresize )*sizeof( int) );
        s.top=s.base+s.stacksize;
        s.stacksize+=incresize;
    }
    *s.top++=e;
}
void pop( SqStack s,int e)         //删除栈内元素，并返回值
{
    if( s.top!=s.base){
        e=*(--s.top );
    }
    cout<<e<<endl;
}
void Print( SqStack *s )            //打印栈内所有的元素
{
    int * temp ;
    temp = s->top;
    while ( temp != s->base){
        temp--;
        printf( "%d "， *temp ) ;
    }
}*/
#include<stdio.h>                              //编写程序，从键盘输入10个数据压入栈中，然后从栈中依次弹出这些数据并输出。
#include<stdlib.h>
#include<time.h>
struct Stack {
    int * Data;                               // 栈的空间
    int Top;                                  // 栈顶变量，为-1时表示空栈
    int Maxsize;                              //栈的最大容量
};

struct Stack* Creat()                          //创建顺序栈
{
    struct Stack*L;
    L=(struct Stack*)malloc(sizeof(struct Stack));
    L->Top=-1;
    L->Maxsize=200;	
    L->Data=(int*)malloc(sizeof(int)*L->Maxsize);
    printf("栈已初始化！\n");
    return L;
}

int Pop(struct Stack*L)                       //后进先出的打印
{
    if(L->Top==-1){
        printf("Stack is empty\n");
    }
    return L->Data[L->Top--];
}

void Push(struct Stack *L,int x)
{
	if(L->Top==L->Maxsize-1){
		printf("Stack is Full\n");
		return;
	}
	L->Data[++L->Top]=x;
}

int main()                                     //主函数
{                        
    struct Stack *L;
    L=Creat();
    int i,k,t;
    for(i=0;i<10;i++){	
        scanf("%d",&t);
        Push(L,t);	
    }
    for(i=0;i<10;i++){	
        k=Pop(L);
        printf("%d ",k);	
    }
    printf("\n");
    return 0;
}