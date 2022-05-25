// //ass 1
// // linear


// #include <iostream>
// using namespace std;
// int HashT[10];

// void Insertion(int roll){
//     int index = roll%10;
//     if(HashT[index] == -1 || HashT[index] == 0){
//         HashT[index] = roll;
//     }
//     else{
//         while(HashT[index] != -1 || HashT[index] != 0){
//             index++;
//             if(index > 9){
//                 index-=10;
//             }
//         }
//         HashT[index] = roll;
//     }
// }

// void Searching(int roll){
//     int index = roll%10;
//     bool flag = 0;
//     if(HashT[index] == roll){
//         flag = 1;
//     }
//     else{
//         while(HashT[++index] != -1){
//             if(HashT[index] == roll){
//                 flag = 1;
//                 break;
//             }
//         }
//     }
//     if(flag){
//         cout<<"Roll Number at Index : "<<index<<endl;
//     }
//     else{
//         cout<<"Roll Number Not Found"<<endl; 
//     }
// }

// void Deletion(int roll){
//     int index = roll%10;
//     bool flag = 0;
//     if(HashT[index] == roll){
//         flag = 1;
//     }
//     else{
//         while(HashT[++index] != -1){
//             if(HashT[index] == roll){
//                 flag = 1;
//                 break;
//             }
//         }
//     }
//     if(flag){
//         HashT[index] = 0;
//         cout<<"Roll Number is Deleted"<<endl;
//     }
//     else{
//         cout<<"Roll Number Not Found"<<endl;
//     }
// }

// int main()
// {
//     for(int i = 0; i < 10; i++){
//         HashT[i] = -1;
//     }
//     int choice;
//     char ch;
//     int roll;
//     do{
//         cout<<"1. Insert Student"
//             <<"\n2. Search Student"
//             <<"\n3. Delete Student"<<endl;
//         cout<<"Enter Your Choice : ";
//         cin>>choice;
//         for(int i = 0; i < 10; i++){
//                 cout<<HashT[i]<<endl;
//         }
//         switch(choice){
//             case 1:cout<<"Enter Roll Number : ";
//                 cin>>roll;
//                 Insertion(roll);
//                 for(int i = 0; i < 10; i++){
//                     cout<<HashT[i]<<endl;
//                 }
//                 break;
//             case 2:cout<<"Enter Roll Number : ";
//                 cin>>roll;
//                 Searching(roll);
//                 break;
//             case 3:cout<<"Enter Roll Number : ";
//                 cin>>roll;
//                 Deletion(roll);
//                 break;
//         }
//         cout<<"Do you want to continue?(Y/N)"<<endl;
//         cin>>ch;
//     }while(ch == 'Y' || ch == 'y');

//     return 0;
// }


// //ass1
// //with replacement

// #include <iostream>
// using namespace std;
// int HashT[10][2];

// void Insertion(int roll){
//     int index = roll%10;
//     if(HashT[index][0] == -1){
//         HashT[index][0] = roll;
//     }
//     else{
//         if((HashT[index][0]%10) == index){
//             while(HashT[index][0] != -1){
//                 index++;
//                 if(index > 9){
//                     index-=10;
//                 }
//             }
//             HashT[index][0] = roll;
//             int i = index-1;
//             if(i < 0){
//                 i = 10-i;
//             }
//             for(; HashT[i][0] != -1; i--){
//                 if(i < 0){
//                     i = 11-i;
//                 }
//                 if(roll%10 == (HashT[i][0]%10)){
//                     HashT[i][1] = index;
//                     break;
//                 }
//             }
//         }
//         else{
//             int temp = HashT[index][0];
//             int tempP = HashT[index][1];
//             int position = index;
//             HashT[index][0] = roll;
//             HashT[index][1] = -1;
//             position++;
//             while(HashT[position][0] != -1){
//                 position++;
//                 if(position > 9){
//                     position-=10;
//                 }
//             }
//             HashT[position][0] = temp;
//             HashT[position][1] = tempP;
//             int i = position-1;
//             if(i < 0){
//                 i = 10-i;
//             }
//             for(; HashT[i][0] != -1; i--){
//                 if(i < 0){
//                     i = 11-i;
//                 }
//                 if(temp%10 == (HashT[i][0]%10)){
//                     if(HashT[i][1] != -1){
//                         HashT[i][1] = position;
//                         break;
//                     }
//                 }

