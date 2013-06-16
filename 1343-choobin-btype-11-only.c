int a,b,c,d,e,f,g,h[320],i,j,k,l,m[16],n,o,p[37268];
struct{int s[288];int t[16];}u,v;
#define w while
#define _ "qrsaihjgkflemdncobp"
#define I(){j=0;w(j<a)putchar(p[j++]);a=0;}
#define N(n)p[a++]=n;if(a==37268)I();
#define F(n)({w(g<n){j=getchar();b|=j<<g;g+=8;}j=b&((1<<n)-1);b>>=n;g-=n;j;})
#define L(n)({j=c=k=0;w(1){k++;j=j<<1|F(1);if(j<n.t[k])break;c+=n.t[k];j-=n.t[k];}n.s[c+j];})
#define A(h,l,n)k=0;w(k<16)h.t[k++]=0;k=0;w(k<n)h.t[(l)[k++]]++;m[1]=0;k=2;w(k<16){m[k]=m[k-1]+h.t[k-1];k++;}k=0;w(k<n){if((l)[k]>0)h.s[m[(l)[k]]++]=k;k++;}
void T(int l,int d){c=0;if(a<d)c+=37268;c+=a-d;k=0;w(k<l){p[a++]=p[c++];if(a==37268){I();T(l-k-1,d);return;}if(c==37268)c=0;k++;}}
main(){F(24);o=F(8);F(24);F(24);if(o&4)F(F(8)|F(8)<<8);if(o&8)w(F(8));if(o&16)w(F(8));if(o&2)F(16);w(!f){f=F(1);l=F(2);e=F(5)+257;d=F(5)+1;k=F(4)+4;i=0;w(i<k)h[i++[_]-97]=F(3);w(i<19)h[i++[_]-97]=0;A(u,h,19);i=0;w(i<e+d){o=L(u);k=3;n=2;c=0;if(o<16){h[i++]=o;continue;}if(o==16)c=h[i-1];if(o==17)n++;if(o>17){k=11;n=7;}k+=F(n);j=0;w(j++<k)h[i++]=c;}A(u,h,e);A(v,h+e,d);w(1){o=L(u);if(o<256){N(o);continue;}if(o==256)break;o-=257;if(o<9)e=o+3;else if(o==28)e=258;else{i=1;j=13;w(o>=j){j+=4;i++;}e=(1<<(i-1))*10+3+(o-j+4)*(1<<i);}n=0;if(o>7&&o<28)n=(o-4)/4;if(n>0)e+=F(n);o=L(v);n=0;if(o<4)d=o+1;else{n=(o>>1)-1;d=(1<<(n+1))+1+((o&1)<<n);}if(n>0)d+=F(n);T(e,d);}}I();}
