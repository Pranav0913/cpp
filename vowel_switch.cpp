#include<iostream>
using namespace std;
int main()
{
    char p;
    cout<<"Enter the value of p:";
    cin>>p;
    switch(p)
    {
    	case 'a':
    		cout<<"vowel is a";
    		break;
	
	    case 'e':
	    	cout<<"vowel is e";
	    	break;
	    	
	    case 'i':
	    	cout<<"vowel is i";
	    	break;	
	    
		case 'o':
	    	cout<<"vowel is o";
	    	break;
			
		case 'u':
	    	cout<<"vowel is u";
	    	break;
			
					
	    	default:
	    		cout<<"Invalid";
    }

	

	return 0;
}
