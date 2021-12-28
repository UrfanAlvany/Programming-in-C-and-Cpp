/*CH-230-A
Urfan Alvani    
ualvani@jacobs-university.de */
#include<iostream>
using namespace std;
int myfirst(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0 && arr[i]%2==0)
        {
            return arr[i];
        }
    }
    return 1;
}
double myfirst(double arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0 && (arr[i]-(int)arr[i])==0)
        {
            return arr[i];
        }
    }
    return 1;
}
char myfirst(char arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]!='a'&&arr[i]!='e'&&arr[i]!='i'&&arr[i]!='o'&&arr[i]!='u')
        {
            if(arr[i]!='A'&&arr[i]!='E'&&arr[i]!='I'&&arr[i]!='O'&&arr[i]!='U')
            {
                if((arr[i]>='a'&&arr[i]<='z')||(arr[i]>='A'&&arr[i]<='Z'))
                    return arr[i];
            }
        }
    }
    return 'O';
}
int main()
{
    int intArray[]={-90,81,-76,33,23,40};
    double doubleArray[]={-90.10,81.99,-76.12,33,23,-40};
    char charArray[]={'A','i','o','@','w'};
 
    cout<<"The first positive even value in the array is "<<myfirst(intArray,6);
    cout<<"\nThe first negative value with no decimal part in the array is "<<myfirst(doubleArray,6);
    cout<<"\nThe first consonant element in the array is "<<myfirst(charArray,5);
}
