#include <iostream>
#include "cell.h"
using namespace std;

template <class type>
class List
{
public:
    cell <type> head;
    cell <type> * ptr;

    int size=0;

    bool insert(type value, int position)
    {
        cell <type> * ptr1= &head;
        cell <type> * tmp = nullptr;

        for (int i=1;i<position;++i)
        {
            ptr1=(*ptr1).next;
        }

        tmp=new cell <type>;
        (*tmp).value=value;

        (*tmp).next=(*ptr1).next;
        (*ptr1).next=tmp;

        size ++;

        return true;
    }

    bool del( int position) // możliwy seg "kasowanie nizaalokowane pamieci"
    {
        cell <type> * ptr2=&head;
        cell <type> * tmp = nullptr;

        for (int i=1;i<position;++i)
        {
            ptr=(*ptr2).next;
        }
        tmp=(*ptr2).next;
        (*ptr2).next=(*(*ptr2).next).next;
        free(tmp);

        size--;

        return true;
    }

    void delAll() // możliwy seg
    {
        cell <type> * tmp;

        for( int i=0;i<size;i++)
        {
            tmp=head.next;
            head.next=(*tmp).next;
            free(tmp);
        }


    }

    void push(type value)
    {
        cell <type> * tmp;
        tmp= new cell <type> ;
        (*tmp).next= head.next;
        head.next=tmp;


    }

    void show()
    {
        
    }




};


int main()

{







    List <int> L;

    L.push(1);
    L.push(2);
    L.push(3);




    return 0;
}