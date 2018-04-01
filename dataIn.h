#ifndef datain
#define datain
#include<vector>
using namespace std;

class dataIn {
  public:
    dataIn():ptr(new int(0)) {
        num = 0;
        data.assign(num,0);
    }
    dataIn(int n):ptr(new int(0)), num(n) {
        data.assign(this->num, 0);
    }
    ~dataIn() {
        delete ptr;
    }
    int* ptr;
    void sortData();
    void getData(int value);
    int reData(int i);
  private:
    int num;
    vector<int> data;
};
#endif
