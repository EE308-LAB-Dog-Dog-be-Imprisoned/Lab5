#include <stdio.h>
#include <stdlib.h>
#include<bits/stdc++.h>

//����ԭ��
int getChoice();
void showMenu();
void doExercise(int);
int test(int);

/*
	���ܣ��û�ѡ����
	���أ��û��Ĺ���ѡ��
	1���ӷ�		2������		3���˷�		4������		0���˳�
*/
int getChoice()
{
	int choice;
	scanf("%d",&choice);
	return choice;
}

