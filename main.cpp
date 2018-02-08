//Author:
#include<iostream>

using namespace std;

int main()
{

  char input;

  cout<<"What character do you want to know about?\n";

  cin>>input;

  if(input >= 'A' && input <= 'Z'){

    cout<<input<< " is an upper case letter!\n";

  } else if(input >= 'a' && input <= 'z'){

    cout<<input<< " is a lower case letter!\n";

  } else {

    cout<<"?! Pssh. What are you talking about?\n";

  }

  int value = input;

  cout<<"The ASCII value is: "<<value<<endl;

  return 0;
}
