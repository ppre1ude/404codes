#include <iostream>
#include <string>
#include <queue>
#include <map>
#include <algorithm>
using namespace std;

map<string, int> myMap;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

bool available(int x, int y){ return x>=0 && y>=0 && x<=2 && y<=2; }

int bfs(string s){
  // 스트링 S를 입력으로 받아 정리된 상태가 될 때까지 이동
  queue<string> myQueue;
  myQueue.push(s);

  while(!myQueue.empty()){
    string p = myQueue.front();
    myQueue.pop();

    // 마지막으로 목적지 도달 시 이동 횟수 반환
    if(p == "123456780"){
      return myMap[p];
    }

    // 상하좌우로 이동 가능한 경우에 S의 각 문자들을 swap하며 탐사
    auto zpos = p.find('0');
    for (int i = 0; i < 4; i++) {
      int nx = zpos / 3 + dx[i];
      int ny = (zpos % 3) + dy[i];
      if(!available(nx, ny)) continue;
      string tmp = p;
      swap(tmp[zpos], tmp[(3*nx)+ny]);
      if(!myMap[tmp]){
        myMap[tmp] = myMap[p]+1;
        myQueue.push(tmp);
        // 이동시 스트링 S를 Map에 마킹해주며 재탐사 없도록 설정
      }
    }
  }

  return -1;
}

int main(){
  int arr[3][3];
  string s = "";

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> arr[i][j];
      s += (arr[i][j]+'0');
    }
  }

  cout << bfs(s) << endl;

  return 0;
}