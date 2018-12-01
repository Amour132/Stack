#pragma once
#include <stdio.h>
#include <malloc.h>
#include <assert.h>
typedef int DateType;
typedef struct Stack
{
	DateType *a;
	int top; //ջ��
	int capacity; //����
}Stack;
void StackInit(Stack *ps); //��ʼ��ջ
void StackDstory(Stack *ps); //����ջ
void StackPush(Stack *ps, DateType x); //��ջ
void StackPop(Stack *ps); //��ջ
int StackEmpty(Stack *ps); //�ж�ջΪ��
DateType StackTop(Stack *ps); //ջ������
int StackSize(Stack *ps); //ջ��С
void TestStack();