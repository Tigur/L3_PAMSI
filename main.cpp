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

    bool insert()
    {

        type value;
        int position;

        if(size==0)
        {
            (*this).push();

            return true;
        }


        cout << "enter value : "<< endl;
        cin >> value;
        cout << "enter position where the record should be placed : " << endl;
        cin >> position ;




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

    bool del( ) // możliwy seg "kasowanie nizaalokowane pamieci"
    {

        int position;

        cout << "enter position that should be erased: " << endl;
        cin >> position ;

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

    void push()
    {
        type value;

        cout << "enter value of element :" << endl;
        cin >> value;

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


void menu (List <int> & L)
{







    int option;

   // cin >> option;



    while ( option!=6)
    {
        cout <<"\n\n";
        cout << "1. push new element on the beginning of the List" << endl;
        cout << "2.insert element somewhere into the list"<< endl;
        cout << "3. delete an element of your choosing "<< endl;
        cout << "4. clear the List "<< endl;
        cout << "5. show the list"<< endl;
        cout << "6. EXIT" << endl;
        cout << "choose option :\n "<< endl;
        cin >> option;
        cout << "\n";

        switch (option)
        {
            case 1 : // dodaj element na początku.
                L.push();
                break;
            case 2 :
                L.insert();
                break;
            case 3:
                L.del();
                break;
            case 4:
                L.delAll();
                break;

            case 5:
                L.show();
                break;

            case 6:
                break;
        }
    }

}


int main()

{


    List <int> L;

    menu(L);





    return 0;
}