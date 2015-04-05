#include <iostream>
#include <map>
using namespace std;

struct SSpk
{
	unsigned long long t;
	int ws;
	SSpk *next;
};
unsigned long long insert(SSpk *&head,unsigned long long tin, long tob);

int main()
{
	SSpk *head=NULL,*curr=NULL;
	int n,k;
	cin>>n>>k;
	long *tin=new long[n];
	long *tob=new long[n];
	for(int i=0;i<n;i++) cin>>tin[i]>>tob[i];
	int j=0, wknsrvr=0;
	while(j<n)
	{
		if(head==NULL)
		{
			head=new SSpk;
			head->next=NULL;
			head->t=tin[j]+tob[j];
			cout<<head->t<<endl;
			head->ws=1;
			wknsrvr++;
			curr=head;
		}
		else if(tin[j]>=head->t)
		{
			head->t=tob[j]+tin[j];
			cout<<head->t<<endl;
		}
		else if(tin[j]<head->t&&wknsrvr<k)
		{
			cout<<insert(head,tin[j],tob[j])<<endl;
			wknsrvr++;
		}
		else if(tin[j]<head->t&&wknsrvr>=k)
		{
			//cout<<"head="<<head->t<<endl;
			if(head->ws==1)
			{
				cout<<insert(head,head->t,tob[j])<<endl;
				head=head->next;
			}
			else if(head->ws>1)
			{
				head->ws--;
				cout<<insert(head,tin[j],tob[j])<<endl;
			}
		}
		j++;
	}
	return 0;
} 

unsigned long long insert(SSpk *&head, unsigned long long tin, long tob)
{
	SSpk *curr=head;//->next;
	//cout<<"tin="<<tin<<", tob="<<tob<<endl;
	unsigned long long a=tin+tob;
	//cout<<"a="<<a<<endl;
	SSpk *currprev=curr;
	while(curr)
	{
		if(a<head->t)
		{
			SSpk *vst=new SSpk;
			vst->t=a;
			vst->ws=1;
			vst->next=head;
			head=vst;
			return a;
		}
		if(curr->t==a)
		{
			curr->ws++;
			return a;
		}
		if(curr->t>a)
		{
			SSpk *vst=new SSpk;
			vst->t=a;
			vst->ws=1;
			vst->next=curr;
			currprev->next=vst;
			currprev=currprev->next;
			return a;
		}
		if(curr->next==NULL)
		{
			curr->next=new SSpk;
			curr->next->t=a;
			curr->next->ws=1;
			curr->next->next=NULL;
			return a;
		}
		currprev=curr;
		curr=curr->next;
	}	
	return -1;
}


/*
	if(curr==NULL)
	{
		if(a>head->t)
		{
			head->next=new SSpk;
			head->next->t=a;
			head->next->next=NULL;
			head->next->ws=1;
			return a;
		}
		if(a==head->t)
		{
			head->ws++;
			return a;
		}
		if(a<head->t)
		{
			SSpk *vst=new SSpk;
			vst->t=a;
			vst->ws=1;
			vst->next=head;
			head=vst;
			return a;
		}
	}
	SSpk *currprev=head;
	while(curr)
	{
		if(curr->t==a)
		{
			curr->ws++;
			return a;
		}
		if(curr->t>a)
		{
			SSpk *vst=new SSpk;
			vst->t=a;
			vst->ws=1;
			vst->next=curr;
			currprev->next=vst;
			currprev=currprev->next;
			return a;
		}
		if(curr->next==NULL)
		{
			curr->next=new SSpk;
			curr->next->t=a;
			curr->next->ws=1;
			curr->next->next=NULL;
			return a;
		}
		curr=curr->next;
		currprev=currprev->next;
	}*/
