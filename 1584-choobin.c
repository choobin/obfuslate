int a,b,c,d,e,f,g,h[320],i,j,k,l,m[16],n,o,p[37268];
struct{int s[288];int t[16];}u,v;
#define w while
#define I "qrsaihjgkflemdncobp"
#define N(){j=0;w(j<a)putchar(p[j++]);a=0;}
#define F(n)p[a++]=n;if(a==37268)N()
#define L(n)({w(g<n){j=getchar();b|=j<<g;g+=8;}j=b&((1<<n)-1);b>>=n;g-=n;j;})
#define A(n)({j=c=k=0;w(1){k++;j=j<<1|L(1);if(j<n.t[k])break;c+=n.t[k];j-=n.t[k];}n.s[c+j];})
#define T(h,l,n)k=0;w(k<16)h.t[k++]=0;k=0;w(k<n)h.t[(l)[k++]]++;m[1]=0;k=2;w(k<16){m[k]=m[k-1]+h.t[k-1];k++;}k=0;w(k<n){if((l)[k]>0)h.s[m[(l)[k]]++]=k;k++;}
void E(int l,int d){c=0;if(a<d)c+=37268;c+=a-d;k=0;w(k<l){p[a++]=p[c++];if(a==37268){N()E(l-k-1,d);return;}if(c==37268)c=0;k++;}}
main(){L(24);o=L(8);L(24);L(24);if(o&4)L(L(8)|L(8)<<8);if(o&8)w(L(8));if(o&16)w(L(8));if(o&2)L(16);w(!f){f=L(1);l=L(2);if(l==0){n=g%8;if(n>0){b>>=n;g-=n;}i=L(8)|L(8)<<8;L(16);w(i-->0){F(L(8))}continue;}if(l==1){o=0;w(o<144)h[o++]=8;w(o<256)h[o++]=9;w(o<280)h[o++]=7;w(o<288)h[o++]=8;T(u,h,288)}if(l==2){e=L(5)+257;d=L(5)+1;k=L(4)+4;i=0;w(i<k)h[i++[I]-97]=L(3);w(i<19)h[i++[I]-97]=0;T(u,h,19)i=0;w(i<e+d){o=A(u);k=3;n=2;c=0;if(o<16){h[i++]=o;continue;}if(o==16)c=h[i-1];if(o==17)n++;if(o>17){k=11;n=7;}k+=L(n);j=0;w(j++<k)h[i++]=c;}T(u,h,e)T(v,h+e,d)}w(1){o=A(u);if(o<256){F(o)continue;}if(o==256)break;o-=257;if(o<9)e=o+3;else if(o==28)e=258;else{i=1;j=13;w(o>=j){j+=4;i++;}e=(1<<(i-1))*10+3+(o-j+4)*(1<<i);}n=0;if(o>7&&o<28)n=(o-4)/4;if(n>0)e+=L(n);if(l==1)o=((L(5)<<3)*8623620610ULL&1136090292240ULL)%1023;else o=A(v);n=0;if(o<4)d=o+1;else{n=(o>>1)-1;d=(1<<(n+1))+1+((o&1)<<n);}if(n>0)d+=L(n);E(e,d);}}N()}
