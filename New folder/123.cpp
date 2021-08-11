	int easypaisa::mpin_vaildity(int x)
	{
		mpin=12345;
		try
		{
			if(enter_mpin==mpin)
			 return 0;
			else
			throw 1;
		}
		catch(int)
		{
			cout<<"Your Easypaisa Account PIN is Invalid! ";\
			system("pause");
			main_system();
		}
	}
	
	int easypaisa::mpin_ig(void)
	{
	int i=0,pin[5];
	while((pin[i]=getch()) != '\n' && i<5) 
	{	
    	i++;
    	cout<<"*";
	}
	if(pin[0]=='7' && pin[1]=='2' && pin[2]=='2' && pin[3]=='9' && pin[4]=='4')   
    {
    	cout<<"you are logined";
	}           
	else 
	{        
    	cout<<"Wrong pass";       
	}
	}
	
	int  mpin_vaildity(int);
	int mpin_ig(void);
	
	
	
	
	
	
