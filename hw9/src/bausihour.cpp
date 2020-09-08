int main(){
    int n =3;
    f3(&n);
    cout << n << endl;
    return 0;
}

void f3(int* pn){
    *pn = (*pn)+1;
}

int b  =5;
int* a = &b;
int** c = &a;
int d = 13;
int *e = &d;

*a = 10;
*e = 15;

**c = *a;

b + d; <- what is the result?


0x0ffffaec