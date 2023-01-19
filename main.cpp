#include <iostream>
#include <fstream>
#include <string>

template <typename type>
void tofile(const int num, std::string symbol, type a[])//, std::ofstream& fout)
{
    std::ofstream fout;
    std::string path = "/Users/sofiabalcinova/Desktop/Коды С++/lab9/lab9/tofile.txt";
    fout.open(path, std::ofstream::app);
//    //fout.open("tofile.txt");
    for (int i=0; i<num; i++)
    {
        fout<<a[i];
        if (i<num-1)
            fout<<symbol;
    }
    fout<<std::endl;
    fout.close();
    
}

int main(int argc, const char * argv[]) {
    const int n1=6;
    int arr1[n1] = {1,2,3,4,5,6};
    
    const int n2=3;
    double arr2[n2] = {2.0001,44.789,21.01};
    
    const int n3=4;
    float arr3[n3] = {1.7, 21.7, 1.5};
    
    const int n4=2;
    char arr4[n4] = {'A', 'B'};
    
    std::string symbol;
    std::cout<<"Enter something: ";
    std::cin >> symbol;
    
    //std::ofstream fout;
    
    tofile(n1, symbol, arr1);
    tofile(n2, symbol, arr2);
    tofile(n3, symbol, arr3);
    tofile(n4, symbol, arr4);
    
   
    /*int num;
    std::cout << "Enter the number of array elements: ";
    std::cin >> num;
    
    std::ofstream fout;
    
    std::cout << "Enter tip dannyh: ";
    std::string str;
    std::cout << "Enter the array elements: ";
    int *arr1 = new int[num];
    for (int i=0; i<num; i++)
    {
        std::cin >> arr1[i];
    }
    double *arr2 = new double[num];
    std::cout << "Enter the array elements for second array: ";
    for(int i=0;i<num;i++)
    {
        std::cin >> arr2[i];
    }
    
    std::string symbol;
    std::cout<<"Enter something: ";
    std::cin >> symbol;
    
    tofile(num,symbol,arr1, fout);
    tofile(num,symbol,arr2, fout);
    
    fout.close();
    delete [] arr1;
    delete [] arr2;*/
    return 0;
}
