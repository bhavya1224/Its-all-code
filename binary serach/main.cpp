#include <iostream>
using namespace std;

int main()
{
	int count, i, arr[30], num, first, last, middle;

        cin>>count;

	for (i=0; i<count; i++)
	{

                cin>>arr[i];
	}

        cin>>num;
	first = 0;
	last = count-1;
	middle = (first+last)/2;
	while (first <= last)
	{
	   if(arr[middle] < num)
	   {
		first = middle + 1;

	   }
	   else if(arr[middle] == num)
	   {
		cout<<num<<" is present at location"<<middle+1<<"\n";
                break;
           }
           else {
                last = middle - 1;
           }
           middle = (first + last)/2;
        }
        if(first > last)
	{
	   cout<<num<<" not found in the array";
	}
	return 0;
}
