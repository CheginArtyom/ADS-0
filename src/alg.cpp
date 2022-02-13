// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    // поместить сюда текст реализации алгоритма (на С++)
int c;
cin>>a>>b;
while(b){
c=a%b;
a=b;
b=c;
}
return a;    
}