//             }
//         }
//     }
// }

// void Searching(int roll){
//     int index = roll%10;
//     bool flag = 0;
//     if(HashT[index][0] == roll){
//         flag = 1;
//     }
//     else{
//         while(true){
//             index = HashT[index][1];
//             if(HashT[index][0] == roll){
//                 flag = 1;
//                 break;
//             }
//         }
//     }
//     if(flag){
//         cout<<"Roll Number at Index : "<<index<<endl;
//     }
//     else{
//         cout<<"Roll Number Not Found"<<endl;
//     }
// }

// int main()
// {
//     for(int i = 0; i < 10; i++){
//         HashT[i][0] = HashT[i][1] = -1;
//     }
//     int choice;
//     char ch;
//     int roll;
//     do{
//         cout<<"1. Insert Student"
//             <<"\n2. Search Student"<<endl;
//         cout<<"Enter Your Choice : ";
//         cin>>choice;
//         for(int i = 0; i < 10; i++){
//                 cout<<HashT[i][0]<<" "<<HashT[i][1]<<endl;
//         }
//         switch(choice){
//             case 1:cout<<"Enter Roll Number : ";
//                 cin>>roll;
//                 Insertion(roll);
//                 for(int i = 0; i < 10; i++){
//                     cout<<i<<" "<<HashT[i][0]<<" "<<HashT[i][1]<<endl;
//                 }
//                 break;
//             case 2:cout<<"Enter Roll Number : ";
//                 cin>>roll;
//                 Searching(roll);
//                 break;
//         }
//         cout<<"Do you want to continue?(Y/N)"<<endl;
//         cin>>ch;
//     }while(ch == 'Y' || ch == 'y');

//     return 0;
// }


// //ass1
// //without replacement

// #include <iostream>
// using namespace std;
// int HashT[10][2];

// void Insertion(int roll){
//     int index = roll%10;
//     if(HashT[index][0] == -1){
//         HashT[index][0] = roll;
//     }
//     else{
//         if((HashT[index][0]%10) == index){
//             while(HashT[index][0] != -1){
//                 index++;
//                 if(index > 9){
//                     index-=10;
//                 }
//             }
//             HashT[index][0] = roll;
//             int i = index-1;
//             if(i < 0){
//                 i = 10-i;
//             }
//             for(; HashT[i][0] != -1; i--){
//                 if(i < 0){
//                     i = 11-i;
//                 }
//                 if(roll%10 == (HashT[i][0]%10)){
//                     HashT[i][1] = index;
//                     break;
//                 }
//             }
//         }
//         else{
//             int temp = HashT[index][0];
//             int tempP = HashT[index][1];
//             int position = index;
//             HashT[index][0] = roll;
//             HashT[index][1] = -1;
//             position++;
//             while(HashT[position][0] != -1){
//                 position++;
//                 if(position > 9){
//                     position-=10;
//                 }
//             }
//             HashT[position][0] = temp;
//             HashT[position][1] = tempP;
//             int i = position-1;
//             if(i < 0){
//                 i = 10-i;
//             }
//             for(; HashT[i][0] != -1; i--){
//                 if(i < 0){
//                     i = 11-i;
//                 }
//                 if(temp%10 == (HashT[i][0]%10)){
//                     if(HashT[i][1] != -1){
//                         HashT[i][1] = position;
//                         break;
//                     }
//                 }

//             }
//         }
//     }
// }

// void Searching(int roll){
//     int index = roll%10;
//     bool flag = 0;
//     if(HashT[index][0] == roll){
//         flag = 1;
//     }
//     else{
//         while(true){
//             index = HashT[index][1];
//             if(HashT[index][0] == roll){
//                 flag = 1;
//                 break;
//             }
//         }
//     }
//     if(flag){
//         cout<<"Roll Number at Index : "<<index<<endl;
//     }
//     else{
//         cout<<"Roll Number Not Found"<<endl;
//     }
// }

