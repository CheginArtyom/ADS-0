int gcd(int a, int b){
int c;
cin>>a>>b;
while(b){
c=a%b;
a=b;
b=c;
}
return a;    
}
