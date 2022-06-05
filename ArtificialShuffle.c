#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
typedef struct card
{
	int val;
	char CharNum;

}card;
void Mark(card* p)//将被用过的标记为空格
{
    p->CharNum = ' ';
}
void PrintfArr(card* deck, int len)
{
    static int j = 1;
    printf("\nNO.%d:",j);
    for (int i = 0; i < len; i++)
        printf(" %c%2d->",deck[i].CharNum,deck[i].val);
    j++;
}
void My_Copy(card*p1,card*p)
{
    p1->val = p->val;
    p1->CharNum = p->CharNum;
}
void DealCards(card* p1, card* p,int count)
{
    int x = 0;
    int i = 0;
    while (count>0)
    {
        x = rand() % 52;
        if (p[x].CharNum != ' ')
        {
            My_Copy(&p1[i], &p[x]);
            i++;
            Mark(&p[x]);
            count--;
           
        }
    }
}
int main()
{
    int count = 0;
    card deck[] = {{ 1,'C' }, { 2,'C' }, { 3,'C' }, { 4,'C' }, { 5,'C' }, { 6,'C' }, { 7,'C' },
    { 8,'C' }, { 9,'C' }, { 10,'C' }, { 11,'C' }, { 12,'C' }, { 13,'C' },
    { 1,'D' }, { 2,'D' }, { 3,'D' }, { 4,'D' }, { 5,'D' }, { 6,'D' }, { 7,'D' },
    { 8,'D' }, { 9,'D' }, { 10,'D' }, { 11,'D' }, { 12,'D' }, { 13,'D' },
    { 1,'H' }, { 2,'H' }, { 3,'H' }, { 4,'H' }, { 5,'H' }, { 6,'H' }, { 7,'H' },
    { 8,'H' }, { 9,'H' }, { 10,'H' }, { 11,'H' }, { 12,'H' }, { 13,'H' },
    { 1,'S' }, { 2,'S' }, { 3,'S' }, { 4,'S' }, { 5,'S' }, { 6,'S' }, { 7,'S' },
    { 8,'S' }, { 9,'S' }, { 10,'S' }, { 11,'S' }, { 12,'S' }, { 13,'S' }};
    count = (sizeof(deck) / sizeof(deck[0])) / 4;
    srand((int)time(NULL));
    card deck1[13];
    card deck2[13];
    card deck3[13];
    card deck4[13];
    DealCards(deck1, deck, count);
    DealCards(deck2, deck, count);
    DealCards(deck3, deck, count);
    DealCards(deck4, deck, count);
    PrintfArr(deck1, 13);
    PrintfArr(deck2, 13);
    PrintfArr(deck3, 13);
    PrintfArr(deck4, 13);
	return 0;
}