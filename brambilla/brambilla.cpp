#include <iostream>
#include <fstream>

using namespace std;

int N;
int abitanti[100];
int costi[100];

int main() {
  ifstream in("input.txt");
  ofstream out("output.txt");
  in >> N;
  for (int i = 0; i < N; i++)
    in >> costi[i];
  for (int i = 0; i < N; i++)
    in >> abitanti[i];
}
