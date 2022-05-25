// #include <iostream>
// using namespace std;
// int HashT[10];

// void insert(int key){
//     int index=key%10;
//     if(HashT[index]==-1){
//         HashT[index]=key;
//     }else{
//      while(HashT[index]!=-1){
//         ++index;
//         if(index>9)
//             index-=10;
//        }
//         HashT[index]=key;
//     }
// }

// void search(int key){
//     int index = key%10;
//     if(HashT[index]==key)
//         cout<<"found "<<index<<endl;
//     else
//         cout<<"not found "<<endl;
// }

// void del(int key){
//     int index = key%10;
//     if(HashT[index]==key)
//         HashT[index]=-1;
// }
// int main()
// {
//     for(int i = 0; i < 10; i++){
//         HashT[i] = -1;
//     }
//     while (true){
//         cout<<"\n ----------- \n";
//                     int roll; 
//             // cin>>roll;
//         int c;cin>>c;
//                 cout<<"\n-------\n";

//         switch (c)
//         {
//         case 1:
//             cin>>roll;
//             insert(roll);
//             for(int i = 0; i < 10; i++)
//             cout<<HashT[i]<<endl;
//             break;
//         case 2:
//             cin>>roll;      
//             search(roll);
//             for(int i = 0; i < 10; i++)
//             cout<<HashT[i]<<endl;
//             break;
//         case 3:
//             cin>>roll;      
//             del(roll);
//             for(int i = 0; i < 10; i++)
//             cout<<HashT[i]<<endl;
//             break;
//         default:
//             break;
//         }
                 
//     }
// }


// ======================================================================================



// #include <bits/stdc++.h>
// using namespace std;
 
// int sum(int freq[], int i, int j){
//     int s=0;
//     for(int k=i;k<=j; k++)
//         s+=freq[k];
//     return s;
// } 
// int ocost(int freq[], int i, int j){
//     if(i>j)
//         return 0;
//     if(i==j);
//         return freq[i];
//     int fsum = sum(freq,i,j);
//     int min = INT_MAX;
//     for(int r=i;r<=j;r++){
//         int cost=ocost(freq,i, r-1)+ocost(freq, r+1,j);
//         if(cost<min)
//             min=cost;
//     }
//     return min+fsum;
// }

// int obst(int keys[], int freq[], int n){
//     return  ocost(freq, 0,n-1);
// }

// int main(){
//  int keys[]={10,12,20};
//  int freq[]={34,8,50};
//  int n=3;
//  cout<<obst(keys,freq, n);
// }

// ==================================================================================


// #include <bits/stdc++.h>
// using namespace std;
// #define V 9

// int mind(int dist[], bool sptset[]){
//     int min =INT_MAX, min_index;
//     for(int v=0;v<V;v++)
//         if(sptset[v]==false && dist[v]<=min)
//             min=dist[v], min_index=v;
//     return min_index;
// }

// void print(int dist[]){
//     cout<<"vertex   distance form source"<<endl;
//     for(int i=0;i<V;i++) 
//         cout<<i<<"    \t"<<dist[i]<<endl;
// }
// void dijkstra(int graph[V][V], int src){
//     int dist[V];
//     bool sptset[V];
//     for(int i=0;i<V;i++)
//         dist[i]=INT_MAX, sptset[i]=false;
//     dist[src]=0;
//     for (int i = 0;i < V-1;i++){
//         int u = mind(dist,sptset);
//         sptset[u]=true;
//         for(int v=0;v<V;v++){
//             if(!sptset[v]&&graph[u][v]&&dist[u]!=INT_MAX
//                 &&dist[u]+graph[u][v]<dist[v])
//                 dist[v]=dist[u]+graph[u][v];
//         }
//     }
//     print(dist);
// }
// int main(){
//     int graph[V][V] = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 },
// 						{ 4, 0, 8, 0, 0, 0, 0, 11, 0 },
// 						{ 0, 8, 0, 7, 0, 4, 0, 0, 2 },
// 						{ 0, 0, 7, 0, 9, 14, 0, 0, 0 },
// 						{ 0, 0, 0, 9, 0, 10, 0, 0, 0 },
// 						{ 0, 0, 4, 14, 10, 0, 2, 0, 0 },
// 						{ 0, 0, 0, 0, 0, 2, 0, 1, 6 },
// 						{ 8, 11, 0, 0, 0, 0, 1, 0, 7 },
// 						{ 0, 0, 2, 0, 0, 0, 6, 7, 0 } };
// ;
//     dijkstra(graph, 0);
// }

//=======================================================================================


// #include<bits/stdc++.h>
// using namespace std;
// int vis[20001]={0};
// vector<int>arr[20001];
// void bfs(int n)
// {
//     vis[n]=1;
//     queue<int>q;
//     q.push(n);
//     while(!q.empty())
//     {
//         int a=q.front();
//         // vis[a]=1;
//         q.pop();
//         cout<<a<<" ";
//         for(int i=0;i<arr[a].size();i++)
//         {
//             if(vis[arr[a][i]]==0)
//             {q.push(arr[a][i]);
//                 vis[arr[a][i]]=1;
//             }
//         }

//     }

// }
// int main()
// {
//   int n,m;
//   cin>>n>>m;
//   while(m--)
//   {
//       int a,b;
//       cin>>a>>b;
//       arr[a].push_back(b);
//       arr[b].push_back(a);
//   }
//   bfs(1);
// }



// ====================================================================================================