// int main()
// {
//     for(int i = 0; i < 10; i++){
//         HashT[i][0] = HashT[i][1] = -1;
//     }
//     int choice;
//     char ch;
//     int roll;
//     do{
//         cout<<"1. Insert Student"
//             <<"\n2. Search Student"<<endl;
//         cout<<"Enter Your Choice : ";
//         cin>>choice;
//         for(int i = 0; i < 10; i++){
//                 cout<<HashT[i][0]<<" "<<HashT[i][1]<<endl;
//         }
//         switch(choice){
//             case 1:cout<<"Enter Roll Number : ";
//                 cin>>roll;
//                 Insertion(roll);
//                 for(int i = 0; i < 10; i++){
//                     cout<<i<<" "<<HashT[i][0]<<" "<<HashT[i][1]<<endl;
//                 }
//                 break;
//             case 2:cout<<"Enter Roll Number : ";
//                 cin>>roll;
//                 Searching(roll);
//                 break;
//         }
//         cout<<"Do you want to continue?(Y/N)"<<endl;
//         cin>>ch;
//     }while(ch == 'Y' || ch == 'y');

//     return 0;
// }



// //ass 2 spell checker

// #include <bits/stdc++.h>
// using namespace std;

// string searcher;
// int linearProbe(string[], int, int);
// int main()
// {
//   string choice ;
//   cout<<"To start type \t check"<<endl;
//   cin >> choice;
//   int tablesize = 53;
// start:
//   string table[tablesize];
//   int s = 0;
//   int sz = 0;
//   int collisions = 0;
//   int location = 0;
//   ifstream f;
//   int count = 0;
//   double fac = 0;
//   string currWord;
//   f.open("words.txt");
//   while (f >> currWord)
//   {
//     for (int i = 0; i < currWord.length(); i++)
//     {
//       s += int(currWord[i]) * (i);
//     }
//     if (table[s % tablesize].length() > 0)
//     {
//       collisions += 1;
//       if (choice == "check")
//       {
//         location = linearProbe(table, s % tablesize, tablesize);
//       }
//     }
//     else
//     {
//       location = s % tablesize;
//     }
//     table[location] = currWord;
//     count++;
//     fac = static_cast<double>(count) / static_cast<double>(tablesize);
//     if (fac > 0.5)
//     {
//       tablesize = tablesize * 2;
//       f.close();
//       goto start;
//     }
//     s = 0;
//   }
//   int n1 = 0;
//   cout << "NO of time keep using speel checker" << endl;
//   cin >> n1;
//   while (n1 >= 0)
//   {
//     sz = 0;
//     cout << "Enter a Word to search:" << endl;
//     getline(cin, searcher);

//     for (int i = 0; i < searcher.length(); i++)
//     {
//       sz += int(searcher[i]) * (i);
//     }

//     if (table[sz % tablesize] == searcher)
//     {
//       cout << "Your Word is in the table" << endl;
//       cout << "The Spelling for the word you entered is correct" << endl;
//       cout << endl;
//     }
//     else
//     {
//       int y = sz;
//       int qaz = 1;

//       if (choice == "check2")
//       {

//         while (qaz != 20)
//         {
//           y = sz + pow(qaz, 2);
//           if (table[y % tablesize] == searcher)
//           {
//             cout << "Found the word, it is spelled correctly but suffered a collision" << endl;
//             goto next;
//           }
//           else
//           {
//             qaz++;
//           }
//         }
//         cout << "Your word is either not in the table or spelled incorrectly" << endl;

//       next:

//         n1--;
//       }

//       if (choice == "check")
//       {
//         int y = sz;
//         int qaz = 1;

//         while (table[y % tablesize].length() > 0)
//         {
//           y++;
//           if (table[y % tablesize] == searcher)
//           {
//             cout << "Found the word, it is spelled correctly but suffered a collision" << endl;
//             goto next1;
//           }
//         }

//         cout << "Your word is either not in the table or spelled incorrectly" << endl;

//       next1:

//         n1--;
//       }
//     }
//   }
// }

// int linearProbe(string table[], int i, int n)
// {

//   while (table[i].length() > 0)
//   {
//     i++;
//     if (i > n)
//     {
//       i = i % n;
//     }
//   }
//   return (i % n);
// }

// //ass4 huffman

