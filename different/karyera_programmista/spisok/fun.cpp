#include"fun.h"
void SList::insert(int y)
 {
  SSpk *New=new SSpk;
  New->x=y;
  if(head==NULL)
    {
     head=current=New;
     head->prev=NULL; head->next=NULL;
    }  else
            {
               if(current==NULL)
                 {
                  current=New;
                  current->prev=head;
                  current->next=NULL;
                 }
             current=head;while(current->next) current=current->next;
             current->next=New;
             New->prev=current;
             current=New;
             current->next=NULL;
            }
 }
void SList::print(SList *list)
 {
 SSpk *pr=head;
  //list->current=list->head;
  while(pr) {cout<<pr->x<<endl; pr=pr->next;}
 }
void HashTable::put(int x)
 {
  num[k]=x;
  key[k]=x;
  ++k;
 }
int HashTable::containKey(int i)
 {
  int j;
  for(j=0;j<k;j++)
   if(key[j]==i) return 1;
   return 0;
 }
void delDub(SList *list)
 {
   HashTable table;
   list->current=list->head;
   while(list->current->next)
     {
       if(table.containKey(list->current->x)) 
            {
              list->current->next->prev=list->current->prev;
              list->current->prev->next=list->current->next;
            } 
            else    table.put(list->current->x);
       list->current=list->current->next;
     }
 }

SSpk* search(SSpk *head, int k, int &i)
{
    if(head==NULL)return NULL;
    SSpk *huy = search(head->next, k, i);
    i=i+1;
    if(i==k)return head;
    return huy;
}

void musor(SList *list, int x)
{
    int N=0;
    list->current=list->head;
    SSpk* imp = new SSpk;
    
    while(list->current)//цикл для подсчета кол-ва эл-тов списка и для постановки искомого эл-та в конец
    {
	N++;
	if(list->current->x==x)
	{
	    imp = list->current;
            list->current->next->prev=list->current->prev;
            list->current->prev->next=list->current->next;
	}
	if(list->current->next==NULL)
	{
	    list->current->next=imp;
	    imp->prev=list->current;
	    imp->next=NULL;
	    break;
	}
	list->current=list->current->next;
    }
    
    list->current=list->head;
    
    for(int i=0;i<N-1;i++)//основной цикл проги
    {
	if(list->current->x >= x)
	{
	    if(list->current==list->head)
	    {
		list->head=list->head->next;
		list->head->prev=NULL;
		imp->next=list->current;
		imp->next->prev=imp;
		imp=imp->next;
		imp->next=NULL;
	        list->current=list->head;
	    }
	    else
	    {
		list->current->prev->next = list->current->next;
		list->current->next->prev = list->current->prev;
		
		imp->next=list->current;
		imp->next->prev=imp;
		imp=imp->next;
		list->current=list->current->next;
		imp->next=NULL;
	    }
	}
	else
	{
	    list->current=list->current->next;
	}
    }
    return;
}















