#include "1012_11125107.h"
#include "1012_11125107f.cpp"

using namespace std;

int main()
{
    //交換數值
    cout<<"作業1\n";
    int a = 3;
    int b = 5;

    float i = 2.42;
    float j = 1.76;

    double x = 2.3;
    double y = 4.6;

    cout << "置換前(int): a=" << a << ", b=" << b << endl;
    cout << "置換前(float): i=" << i << ", j=" << j << endl;
    cout << "置換前(double): x=" << x << ", y=" << y << endl;

    mySwap(a, b);
    mySwap(i, j);
    mySwap(x, y);

    cout << "置換後(int): a=" << a << ", b=" << b << endl;
    cout << "置換後(float): i=" << i << ", j=" << j << endl;
    cout << "置換後(double): x=" << x << ", y=" << y << endl;

    cout<<"\n作業2:\n";
    //作業2
    //使用陣列的方式與for迴圈搭配給值，增加效率和避免關節炎
    int int_list[10]={1,2,3,4,5,6,7,8,9,0};
    float float_list[10]={1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9,0.1};
    const int numInstances = 10;
    complex cpx[numInstances];
    for(int i=0;i<numInstances;i++)
    {
        cpx[i] = complex(10-i,i);
    }

    Stack<int> intStack(10); // 初始化堆疊(int)容量為10
    Stack<float> floatStack(10); // 初始化堆疊(int)容量為10
    Stack <complex> complexStack(10);


    // 檢查堆疊是否為空
    if (intStack.IsEmpty())
    {
        cout << "堆疊(int)為空" << endl;
    }
    else
    {
        cout << "堆疊(int)不為空" << endl;
    }

    if (floatStack.IsEmpty())
    {
        cout << "堆疊(float)為空" << endl;
    }
    else
    {
        cout << "堆疊(float)不為空" << endl;
    }

    if (complexStack.IsEmpty())
    {
        cout << "堆疊(complex)為空" << endl;
    }
    else
    {
        cout << "堆疊(complex)不為空" << endl;
    }

    cout<<"\n開使添加數值..."<<endl;

    for(int i=0;i<10;i++)
    {
        intStack.Push(int_list[i]);
    }

    for(int i=0;i<10;i++)
    {
        floatStack.Push(float_list[i]);
    }

    for(int i=0;i<10;i++)
    {
        complexStack.Push(cpx[i]);
    }

    // 取得頂部元素
    int int_top = intStack.Top();
    cout << "頂部元素(int): " << int_top << endl;
    float float_top = floatStack.Top();
    cout<< "頂部元素(float)" << float_top << endl;
    complex temp;
    temp = complexStack.Top();
    cout << "頂部元素(complex)";
    temp.print();
    cout<<endl;
    // 逐一彈出頂部元素並進行計算
    cout << "彈出的元素(int)是: ";
    int sum = 0;
    for(int i=0;i<10;i++)
    {
        int int_popped = intStack.Pop();
        if (i<9)
        {
            cout << int_popped << ",";
        }
        else
        {
            cout << int_popped << endl;
        }
        sum += int_popped;
    }
    cout << "int的sum= " << sum << endl;

    cout << "彈出的元素(float)是: ";
    float ave = 0.0;
    for(int i=0;i<10;i++)
    {
        float float_popped = floatStack.Pop();
        if (i<9)
        {
            cout << float_popped << ",";
        }
        else
        {
            cout << float_popped << endl;
        }
        ave += float_popped;
    }
    cout << "float的ave= " << (ave/10) << endl;

    cout << "彈出的元素(complex)是:\n";
    complex cpx_add(0,0);
    for(int i=0;i<10;i++)
    {
        complex out_temp;
        out_temp = complexStack.Pop();
        out_temp.print();
        cpx_add = (cpx_add + out_temp);
    }
    cout << "complex的sum為: ";
    cpx_add.print();
    cout<<endl;

    // 檢查堆疊是否為空
    if (intStack.IsEmpty())
    {
        cout << "堆疊(int)為空" << endl;
    }
    else
    {
        cout << "堆疊(int)不為空" << endl;
    }

    if (floatStack.IsEmpty())
    {
        cout << "堆疊(float)為空" << endl;
    }
    else
    {
        cout << "堆疊(float)不為空" << endl;
    }

    if (complexStack.IsEmpty())
    {
        cout << "堆疊(complex)為空" << endl;
    }
    else
    {
        cout << "堆疊(complex)不為空" << endl;
    }
    return 0;
}