// #include <bits/stdc++.h>
// using namespace std;
// struct Node {
//   int freq;
//   char data;
//   Node* left;
//   Node* right;
//   Node(char c,int f,Node* l=NULL,Node* r=NULL)
//   {
//       data=c;freq=f;
//       left=l;right=r;
//   }
// };
// struct compare {
// 	bool operator()(Node* l, Node* r){
// 		return (l->freq > r->freq);
// 	}
// };
// void printCodes(struct Node* root, string str){
// 	if (!root)
// 		return;
// 	if (root->data != '$')
// 		cout << root->data << ": " << str << "\n";
// 	printCodes(root->left, str + "0");
// 	printCodes(root->right, str + "1");
// }
// void printHcodes(char arr[], int freq[], int size){
// 	priority_queue<Node*, vector<Node*>, compare> h;
// 	for (int i = 0; i < size; ++i)
// 		h.push(new Node(arr[i], freq[i]));
// 	while (h.size() > 1) {
// 		Node *l = h.top();h.pop();
// 		Node *r = h.top();h.pop();
// 		Node *top = new Node('$', l->freq + r->freq, l, r);
// 		h.push(top);
// 	}
// 	printCodes(h.top(), "");
// }
// int main(){
// 	char arr[] = { 'a', 'd', 'e', 'f' };
// 	int freq[] = { 30, 40, 80, 60 };
// 	int size = sizeof(arr);
// 	printHcodes(arr, freq, size);
// }


// //ass5 tbt


// #include<iostream>
// using namespace std;

// class node {
// 	public :
// 		int data;
// 		int lth,rth;
// 		node *right,*left;
// };

// class TBT {
	
		
// 	public :node * root,* head;
// 		TBT() {
// 		head = new node;
// 		head->right = head;
// 		head->left = head;
// 		head->lth = 1;
// 		head->rth = 0;
// 		root = NULL;
// 		}
// 		void create();
// 		void preorder();
// 		void postorder();
// 		void inorder();
// 		node * inorderSucc(node *);
// };


 

// void TBT :: create() {
// 	node *temp,*curr;
// 	char ch;
// 	do {
// 		curr = new node;
// 		cout<<"\n Enter the data : ";
// 		cin>>curr->data;
// 		curr->right = NULL;
// 		curr->left = NULL;
// 		curr->lth = 1;
// 		curr->rth = 1;

// 		if(root == NULL) 
// 		{
// 			root = curr;
// 			root->right = head;
// 			root->left = head;
// 			head->left = root;
// 			head->lth = 0;			
// 		} else 
// 		{
// 			temp = root;
// 			while(1) 
// 			{
// 				if(curr->data < temp->data) 
// 				{
// 					if(temp->lth == 1) 
// 					{
// 					curr->left = temp->left;
// 					curr->right = temp;
// 					temp->lth = 0;
// 					temp->left = curr;	
// 					break;	
// 					} 
// 					else 
// 					{
// 						temp = temp->left;
// 					}	
// 				} 
// 					else 
// 					{
// 					if(temp->rth == 1) 
// 					{
// 					curr->right = temp->right;
// 					curr->left = temp;
// 					temp->rth = 0;
// 					temp->right = curr;
// 					break;
// 					} 
// 					else 
// 					{
// 						temp = temp->right;		
// 					}
// 				}
// 			}				
// 		}
// 		cout<<"\n Do you want to continue (Y/N) :  ";
// 		cin>>ch;
// 	}while(ch == 'y' || ch == 'Y');	
// }

// void TBT :: preorder() {
// node * temp;
// int flag = 0;
// temp = root;
// 	while(temp != head) 
// 	{
// 		if(flag == 0)
// 			cout<<temp->data<< "  ";
// 		if(temp->lth == 0 && flag == 0) {
// 			temp = temp->left;
// 		} 
// 		else if( temp->rth == 0){
// 			temp = temp->right;
// 			flag = 0;
// 		} else {
// 			temp = temp->right;
// 			flag = 1;
// 		}
// 	}
// } 


// void TBT :: inorder() {
// 	node* temp;
// 	temp = head;
// 	do{
// 		temp = inorderSucc(temp);
// 		if(temp!= head)
// 			cout<<temp->data<<" ";
// 	}while(temp != head);
// }
// node * TBT :: inorderSucc(node * temp) {
// 	node * p;
// 	p = temp->right;
// 	if(temp->rth == 0) {
// 		while(p->lth == 0) {
// 			p = p->left;
// 		}
// 	}
// 	return p;
	
// }

