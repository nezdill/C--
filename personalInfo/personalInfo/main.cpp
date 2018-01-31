
#include <iostream>
#include <string>
using namespace std;

class PersonalInfo
{
    string name, address, phoneNum;
    int age;
public: void setName(string n){
    name = n;
}
    void setAddress(string ad)
    {
        address = ad;
    }
    void setPhoneNum(string ph)
    {
        phoneNum = ph;
    }
    void setAge(int a)
    {
        age = a;
    }
    string getName()const
    {
        return name;
    }
    string getAdress()const
    {
        return address;
    }
    string getPhoneNum()const
    {
        return phoneNum;
    }
    int getAge()
    {
        return age;
    }
};
int main() {
    // varibles being declared
    string name, address, phoneNum;
    int age;
    
    PersonalInfo *person_info;
    person_info = new PersonalInfo();
    
    PersonalInfo *family_info;
    family_info = new PersonalInfo();
    
    PersonalInfo *friend_info;
    friend_info = new PersonalInfo();
    
    //Reading details and initializing the var
    cout << "\nPersonal Details:"<<endl;
    cout <<"\nEnter name:" <<endl;
    cin>> name;
    person_info->setName(name);
    cout<<"Enter address"<<endl;
    cin>> address;
    person_info->setAddress(address);
    cout<< "Enter age: "<<endl;
    cin>> age;
    person_info->setAge(age);
    cout<<"Enter phone Number"<<endl;
    cin>>phoneNum;
    person_info->setPhoneNum(phoneNum);
    
    cout<<"\nFamily Details:" <<endl;
    cout<<"\nEnter Family person name:"<<endl;
    cin>>name;
    family_info->setName(name);
    cout<<"Enter Family address"<<endl;
    cin>>address;
    family_info->setAddress(address);
    cout<<"Enter Family person age:" <<endl;
    cin>>age;
    family_info->setAge(age);
    cout<<"Enter Family phone Number"<<endl;
    cin>>phoneNum;
    
    cout <<"\nFriend Details:"<<endl;
    cout << "\nEnter Friend name:"<<endl;
    cin >> name;
    friend_info-> setName(name);
    cout<<"Enter Friend address"<<endl;
    cin>>address;
    friend_info->setAddress(address);
    cout << "Enter Friend age:"<<endl;
    cin>>age;
    friend_info->setAge(age);
    cout<<"Enter Friend phone Number"<<endl;
    cin>>phoneNum;
    friend_info->setPhoneNum(phoneNum);
    //personal details with mutator functions
    cout<<"\n\nPersonal details are:" <<endl;
    cout<<"Name: "<< person_info->getName()<<endl;
    cout<<"Address:"<< person_info->getAdress()<<endl;
    cout<<"Age:"<<person_info->getAge()<<endl;
    cout<<"Phone:"<<person_info->getPhoneNum()<<endl;
    
    //family details using mutator functions
    cout<<"\nFamily details are:" <<endl;
    cout<<"Name: "<< family_info->getName()<<endl;
    cout<<"Address:"<< family_info->getAdress()<<endl;
    cout<<"Age:"<<family_info->getAge()<<endl;
    cout<<"Phone:"<<family_info->getPhoneNum()<<endl;
    //friend details using mutator functions
    cout<<"\nFriend details are:" <<endl;
    cout<<"Name: "<< friend_info->getName()<<endl;
    cout<<"Address:"<< friend_info->getAdress()<<endl;
    cout<<"Age:"<<friend_info->getAge()<<endl;
    cout<<"Phone:"<<friend_info->getPhoneNum()<<endl;
    
    
    
    
    system ("pause");
    
    
    return 0;
}







