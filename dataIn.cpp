#include "dataIn.h"
#include<algorithm>
#include<vector>
void dataIn::sortData() {
    sort(this->data.begin(), this->data.end());
}

void dataIn::getData(int value) {
    this->data[*ptr] = value;
    ++*ptr;
}

int dataIn::reData(int i) {
    return this->data[*ptr-i];
}
