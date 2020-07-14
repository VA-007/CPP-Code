#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int main()
{
	string decrypt {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ '"};
	string encrypt {"qwertyuiopmnbvcxzasdfghlkjMNBQWERZXCVPOIUYTLAKSJDHFG#$"};
	string input {},encrypted_msg {},decrypted_msg {};
	char choice {};
	
	cout<<"Enter Your String: ";
	getline(cin,input);
	cout<<"You Entered : "<<input<<endl<<endl;
	
	for(char c: input)
	{
		size_t pos = decrypt.find(c);
	
		if(pos != string::npos)
		{
			char key = encrypt.at(pos);
			encrypted_msg += key;
		}
		else
		    encrypted_msg += c;
	}
	
	cout<<"Encrypting...\n\n";
	cout<<"Encrypted Message is: "<<encrypted_msg<<endl<<endl;
	
	for(char c: encrypted_msg)
	{
		size_t pos = encrypt.find(c);
		
		if(pos != string::npos)
		{
			char key = decrypt.at(pos);
			decrypted_msg += key;
		}
		else
		    decrypted_msg += c;
	}
	
	cout<<"Decrypting...\n\n";
	cout<<"Decrypted Message is : "<<decrypted_msg<<endl;
	
	
	//	do
//	{
//		cout<<"      Welcome to VA007's secret message Encryptor & Decryptor     \n";
//	    cout<<"===================================================================\n\n";
//	    cout<<"1 - Encrypt a message \n";
//	    cout<<"2 - Decrypt a message \n";
//	    cout<<"3 - Exit \n";
//	    cout<<"Please Enter yout Choice : ";
//	    cin>>choice;
//	    
//		switch (choice)
//	    {
//		    case '1' : cout<<"Enter Your String: ";
//	                   getline(cin,input);
//                       cout<<"You Entered : "<<input<<endl<<endl;
//	                   for(char c: input)
//	                   {
//		                   size_t pos = decrypt.find(c);
//	
//		                    if(pos != string::npos)
//		                    {
//			                     char key = encrypt.at(pos);
//			                    encrypted_msg += key;
//		                    }
//	                        else
//		                         encrypted_msg += c;
//	                    }
//	
//	                    cout<<"Encrypting...\n\n";
//	                    cout<<"Encrypted Message is: "<<encrypted_msg<<endl<<endl;
//	 
//		        break;
//		   
//		    case '2' :  cout<<"Enter Your String: ";
//	                    getline(cin,input);
//                        cout<<"You Entered : "<<input<<endl<<endl;
//			            for(char c: encrypted_msg)
//	                    {
//		                    size_t pos = encrypt.find(c);
//		                    char key = decrypt.at(pos);
//		
//		                    if(pos != string::npos)
//		                    {
//			                     decrypted_msg += key;
//	                      	}
//		                    else
//		                         decrypted_msg += c;
//	                    }
//	
//	                    cout<<"Decrypting...\n\n";
//	                    cout<<"Decrypted Message is : "<<decrypted_msg<<endl;
//		        break; 
//		
//		    case '3' : cout<<"Exiting......";
//		        break;
//		
//		    default : cout<<"Please Enter a valid choice;";   
//	   }
//	}while(choice != '3');
//	
	system("pause");
	return 0;
}

