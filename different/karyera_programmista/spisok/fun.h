#include<stdio.h>
#include<iostream>
using namespace std;

struct SSpk
 {
  int x;
  SSpk *next,*prev;
 };

struct SList
 {
  SSpk *head,*current;
  SList(){head=NULL;current=NULL;}
  void insert(int y);
  void print(SList *list);
 };

struct HashTable
 {
  int *key;
  int *num;
  int k;
  HashTable(){key=new int;num=new int;k=0;}
  void put(int x);
  int containKey(int i);
 };

void delDub(SList *list);
SSpk* search(SSpk *head, int k, int &i);
void musor(SList *list, int x);