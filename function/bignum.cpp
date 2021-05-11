struct bignum{
    int len = 0;
    ll data[bignumlen];

    ll &operator[] (int x){return data[x];}

    const ll &operator[] (int x) const{return data[x];}

    bignum(){
        memset(data, 0, sizeof(data));
        len = 0;
    }

    void clear(){
        repi(i,len,1)
            data[i] = 0;
        len = 0;
    }

    int check(const bignum &a, const bignum &b){
        if(a.len > b.len)
            return 0;
        if(a.len < b.len)
            return 1;
        repi(i,a.len,1){
            if(a.data[i] < b.data[i])
                return 1;
            else
                return 0;
        }
        return 2;
    }

    bool operator < (const bignum &b){return check(*this, b)==1;}
    bool operator > (const bignum &b){return check(*this, b)==0;}
    bool operator == (const bignum &b){return check(*this,b)==2;}
    bool operator >= (const bignum &b){return *this > b || *this == b;}
    bool operator <= (const bignum &b){return *this < b || *this == b;}
    bool operator != (const bignum &b){return check(*this, b)!=2;}

    bignum operator = (ll x){
        clear();
        while(x){
            data[++len] = x % base;
            x /= base;
        }
        return *this;
    }

    bignum operator = (const bignum &b){
        clear();
        rep(i,1,b.len)
            data[i] = b.data[i];
        len = b.len;
        return *this;
    }

    bignum(ll x){
        clear();
        len = 0;
        *this = x;
    }

    bignum operator *(const bignum &b){
        bignum tmp;
        rep(i,1,len){
            if(data[i]){
                rep(j,1,b.len){
                    if(b.data[j]){
                        tmp[i+j-1] += data[i] * b.data[j];
                        tmp[i+j] += tmp[i+j-1] / base;
                        tmp[i+j-1] %= base;
                    }
                }
            }
        }
        tmp.len = len + b.len - 1;
        while(tmp[tmp.len + 1]) ++tmp.len;
        return tmp;
    }

    bignum operator *(ll x){
        bignum tmp;
        rep(i,1,len)
            tmp[i] = data[i] * x;
        rep(i,1,len){
            tmp[i+1] += tmp[i] / base;
            tmp[i] %= base;
        }
        tmp.len = len;
        while(tmp[tmp.len + 1])
            ++tmp.len;
        return tmp;
    }

     bignum operator / (const bignum &b){
        int l1 = (len-1) * blen, l2 = (b.len - 1) * blen;
        ll x = data[len], y = b[b.len];
        while(x) ++l1, x /= 10;
        while(y) ++l2, y /= 10;
        bignum tmp, chu, B;

        chu = *this, B = b;
        for(int i = 1; i * blen <= l1 - l2; ++i)
            B *= base;
        for(int i = 1; i <= (l1 - l2) % blen; ++i)
            B *= 10;
        repi(i,l1-l2,0){
           x = 0;
           while(chu >= B) chu -= B, ++x;
           tmp[i / blen + 1] = tmp[i / blen + 1] * 10 + x;
           B /= 10;
        }
        tmp.len = (l1-l2)/blen + 1;
        while(tmp.len > 1 && !tmp[tmp.len]) --tmp.len;
        return tmp;
    }

    bignum operator +(const bignum &b){
        bignum tmp;
        int l = max(len, b.len);
        rep(i,1,l)
            tmp[i] = data[i] + b[i];
        rep(i,1,l)
            tmp[i+1] += tmp[i] / base, tmp[i] %= base;
        tmp.len = l;
        while(tmp[tmp.len+1]) ++tmp.len;
        return tmp;
    }

    bignum operator +(ll x){
        bignum tmp;
        tmp = *this;
        tmp[1] += x;
        rep(i,1,len)
            tmp[i+1] += tmp[i] / base, tmp[i] %= base;
        tmp.len = len;
        while(tmp[tmp.len+1])
            ++tmp.len;
        return tmp;
    }

    bignum operator -(const bignum &b){
        bignum tmp;
        rep(i,1,len)
            tmp[i] = data[i] - b[i];
        rep(i,1,len)
            if(tmp[i] < 0)
                tmp[i] += base, tmp[i+1]--;
        tmp.len = len;
        while(tmp.len > 1 && tmp[tmp.len]==0)
            --tmp.len;
        return tmp;
    }

    bignum operator -(ll x){
        bignum tmp = *this;
        tmp[1] -= x;
        rep(i,1,len)
            if(tmp[i] < 0)
                tmp[i] += base, tmp[i+1]--;
        tmp.len = len;
        while(tmp.len > 1 && tmp[tmp.len]==0)
            --tmp.len;
        return tmp;
    }

    bignum operator / (ll x){
        bignum tmp;
        ll y = 0;
        repi(i,len,1){
            y = y * base + data[i];
            tmp[i] = y / x;
            y %= x;
        }
        tmp.len = len;
        while(tmp.len > 1 && tmp[tmp.len]==0)
            --tmp.len;
        return tmp;
    }

    bignum operator -= (const bignum &b){return *this = *this - b;}
    bignum operator += (const bignum &b){return *this = *this + b;}
    bignum operator *= (const bignum &b){return *this = *this * b;}
    bignum operator /= (const bignum &b){return *this = *this / b;}
    bignum operator -= (ll b){return *this = *this - b;}
    bignum operator += (ll b){return *this = *this + b;}
    bignum operator *= (ll b){return *this = *this * b;}
    bignum operator /= (ll b){return *this = *this / b;}

    void read(){
        char c[bignumlen * blen + 10];
        scanf("%s", c+1);
        int l = strlen(c+1);
        clear();
        ll x;
        rep(i,1,(l-1) / blen + 1){
            x = 0;
            for(int j = l - blen*i + 1; j <= l - blen * i + blen; ++j)
                if(j >= 1)
                    x = x * 10 + (c[j] - '0');
            data[++len] = x;
        }
    }

    void write(){
        printf("%lld", data[len]);
        repi(i,len-1,1)
            printf("%0*lld",blen,data[i]);
    }
}a, b, c;