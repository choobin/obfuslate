int a,b,c,d,e,f,g,h[320],i,j,k,l,m[16],n,o,p[37268];
struct{int s[288];int t[16];}u,v;
#define w while
#define _ "qrsaihjgkflemdncobp"
#define I(){j=0;w(j<a)putchar(p[j++]);a=0;}
#define N(n)p[a]=n;a++;if(a==37268)I();
#define F(n)w(g<n){j=getchar();b|=j<<g;g+=8;}
#define L(n)b>>=n;g-=n;
#define A(n)({F(n);j=b&((1<<n)-1);L(n);j;})
#define T(n){k=n;w(k>0){A(8);k-=8;}}
#define E(h,l,n)k=0;w(k<16)h.t[k++]=0;k=0;w(k<n)h.t[(l)[k++]]++;m[1]=0;k=2;w(k<16){m[k]=m[k-1]+h.t[k-1];k++;}k=0;w(k<n){if((l)[k]>0)h.s[m[(l)[k]]++]=k;k++;}
#define R(h)({j=c=k=0;w(1){k++;j=j<<1|A(1);if(j<h.t[k])break;c+=h.t[k];j-=h.t[k];}h.s[c+j];})
void D(int l,int d){c=0;if(a<d)c+=37268;c+=a-d;k=0;w(k<l){p[a]=p[c];a++;c++;if(a==37268){I();D(l-k-1,d);return;}if(c==37268)c=0;k++;}}
main(){T(24);o=A(8);T(48);if(o&4)T(A(8)|A(8)<<8);if(o&8)w(A(8));if(o&16)w(A(8));if(o&2)T(16);w(!f){f=A(1);l=A(2);e=A(5)+257;d=A(5)+1;k=A(4)+4;i=0;w(i<k)h[i++[_]-97]=A(3);w(i<19)h[i++[_]-97]=0;E(u,h,19);i=0;w(i<e+d){o=R(u);k=3;n=2;c=0;if(o<16){h[i++]=o;continue;}if(o==16)c=h[i-1];if(o==17)n++;if(o>17){k=11;n=7;}k+=A(n);j=0;w(j++<k)h[i++]=c;}E(u,h,e);E(v,h+e,d);w(1){o=R(u);if(o<256){N(o&255);continue;}if(o==256)break;o-=257;if(o<9)e=o+3;else if(o==28)e=258;else{i=1;j=13;w(o>=j){j+=4;i++;}e=(1<<(i-1))*10+3+(o-j+4)*(1<<i);}n=0;if(o>7&&o<28)n=(o-4)/4;if(n>0)e+=A(n);o=R(v);n=0;if(o<4)d=o+1;else{n=(o>>1)-1;d=(1<<(n+1))+1+((o&1)<<n);}if(n>0)d+=A(n);D(e,d);}}I();}
