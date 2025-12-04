#include<iostream>
#include<vector>
#include<list> // it doubly linkedlist
using namespace std;
//this is undirected
class Graph{
    private:
    int v; // vertex
    list<int> *l; //int *arr
 public:
 Graph(int v){
    this->v = v;
    l = new list<int> [v]; // arr = new int[v]
      
    } 
 void addEdge(int u, int v){
    l[u].push_back(v);
    l[v].push_back(u);
 }  
//  void printAdjency(){
//     for(int i =0; i < v; i++){
//         cout<< i << " : ";
//         for(int neigh : l[i]){
//             cout << neigh << " ";
//         }
//     }
//     cout<<endl;
//  }  
 void printAdjency(){
    cout << "\n--- Adjacency List (Total Vertices: " << v << ") ---\n";
    for(int i = 0; i < v; i++){
        // 1. Clearly label the node
        cout << "Node " << i << " connects to: "; 
        
        // 2. Print neighbors, separated by commas or arrows
        for(int neigh : l[i]){
            cout << neigh;
            // Add a comma and space unless it's the last neighbor
            if (neigh != l[i].back()) {
                cout << ", ";
            }
        }
        // 3. End with a clean newline and separator
        cout << "\n----------------------------------------\n";
    }
    cout << "\n--- Output Complete ---\n" << endl;
 }

};
int main(){
    Graph G(4);
    G.addEdge(1,2); 
    G.addEdge(2,3); 
   
    G.printAdjency();


    return 0;
}
