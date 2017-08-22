#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

int arr[10004][10004];
int m, n;

struct pos {
  int x;
  int y;
};

bool isvalid(int i, int j){
    return (i >= 0 && j >= 0 && i < m && j < n);
}

int corner (pos first, pos second, pos third){
  std::vector<pos> neigh;

  if(arr[first.x][first.y] == '*')  neigh.push_back(first);
  if(arr[second.x][second.y] == '*')  neigh.push_back(second);
  if(arr[third.x][third.y] == '*')  neigh.push_back(third);

  return neigh;
}

int edge (pos first, pos second, pos third, pos fourth , pos fifth){
  std::vector<pos> neigh;

  if(arr[first.x][first.y] == '*')  neigh.push_back(first);
  if(arr[second.x][second.y] == '*')  neigh.push_back(second);
  if(arr[third.x][third.y] == '*')  neigh.push_back(third);
  if(arr[fourth.x][fourth.y] == '*')  neigh.push_back(fourth);
  if(arr[fifth.x][fifth.y] == '*')  neigh.push_back(fifth);

  return neigh;
}

int middle (pos first, pos second, pos third, pos fourth , pos fifth, pos sixth, pos seventh, pos eighth){
  std::vector<pos> neigh;

  if(arr[first.x][first.y] == '*')  neigh.push_back(first);
  if(arr[second.x][second.y] == '*')  neigh.push_back(second);
  if(arr[third.x][third.y] == '*')  neigh.push_back(third);
  if(arr[forth.x][forth.y] == '*')  neigh.push_back(forth);
  if(arr[fifth.x][fifth.y] == '*')  neigh.push_back(fifth);
  if(arr[sixth.x][sixth.y] == '*')  neigh.push_back(sixth);
  if(arr[seventh.x][seventh.y] == '*')  neigh.push_back(seventh);
  if(arr[eighth.x][eighth.y] == '*')  neigh.push_back(eighth);

  return neigh;
}

