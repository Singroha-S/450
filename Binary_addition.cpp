string addBinary(string a, string b) {
        string r;
        int i=a.length()-1 , j=b.length()-1;
        int c=0;
        while(i>=0 || j>=0){
            int sum = c;
            if(i>=0)
                sum=sum+a[i--]-'0';
            if(j>=0)
                sum+=b[j--]-'0';
            c = sum > 1 ? 1 : 0 ;
            r += to_string(sum%2);
        }
        if(c)
            r += to_string(c);
        reverse(r.begin(), r.end());
        return r;
    }