// #include<bits/stdc++.h>
// using namespace std;
// int vis[20001]={0};
// vector<int>arr[20001];
// void dfs(int n)
// {
//     vis[n]=1;
//     cout<<n<<" ";
//     for(int i=0;i<arr[n].size();i++)
//     {
//         if(vis[i]==0)
//         {dfs(arr[n][i]);}
//     }
// }
// int main()
// {
//   int n,m;
//   cin>>n>>m;
//   while(m--)
//   {
//       int a,b;
//       cin>>a>>b;
//       arr[a].push_back(b);
//       arr[b].push_back(a);
//   }
//   dfs(1);
// }

//=======================================================================================================
// #include <bits/stdc++.h>
// using namespace std;
// struct Node{
//     int freq;
//     char data;
//     Node* left;
//     Node* right;
//     Node(char c, int f, Node* l=NULL, Node* r=NULL){
//         data=c;freq=f;left=l;right=r;
//     }
// };
// struct compare{
//     bool operator()(Node* l, Node* r){
//         return(l->freq, r->freq);}
// };
// void print(struct Node* root, string str){
//     if(!root)
//         return;
//     if(root->data!='$')
//         cout<<root->data<<": "<<str<<"\n";
//     print(root->left, str+"0");
//     print(root->right, str+"1");
// }
// void huffman(char arr[],int freq[],int size){
//     priority_queue<Node*, vector<Node*>, compare> h;
//     for(int i=0;i<size;i++)
//         h.push(new Node(arr[i],freq[i]));
//     while(h.size()>1){
//         Node *l=h.top();h.pop();
//         Node *r=h.top();h.pop();
//         Node *top=new Node('$', l->freq + r->freq, l,r);
//         h.push(top);
//     }
//     print(h.top()," ");
// }
// int main(){
//     char arr[]={ 'a', 'd', 'e', 'f' };
//     int freq[]={ 30, 40, 80, 60 };
//     int size =sizeof(arr);
//     huffman(arr,freq,size);
// }

//===============================================================================================================================

#include<iostream>
#include<string.h>
using namespace std;

class node
{
	public:
	int data;
	node *left,*right;
};

class bst
{
	public:
		node *root;
		bst()
		{
			root=NULL;
		}
		void create(int a);				//THE TREE WILL BE CREATED
		void inorder(node *);				//TREE WILL BE PRINTED IN INORDER
		void preorder(node *);				//TREE WILL BE PRINTED IN PREORDER
		void postorder(node *);				//TREE WILL BE PRINTED IN POSTORDER
		int search(int);				//AN ELEMENT FROM THE TREE WILL BE SEARCH
		int height(node *root);				//HEIGHT OF THE TREE WILL BE DISPLAYED
		
};
void bst :: create(int a)
{
	node *curr;
	curr=new node;
	curr->data=a;
	curr->left=NULL;
	curr->right=NULL;
	{
		if(root==NULL)
			root=curr;
		else
		{
			node *temp;
			temp=root;
			while(1)
			{
				if(temp->data > curr->data)
				{
					if(temp->left==NULL)
					{
						temp->left=curr;
						break;
					}
					
					else
						temp=temp->left;
				}
				
				else
				{
					if(temp->right==NULL)
					{
						temp->right=curr;
						break;
					}
					else
						temp=temp->right;
				}
			}
		}
	}
}
void bst :: inorder(node *curr)
{
	if(curr!=NULL)
	{
		inorder(curr->left);
		cout<<curr->data<<" ";
		inorder(curr->right);
	}
}
void bst :: preorder(node *curr)
{
	if(curr!=NULL)
	{
		cout<<curr->data<<" ";
		inorder(curr->left);
		inorder(curr->right);
	}
}
void bst :: postorder(node *curr)
{
	if(curr!=NULL)
	{
		inorder(curr->left);
		inorder(curr->right);
		cout<<curr->data<<" ";
	}
}
int bst :: search(int key)
{
	node *curr;
	curr=root;
	while(curr!=NULL)
	{
		if(curr->data==key)
			return 1;
		else
		{
			if(key<curr->data)
			{
				curr=curr->left;
			}
			
			else
			{
				curr=curr->right;
			}
		}
	}
	
	return -1;
}
int bst :: height(node *root)
{
	if(root==NULL)
		return 0;
	else
	{
		if (height(root->right) > height(root->left))
		{
			return 1+ height(root->right);
		}
		return 1+ height(root->left);
	}
}
int main()
{
	bst t;							// OBJECT OF CLASS BST
	int ch,data,flag=0,key,ans;
	while(flag==0)
	{
	cout<<"1.CREATE\n2.INORDER DISPLAY\n3.PREORDER DISPLAY\n4.POSTORDER DISPLAY\n5.SEARCH\n6.HEIGHT\n7.EXIT\n";
	cout<<"\nenter your choice :- ";
	cin>>ch;
	switch(ch)
	{
		case 1:
			cout<<"\nEnter the data: ";
			cin>>data;
			t.create(data);				// CALLING CREATE FUNTION 
			break;
		case 2:
			t.inorder(t.root);			//CALLING INORDER FUNCTION
			break;
		case 3:
			t.preorder(t.root);			//CALLING PREORDER FUNCTION
			break;
		case 4:
			t.postorder(t.root);			//CALLING POSTORDER FUNCTION
			break;
		case 5:
			cout<<"\nEnter the element to be Searched: ";
			cin>>key;
			ans=t.search(key);			//CALLING SEATCH FUNCTION
			if(ans==1)
				cout<<"\nElement found";
			else
				cout<<"\nElement NOT found";
			break;
		case 6:
			cout<<"\n\tThe height of the tree is:"<<"\t"<<t.height(t.root);		//CALLING HEIGHT FUNCTION
			break;
		case 7:
			flag=1;					// EXIT COMMAND
			cout<<"\nThank you for executiong the program\n";
			break;
		default:
			cout<<"\nERROR: no such command found";
	}
	}
}