int int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  while (T--) {
    vector< vector<pos> > graph;
    pos delim; delim.x = -1; delim.y = -1;
    std::vector< vector<pos> > freq;

    freq[8].push_back(delim);
    freq[7].push_back(delim);
    freq[6].push_back(delim);
    freq[5].push_back(delim);
    freq[4].push_back(delim);
    freq[3].push_back(delim);
    freq[2].push_back(delim);
    freq[1].push_back(delim);
    freq[0].push_back(delim);

    std::cin >> n >> m;

    for (int i = 0; i < n; i++)
      for (int j = 0; j < m; j++)
        std::cin >> arr[i][j];


    for (int i = 0; i < n; i++){
      for (int j = 0; j < m; j++){

        if (arr[i][j] == '*') {
          vector <pos> neigh;
          pos coord; coord.x = i; coord.y == j;

          // leftTopCorner
          if (i == 0 && j == 0 && isvalid(i+1, j+1)) {
            pos first; first.x = i+1; firs.y = j;
            pos second; second.x = i; second.y = j+1;
            pos third; third.x = i+1; third.y = j+1;

            neigh = corner(first, second, third);
            graph.push_back(coord).push_back(neigh);
            if(freq[neigh.length()] == delim)
              freq[neigh.length()].push_back(coord);
          }

          // rightTopCorner
          else if (i == 0 && j == m-1 && isvalid(i-1, j+1)) {
            pos first; first.x = i-1; firs.y = j;
            pos second; second.x = i; second.y = j+1;
            pos third; third.x = i-1; third.y = j+1;

            neigh = corner(first, second, third);
            graph.push_back(coord).push_back(neigh);
            if(freq[neigh.length()] == delim)
              freq[neigh.length()].push_back(coord);
          }

          // leftDownCorner
          else if (i == n-1 && j == 0 && isvalid(i+1, j-1)) {
            pos first; first.x = i; firs.y = j-1;
            pos second; second.x = i+1; second.y = j;
            pos third; third.x = i+1; third.y = j-1;

            neigh = corner(first, second, third);
            graph.push_back(coord).push_back(neigh);
            if(freq[neigh.length()] == delim)
              freq[neigh.length()].push_back(coord);
          }

          // rightDownCorner
          else if (i == n-1 && j == m-1 && n > 1 && m > 1) {
            pos first; first.x = i; firs.y = j-1;
            pos second; second.x = i-1; second.y = j;
            pos third; third.x = i-1; third.y = j-1;

            neigh = corner(first, second, third);
            graph.push_back(coord).push_back(neigh);
            if(freq[neigh.length()] == delim)
              freq[neigh.length()].push_back(coord);
          }

          // topEdge
          else if (j == 0 && i > 0 && i < n-1 && m > 0) {
            pos first; first.x = i-1; firs.y = j;
            pos second; second.x = i+1; second.y = j;
            pos third; third.x = i; third.y = j+1;
            pos fourth; second.x = i+1; second.y = j+1;
            pos fifth; third.x = i-1; third.y = j+1;

            neigh = edge(first, second, third, fourth, fifth);
            graph.push_back(coord).push_back(neigh);
            if(freq[neigh.length()] == delim)
              freq[neigh.length()].push_back(coord);
          }

          // leftEdge
          else if (i == 0 && j > 0 && j < m-1 && n > 0) {
            pos first; first.x = i+1; firs.y = j;
            pos second; second.x = i; second.y = j+1;
            pos third; third.x = i; third.y = j-1;
            pos fourth; second.x = i+1; second.y = j-1;
            pos fifth; third.x = i+1; third.y = j+1;

            neigh = edge(first, second, third, fourth, fifth);
            graph.push_back(coord).push_back(neigh);
            if(freq[neigh.length()] == delim)
              freq[neigh.length()].push_back(coord);
          }

          // rightEdge
          else if (i == n-1 && j > 0 && j < m-1 && n > 1) {
            pos first; first.x = i-1; firs.y = j;
            pos second; second.x = i; second.y = j+1;
            pos third; third.x = i; third.y = j-1;
            pos fourth; second.x = i-1; second.y = j+1;
            pos fifth; third.x = i-1; third.y = j-1;

            neigh = edge(first, second, third, fourth, fifth);
            graph.push_back(coord).push_back(neigh);
            if(freq[neigh.length()] == delim)
              freq[neigh.length()].push_back(coord);
          }

          // downEdge
          else if (j == m-1 && && i > 0 && i < n && m > 1) {
            pos first; first.x = i-1; firs.y = j;
            pos second; second.x = i+1; second.y = j;
            pos third; third.x = i; third.y = j-1;
            pos fourth; second.x = i+1; second.y = j-1;
            pos fifth; third.x = i-1; third.y = j-1;

            neigh = edge(first, second, third, fourth, fifth);
            graph.push_back(coord).push_back(neigh);
            if(freq[neigh.length()] == delim)
              freq[neigh.length()].push_back(coord);
          }

          // middle
          else {
            pos first; first.x = i-1; firs.y = j;
            pos second; second.x = i+1; second.y = j;
            pos third; third.x = i; third.y = j-1;
            pos fourth; second.x = i; second.y = j+1;
            pos fifth; third.x = i-1; third.y = j-1;
            pos sixth; third.x = i+1; third.y = j-1;
            pos seventh; second.x = i+1; second.y = j+1;
            pos eighth; third.x = i-1; third.y = j-1;

            neigh = middle(arr[i-1][j], arr[i+1][j], arr[i][j-1], arr[i][j+1], arr[i-1][j-1],arr[i+1][j-1], arr[i+1][j+1], arr[i-1][j-1]);
            graph.push_back(coord).push_back(neigh);
            if(freq[neigh.length()] == delim)
              freq[neigh.length()].push_back(coord);
          }
        }
      }
    }

    int ans = 0;
    for (size_t i = 8; i >= 0; i--) {
      for (size_t j = 0; j < freq[i].length(); j++) {
        for (size_t k = 0; k < graph[freq[i][j]].length(); k++) {
          graph.pop(graph[freq[i][j]][k]);
          
          if(i == 0) ans ++;
          else ans += 2;
        }
      }
    }

  }
  return 0;
}
