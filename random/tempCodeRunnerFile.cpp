void intake(string &s,int n,char ch)
    { 
        while(n)
        {
            s.push_back(ch);
            n--;
        }
    }

int help(string &s,int num,int n,int n2,char ch,char ch2)
 {
    if(num/n>0)
        {intake(s,num/n,ch);
         num-=(num/n)*n;
         }
        if(num%n==n2)
        {intake(s,1,ch2);
         intake(s,1,ch);
         num-=n2;
         }
         return num;
 }   
    
    string intToRoman(int num) {
        string s;
        num=help(s,num,1000,900,'M','C');
        num=help(s,num,500,400,'D','C');
        num=help(s,num,100,90,'C','X');
        num=help(s,num,50,40,'L','X');
        num=help(s,num,10,9,'X','I');
        num=help(s,num,5,4,'V','I');
        if(num/1>0)
        {
            intake(s,num,'I');
        }
        
        
        return s;
         }