// int main() 
// {
// 	TBT t;
// 	cout<<"\n Create a binary tree : ";
// 	t.create();
// 	cout<<"\n Preorder traversal is : ";
// 	t.preorder();
// 	cout<<"\n Inorder traversal is : ";
// 	t.inorder();
// return 0;
// }



// // dfs bfs

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


// //dijkstra

// #include <iostream>
// using namespace std;
// #include <limits.h>
// #define V 9
// int minDistance(int dist[], bool sptSet[]){
// 	int min = INT_MAX, min_index;
// 	for (int v = 0; v < V; v++)
// 		if (sptSet[v] == false && dist[v] <= min)
// 			min = dist[v], min_index = v;
// 	return min_index;
// }
// void printSolution(int dist[]){
// 	cout <<"Vertex \t Distance from Source" << endl;
// 	for (int i = 0; i < V; i++)
// 		cout << i << " \t\t"<<dist[i]<< endl;
// }
// void dijkstra(int graph[V][V], int src){
// 	int dist[V]; 
//     bool sptSet[V];
// 	for (int i = 0; i < V; i++)
// 		dist[i] = INT_MAX, sptSet[i] = false;
// 	dist[src] = 0;
// 	for (int count = 0; count < V - 1; count++) {
// 		int u = minDistance(dist, sptSet);
// 		sptSet[u] = true;
// 		for (int v = 0; v < V; v++)
// 			if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX
// 				&& dist[u] + graph[u][v] < dist[v])
// 				dist[v] = dist[u] + graph[u][v];
// 	}
// 	printSolution(dist);
// }
// int main(){
// 	int graph[V][V] = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 },
// 						{ 4, 0, 8, 0, 0, 0, 0, 11, 0 },
// 						{ 0, 8, 0, 7, 0, 4, 0, 0, 2 },
// 						{ 0, 0, 7, 0, 9, 14, 0, 0, 0 },
// 						{ 0, 0, 0, 9, 0, 10, 0, 0, 0 },
// 						{ 0, 0, 4, 14, 10, 0, 2, 0, 0 },
// 						{ 0, 0, 0, 0, 0, 2, 0, 1, 6 },
// 						{ 8, 11, 0, 0, 0, 0, 1, 0, 7 },
// 						{ 0, 0, 2, 0, 0, 0, 6, 7, 0 } };

// 	dijkstra(graph, 0);
// }


// //obst


// #include <bits/stdc++.h>
// using namespace std;

// int sum(int frequency[], int i, int j){
//     int sum = 0;
//     for (int x = i; x <= j; x++)
//         sum += frequency[x];
//     return sum;
// }
// int optimalCost(int frequency[], int i, int j){
//     if (j < i)
//         return 0;
//     if (j == i)
//         return frequency[i];
//     int frequencySum = sum(frequency, i, j);
//     int min = INT_MAX;
//     for (int r = i; r <= j; ++r){
//         int cost = optimalCost(frequency, i, r - 1) + optimalCost(frequency, r + 1, j);
//         if (cost < min)
//             min = cost;
//     }
//     return min + frequencySum;
// }
// int optimalSearchTree(int keys[], int frequency[], int n){
//     return optimalCost(frequency, 0, n - 1);
// }
// int main(){
//     int keys[] = {10, 3, 9,2 ,0 ,10};
//     int frequency[] = {5,6,4,4,3,8,0};
//     int n = sizeof(keys) / sizeof(keys[0]);
//     cout << "Cost-> " << optimalSearchTree(keys, frequency, n);
// }


// //heap java

// import java.util.Arrays;
// public class HeapSort {
//     private static int N;
//     public static void sort(int arr[]) {
//         heapify(arr);
//         for (int i = N; i > 0; i--) {
//             swap(arr, 0, i);
//             N = N - 1;
//             maxheap(arr, 0);
//         }
//     }
//     public static void heapify(int arr[]){
//         N = arr.length - 1;
//         for (int i = N / 2; i >= 0; i--)
//             maxheap(arr, i);
//     }
//     public static void maxheap(int arr[], int i){
//         int left = 2 * i;
//         int right = 2 * i + 1;
//         int max = i;
//         if (left <= N && arr[left] > arr[i])
//             max = left;
//         if (right <= N && arr[right] > arr[max])
//             max = right;
//         if (max != i) {
//             swap(arr, i, max);
//             maxheap(arr, max);
//         }
//     }
//     public static void swap(int arr[], int i, int j){
//         int tmp = arr[i];
//         arr[i] = arr[j];
//         arr[j] = tmp;
//     }
//     public static void main(String[] args){
//         int[] array = {4, 1, 3, 2, 16, 9, 10, 14, 8, 7};
//         sort(array);
//         System.out.println("Heap Sort-> " + Arrays.toString(array));
//     }
// }


