#include <iostream>
struct V3 {
    float x, y, z;
};

void  sumAverage(int* data, int n,int  *sum,float *avg) {
    *sum = 0;
    for (int i = 0; i < n; i++) {
        *sum += *(data + i);
    }
    *avg = (float) * sum / n;
    return;
}
void  sumAverage(int data[], int n, int& sum, float& avg) {
    sum = 0;
    for (int i = 0; i < n; i++) {
        sum += data[i];
    }
    avg = (float)sum / n;
    return;
}

int main()
{
    int y;
    int a[] = { 10,-1,2,-3,4,-5,6,-7,8,-9 };   //メモリ上で連続領域になる
    int* p1; // int型のポインタ
    int* p2; // int型のポインタ
    p1 = &a[0];
    p2 = p1 +3;    //3つ分後ろにずらす
    *p1 = *p1 + *p2;
    std::cout << a[0];	// 10+(-3)=7になる
    int ans1;
    float ans2;
    //sumAverage(a, 10, &ans1, &ans2);
    sumAverage(a, 10, ans1, ans2);
    std::cout << "合計="<<ans1<<",平均="<<ans2;

}
