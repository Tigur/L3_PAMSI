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

        if (position>size)
        {
            cerr<< "There is no " << position << ". element in the List !"<< endl;

            return false;
        }

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

        if (position>size)
        {
            cerr<< "There is no " << position << ". element in the List !" << endl;

                                              return false;
        }



        cell <type> * ptr2=&head;
        cell <type> * tmp = nullptr;

        for (int i=1;i<position;++i)
        {
            ptr2=(*ptr2).next;
        }
        tmp=(*ptr2).next;
        (*ptr2).next=(*(*ptr2).next).next;
        free(tmp);

        size--;

        return true;
    }

    bool delAll() // możliwy seg
    {
        if (size ==0)
        {
            cerr<< "There is not a single element in the List !" << endl;

            return false;
        }

        cell <type> * tmp;

        for( int i=0;i<size;i++)
        {
            tmp=head.next;
            head.next=(*tmp).next;
            free(tmp);
            size=0;
        }


    }

    void push(type value)
    {
        cell <type> * tmp;
        tmp= new cell <type> ;
        /*if (size=0)
        {
            (*tmp).value=value;
            (*tmp).next= &head;
        }*/

            (*tmp).value=value;
            (*tmp).next= head.next;
            head.next=tmp;





        size++;


    }

    void show()
    {
        cell <type> * tmp = head.next;

        for (int i=1;i<=size;++i)
        {
            cout << tmp->value << endl;
            tmp=(*tmp).next;

        }
    }




};


int main()

{







    List <int> L;

    L.push(1);
    L.push(2);
    L.push(3);
    L.push(25);
    L.del(3);
    L.insert(2,2);
    L.insert(7,30);

 L.show();


    return 0;
}