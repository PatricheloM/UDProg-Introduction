extern int foo;
void print_foo();
void print(int);


void swap_v(int a, int b)
{
	int temp; temp = a, a=b; b=temp;
}



void swap_r(int& a, int& b)
{ 
	int temp; temp = a, a=b; b=temp; 
}




void swap_cr(const int& a, const int& b)
{ 
	int temp; temp = a, a=b; b=temp; 
}
