/*Author: SAYAN DAS*/

#include <iostream>
#include <list>
using namespace std;

class Graph {
private:
    int V;
    list <int> *adj;
public:
    Graph(int V){
        this->V = V;
        adj = new list<int>[V];
    }
    
    void addEdge(int V, int E){
        adj[V].push_back(E);
    }
    
    void BFS(int init){
        bool visited[V];
        
        for(int j=0; j<V; j++) visited[j] = false;
        
        visited[init] = true;
        
        list<int> frontier;
        frontier.push_back(init);
        
        while(!frontier.empty()){
            init = frontier.front();
            cout<<init<<", ";
            frontier.pop_front();
            
            for(list<int>::iterator i = adj[init].begin();i != adj[init].end();i++){
                if(!visited[*i]){
                    visited[*i] = true;
                    frontier.push_back(*i);
                }
            }
        }
    }
};

int main()
{
    // Create a graph given in the above diagram
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
 
    cout << "Following is Breadth First Traversal (starting from vertex 2) \n";
    g.BFS(2);
 
    return 0;
}