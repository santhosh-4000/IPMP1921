//https://practice.geeksforgeeks.org/problems/rotate-bits4524/1
 vector <int> rotate (int n, int d)
        {
            //code here.
            d=d%16;
            uint16_t k=pow(2,16)-1,tmp=n;
            vector <int> vec;
            k>>=d;
            
            k=k|tmp;
            k>>=(16-d);
            tmp<<=d;
            tmp|=k;
            
            vec.push_back(tmp);
            
            tmp=n;k=pow(2,16)-1;
            k<<=d;
            
            k=k|tmp;
            k<<=(16-d);
            tmp>>=d;
            tmp|=k;
            
            //cout<<tmp;
            vec.push_back(tmp);
            
            return vec;
        }

//(n<<d)&&(n>>(32-d)) - anticlockwise
//(n>>d)&&(n<<(32-d)) -
