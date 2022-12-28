#include <bits/stdc++.h>
#define Vertex 5
using namespace std;

void initGraph(int arr[][Vertex])
{
    for (int i = 0; i < Vertex; i++)
    {
        for (int j = 0; j < Vertex; j++)
        {
            arr[i][j] = 0;
        }
    }
}

void insertEdge(int arr[][Vertex], int i, int j)
{
    arr[i][j] = 1;
    arr[j][i] = 1;
}

void printMatrix(int arr[][Vertex]){
    for (int i = 0; i < Vertex; i++)
    {
        cout<<i<<": ";
        for (int j = 0; j < Vertex; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
int main()
{
    int graph[Vertex][Vertex];
    initGraph(graph);
    printMatrix(graph);
    cout<<endl;
    insertEdge(graph, 1, 2);
    insertEdge(graph, 1, 3);
    insertEdge(graph, 3, 2);
    insertEdge(graph, 5, 1);
    printMatrix(graph);

}