// // topo

// #include <iostream>
// #include <list>
// #include <stack>
// using namespace std;

// class Graph {

// 	int V;
// 	list<int>* adj;
// 	void topologicalSortUtil(int v, bool visited[],stack<int>& Stack);
// public:
// 	// Constructor
// 	Graph(int V);
// 	// function to add an edge to graph
// 	void addEdge(int v, int w);
// 	// prints a Topological Sort of
// 	// the complete graph
// 	void topologicalSort();
// };

// Graph::Graph(int V)
// {
// 	this->V = V;
// 	adj = new list<int>[V];
// }
// void Graph::addEdge(int v, int w)
// {
// 	adj[v].push_back(w);
// }
// void Graph::topologicalSortUtil(int v, bool visited[],stack<int>& Stack)
// {
// 	visited[v] = true;
// 	list<int>::iterator i;
// 	for (i = adj[v].begin(); i != adj[v].end(); ++i)
// 		if (!visited[*i])
// 			topologicalSortUtil(*i, visited, Stack);
// 	Stack.push(v);
// }

// void Graph::topologicalSort()
// {
// 	stack<int> Stack;
// 	bool* visited = new bool[V];
// 	for (int i = 0; i < V; i++)
// 		visited[i] = false;
// 	for (int i = 0; i < V; i++)
// 		if (visited[i] == false)
// 			topologicalSortUtil(i, visited, Stack);
// 	while (Stack.empty() == false) {
// 		cout << Stack.top() << " ";
// 		Stack.pop();
// 	}
// }
// int main(){
// 	Graph g(6);
// 	g.addEdge(5, 2);
// 	g.addEdge(5, 0);
// 	g.addEdge(4, 0);
// 	g.addEdge(4, 1);
// 	g.addEdge(2, 3);
// 	g.addEdge(3, 1);
// 	cout << "Following is a Topological Sort of the given graph \n";
// 	g.topologicalSort();
// }


// // prims

// #include <bits/stdc++.h>
// using namespace std;
// #define V 5

// // A utility function to find the vertex with
// // minimum key value, from the set of vertices
// // not yet included in MST
// int minKey(int key[], bool mstSet[])
// {
// 	// Initialize min value
// 	int min = INT_MAX, min_index;

// 	for (int v = 0; v < V; v++)
// 		if (mstSet[v] == false && key[v] < min)
// 			min = key[v], min_index = v;

// 	return min_index;
// }

// // A utility function to print the
// // constructed MST stored in parent[]
// void printMST(int parent[], int graph[V][V])
// {
// 	cout<<"Edge \tWeight\n";
// 	for (int i = 1; i < V; i++)
// 		cout<<parent[i]<<" - "<<i<<" \t"<<graph[i][parent[i]]<<" \n";
// }

// // Function to construct and print MST for
// // a graph represented using adjacency
// // matrix representation
// void primMST(int graph[V][V])
// {
// 	// Array to store constructed MST
// 	int parent[V];
	
// 	// Key values used to pick minimum weight edge in cut
// 	int key[V];
	
// 	// To represent set of vertices included in MST
// 	bool mstSet[V];

// 	// Initialize all keys as INFINITE
// 	for (int i = 0; i < V; i++)
// 		key[i] = INT_MAX, mstSet[i] = false;

// 	// Always include first 1st vertex in MST.
// 	// Make key 0 so that this vertex is picked as first vertex.
// 	key[0] = 0;
// 	parent[0] = -1; // First node is always root of MST

// 	// The MST will have V vertices
// 	for (int count = 0; count < V - 1; count++)
// 	{
// 		// Pick the minimum key vertex from the
// 		// set of vertices not yet included in MST
// 		int u = minKey(key, mstSet);

// 		// Add the picked vertex to the MST Set
// 		mstSet[u] = true;

