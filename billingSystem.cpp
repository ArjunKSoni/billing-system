#include<iostream>
#include<string.h>
using namespace std;

class Menu {
    public:
        string cart[5]={"watermelon","banana","apple","mango","lichi"};
        int pric[5]={45,50,40,60,55};
        void showOptions(){
            for(int i=0;i<5;i++){
                cout<<"press "<<i+1<<" for "<<cart[i]<<"-price = "<<pric[i]<<endl;
            }
        }
};
class CustomerDetails{
    private:
        string customerName;long long int mobileNo;
    public:
        void setDetail(string n,long long int k){
            customerName=n;
            mobileNo=k;
        }
        void bill(Menu& a,int choice[],int qun[],int z,int total){
            cout<<"---------------BILL-----------------"<<endl;
            cout<<"BIll to "<<customerName<<"\t"<<"mobile No "<<mobileNo<<endl;
            for(int i=0;i<z;i++){
                int k=choice[i];
                cout<<i+1<<"> "<<a.cart[k]<<"\t"<<"quantity = "<<qun[i]<<"\t"<<"price= "<<a.pric[k]*(qun[i])<<endl;
            }cout<<"Total amount is :"<<endl;
            cout<<total<<endl;

        }
};

int main()
{   
    Menu a;
    CustomerDetails b;
    int choice, quantity, total=0,z=0;
    int pr[50],qun[50];
    bool tru=1;
    while(tru){
        cout<<"press (1) to enter customer details"<<endl;
        cout<<"press (2) to continue shopping"<<endl;
        cout<<"press (0) to exit"<<endl;
        int k;
        cin>>k;
        if(k==0)break;
        else if(k==1){
            string ne;
            long long int ke;
            cout<<"enter customer name : ";cin>>ne;
            cout<<"enter mobile no : ";cin>>ke;
            b.setDetail(ne,ke);        
        }
        else if(k==2){
            cout<<"What would you like to buy ? "<<endl;
            a.showOptions();
            cout<<"enter your choice: ";
            cin>>choice;
            cout<<"Enter quantity: ";
            cin>>quantity;
            pr[z]=choice-1;
            qun[z]=quantity;
            z++;
            switch(choice){
                case 1:
                    total=total+quantity*(a.pric[choice-1]);
                    break;
                case 2:
                    total=total+quantity*(a.pric[choice-1]);
                    break;
                case 3:
                    total=total+quantity*(a.pric[choice-1]);
                    break;
                case 4:
                    total=total+quantity*(a.pric[choice-1]);
                    break;
                case 5:
                    total=total+quantity*(a.pric[choice-1]);
                    break;
                default:
                    cout<<"you entered an invalid option"<<endl;
                    break;
            }
        }
    }b.bill(a,pr,qun,z,total);
    
}