#pragma once
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
#include<time.h>
#include<stdbool.h>
#define R 15
#define C 15
#define Size 5//几子棋
void Initialize(char a[][C]);//初始化棋牌
void PrintfArr(char a[][C]);//打印棋盘
int ComputerMove(char a[][C]);//电脑移动
int HumanMove(char a[][C]);//人类移动
int WhoWin(char a[][C],int x,int y,char ch);//判断输赢
bool IsFull(char a[][C]);//棋盘是否已满