// 		// Update key value and parent index of
// 		// the adjacent vertices of the picked vertex.
// 		// Consider only those vertices which are not
// 		// yet included in MST
// 		for (int v = 0; v < V; v++)

// 			// graph[u][v] is non zero only for adjacent vertices of m
// 			// mstSet[v] is false for vertices not yet included in MST
// 			// Update the key only if graph[u][v] is smaller than key[v]
// 			if (graph[u][v] && mstSet[v] == false && graph[u][v] < key[v])
// 				parent[v] = u, key[v] = graph[u][v];
// 	}

// 	// print the constructed MST
// 	printMST(parent, graph);
// }

// // Driver code
// int main()
// {
// 	/* Let us create the following graph
// 		2 3
// 	(0)--(1)--(2)
// 	| / \ |
// 	6| 8/ \5 |7
// 	| / \ |
// 	(3)-------(4)
// 			9	 */
// 	int graph[V][V] = { { 0, 2, 0, 6, 0 },
// 						{ 2, 0, 3, 8, 5 },
// 						{ 0, 3, 0, 0, 7 },
// 						{ 6, 8, 0, 0, 9 },
// 						{ 0, 5, 7, 9, 0 } };
// 	primMST(graph);
// }

// //kruskal

// // Kruskal's algorithm in C++

// #include <algorithm>
// #include <iostream>
// #include <vector>
// using namespace std;

// #define edge pair<int, int>

// class Graph {
//    private:
//   vector<pair<int, edge> > G;  // graph
//   vector<pair<int, edge> > T;  // mst
//   int *parent;
//   int V;  // number of vertices/nodes in graph
//    public:
//   Graph(int V);
//   void AddWeightedEdge(int u, int v, int w);
//   int find_set(int i);
//   void union_set(int u, int v);
//   void kruskal();
//   void print();
// };
// Graph::Graph(int V) {
//   parent = new int[V];

//   //i 0 1 2 3 4 5
//   //parent[i] 0 1 2 3 4 5
//   for (int i = 0; i < V; i++)
//     parent[i] = i;

//   G.clear();
//   T.clear();
// }
// void Graph::AddWeightedEdge(int u, int v, int w) {
//   G.push_back(make_pair(w, edge(u, v)));
// }
// int Graph::find_set(int i) {
//   // If i is the parent of itself
//   if (i == parent[i])
//     return i;
//   else
//     // Else if i is not the parent of itself
//     // Then i is not the representative of his set,
//     // so we recursively call Find on its parent
//     return find_set(parent[i]);
// }

// void Graph::union_set(int u, int v) {
//   parent[u] = parent[v];
// }
// void Graph::kruskal() {
//   int i, uRep, vRep;
//   sort(G.begin(), G.end());  // increasing weight
//   for (i = 0; i < G.size(); i++) {
//     uRep = find_set(G[i].second.first);
//     vRep = find_set(G[i].second.second);
//     if (uRep != vRep) {
//       T.push_back(G[i]);  // add to tree
//       union_set(uRep, vRep);
//     }
//   }
// }
// void Graph::print() {
//   cout << "Edge :"
//      << " Weight" << endl;
//   for (int i = 0; i < T.size(); i++) {
//     cout << T[i].second.first << " - " << T[i].second.second << " : "
//        << T[i].first;
//     cout << endl;
//   }
// }
// int main() {
//   Graph g(6);
//   g.AddWeightedEdge(0, 1, 4);
//   g.AddWeightedEdge(0, 2, 4);
//   g.AddWeightedEdge(1, 2, 2);
//   g.AddWeightedEdge(1, 0, 4);
//   g.AddWeightedEdge(2, 0, 4);
//   g.AddWeightedEdge(2, 1, 2);
//   g.AddWeightedEdge(2, 3, 3);
//   g.AddWeightedEdge(2, 5, 2);
//   g.AddWeightedEdge(2, 4, 4);
//   g.AddWeightedEdge(3, 2, 3);
//   g.AddWeightedEdge(3, 4, 3);
//   g.AddWeightedEdge(4, 2, 4);
//   g.AddWeightedEdge(4, 3, 3);
//   g.AddWeightedEdge(5, 2, 2);
//   g.AddWeightedEdge(5, 4, 3);
//   g.kruskal();
//   g.print();
//   return 0;
// }