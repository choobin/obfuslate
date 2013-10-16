#define I while
#define N d=0;I(d<a)putchar(e[d++]);a=0;
#define F(n)e[a++]=n;if(a==37268){N}
#define L(n)({int b;I(g<n){b=getchar();k|=b<<g;g+=8;}b=k&((1<<n)-1);k>>=n;g-=n;b;})
#define A(n)({d=c=b=0;I(1){b++;d=d<<1|L(1);if(d<n.r[b])break;c+=n.r[b];d-=n.r[b];}n.q[c+d];})
#define T(i,j,k){n[b]=n[b-1]+i.r[b-1];b++;}b=0;I(b<k){if(b[(j)]>0)i.q[n[b[(j)]]++]=b;b++;}
#define E(i,j,k)b=0;I(b<16)b++[i.r]=0;b=0;I(b<k)i.r[b++[(j)]]++;n[1]=0;b=2;I(b<16)T(i,j,k)

int a,b,c,d,e[37268]; _(int i,int j){c=0;if(a<j)c+=37268;c+=a-j;b=0;I(b<i){e[a
++]=e[c++];if(a==37268){N;_(i-b-1,j);return;}if(c==37268)c=0;b++;}}int f,g,h,i
,j,k,l,m,n[16],o[320],p;struct{int q[288];int r[16];}s,t;main(){L(24);h=L(8);L
(24);L(24);if(h&4)L((L(8)|L(8)<<8));if(h&8)I(L(8));if(h&16)I(L(8));if(h&2)L(16
);I(!f){f=L(1);l=L(2);if(l==0){m=g%8;if(m>0){k>>=m;g-=m;}i=L(8)|L(8)<<8;L(16);
I(i-->0){F(L(8))}continue;}if(l==1){h=0;I(h<144)o[h++]=8;I(h<256)o[h++]=9;I(h<
280)o[h++]=7;I(h<288)o[h++]=8;E(s,o,288)}if(l==2){p=L(5)+257;j=L(5)+1;b=L(4)+4
;i=0;I(i<76)o[i++]=0;i=0;I(i<b)o[i++["qrsaihjgkflemdncobp"]-97]=L(3);E(s,o,19)
i=0;I(i<p+j){h=A(s);b=3;m=2;c=0;if(h<16){o[i++]=h;continue;}if(h==16)c=o[i-1];
if(h==17)m++;if(h>17){b=11;m=7;}b+=L(m);d=0;I(d++<b)o[i++]=c;}E(s,o,p)E(t,o+p,
j)}I(1){h=A(s);if(h<256){F(h)continue;}if(h==256)break;h-=257;if(h<9)p=h+3;el\
se if(h==28)p=258;else{i=1;d=13;I(h>=d){d+=4;i++;}p=(1<<(i-1))*10+3+(h-d+4)*(1
<<i);}m=0;if(h>7&&h<28)m=(h-4)/4;if(m>0)p+=L(m);if(l==1)h=((L(5)<<3)*86236206\
10ULL&1136090292240ULL)%1023;else{h=A(t);}m=0; if(h<4)j=h+1;else{m=(h>>1)-1;j=
(1<<(m+1))+1+((h&1)<<m);}if(m>0)j+=L(m);_(p,j);}}N}
