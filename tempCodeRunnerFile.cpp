 #include <bits/stdc++.h> 
using namespace std; 

struct node {
	string str; 
	int num;
	double doub; 
	char x; 

	node(string str_ , int num_, double doub_, char x_) {
		str = str_; 
		num = num_; 
		doub = doub_; 
		x = x_;
        cout<<str<<num<<doub<<x<<endl; 
	}
};
int main(){
    node roshan("ram",77,70856,'A');
    return 0;
}