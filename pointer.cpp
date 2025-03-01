#include<iostream>
using namespace std;

class Shop{
    int itemId[10];
    int itemPrice[10];
    int counter;
    public:
        void setItem();
        void setCounter(){
            counter = 0;
        }
        void display();
};
void Shop :: setItem(){
    cout<<"Enter id of "<<counter+1<<" item"<<endl;
    cin>>itemId[counter];
    cout<<"Enter price of item no "<<counter+1<<" item"<<endl;
    cin>>itemPrice[counter];
    counter++;
}

void Shop :: display(){
    for (int i = 0; i < counter; i++)
    {
        cout<<"The id of "<<i+1<<" item is "<<itemId[i]<<" and Price is "<<itemPrice[i]<<endl;
    }
    
};
int main()
{   
   Shop s;
   s.setCounter();
   s.setItem();
   s.setItem();
   s.display();
    return 0;
}
