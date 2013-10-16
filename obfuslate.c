int a,b,c,d,e,f,g,h,i,j,k,l,m,n[16],o[320],p[37268];struct{int q[288];int r[16];}s,t;

#define I while
#define N j=0;I(j<a)putchar(p[j++]);a=0;
#define F(n)p[a++]=n;if(a==37268){N}
#define L(n)({int z;I(g<n){z=getchar();b|=z<<g;g+=8;}z=b&((1<<n)-1);b>>=n;g-=n;z;})
#define A(n)({j=c=k=0;I(1){k++;j=j<<1|L(1);if(j<n.r[k])break;c+=n.r[k];j-=n.r[k];}n.q[c+j];})
#define T(h,l,m){n[k]=n[k-1]+h.r[k-1];k++;}k=0;I(k<m){if(k[(l)]>0)h.q[n[k[(l)]]++]=k;k++;}
#define E(h,l,m)k=0;I(k<16)k++[h.r]=0;k=0;I(k<m)h.r[k++[(l)]]++;n[1]=0;k=2;I(k<16)T(h,l,m)

_(int l,int d){c=0;if(a<d)c+=37268;c+=a-d;k=0;I(k<l){p[a++]=p[c++];if(a==37268)
{N;_(l-k-1,d);return;}if(c==37268)c=0;k++;}}main(){L(24);h=L(8);L(24);L(24);if(
h&4)L((L(8)|L(8)<<8));if(h&8)I(L(8));if(h&16)I(L(8));if(h&2)L(16);I(!f){f=L(1);
l=L(2);if(l==0){m=g%8;if(m>0){b>>=m;g-=m;}i=L(8)|L(8)<<8;L(16);I(i-->0){F(L(8))
}continue;}if(l==1){h=0;I(h<144)o[h++]=8;I(h<256)o[h++]=9;I(h<280)o[h++]=7;I(h<
288)o[h++]=8;E(s,o,288)}if(l==2){e=L(5)+257;d=L(5)+1;k=L(4)+4;bzero(o,76);i=0;I
(i<k)o[i++["qrsaihjgkflemdncobp"]-97]=L(3);E(s,o,19)i=0;I(i<e+d){h=A(s);k=3;m=2
;c=0;if(h<16){o[i++]=h;continue;}if(h==16)c=o[i-1];if(h==17)m++;if(h>17){k=11;m
=7;}k+=L(m);j=0;I(j++<k)o[i++]=c;}E(s,o,e)E(t,o+e,d)}I(1){h=A(s);if(h<256){F(h)
continue;}if(h==256)break;h-=257;if(h<9)e=h+3;else if(h==28)e=258;else{i=1;j=13
;I(h>=j){j+=4;i++;}e=(1<<(i-1))*10+3+(h-j+4)*(1<<i);}m=0;if(h>7&&h<28)m=(h-4)/4
;if(m>0)e+=L(m);if(l==1)h=((L(5)<<3)*8623620610ULL&1136090292240ULL)%1023;else{
h=A(t);}m=0;if(h<4)d=h+1;else{m=(h>>1)-1;d=(1<<(m+1))+1+((h&1)<<m);}if(m>0)d+=L
(m);_(e,d);}}N}
