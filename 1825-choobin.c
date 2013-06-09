int a,b,c,d,e,f,g,h[320],i,j,k,l,m[16],n,o,p,q,r;
struct{int s[288];int t[16];}u,v;
char w[37268];
#define x while
#define _ "qrsaihjgkflemdncobp"
#define I( ) {for(p=0;p<a;p++)putchar(w[p]);a=0;}
#define N(n) {w[a]=n;a++;if(a==37268)I();}
#define F(n) {x(g<n){p=getchar();b|=(p<<g);g+=8;}}
#define L(n) {b>>=n;g-=n;}
#define A(n) ({F(n);j=b&((1<<n)-1);L(n);j;})
#define T(n) {p=n;x(p>0){q=(n>8)?8:n;F(q);L(q);p-=q;}}
#define E(h,l,n) {m[1]=0;for(r=0;r<16;r++)h.t[r]=0;for(r=0;r<(n);r++)h.t[(l)[r]]++;for(r=2;r<16;r++)m[r]=m[r-1]+h.t[r-1];for(r=0;r<n;r++)if((l)[r]>0)h.s[m[(l)[r]]++]=r;}
#define R(h) ({p=q=r=0;x(1){r++;p=(p<<1)|A(1);if(p<h.t[r])break;q+=h.t[r];p-=h.t[r];}h.s[q+p];})
void D(int l,int d){q=0;if(a<d)q+=37268;q+=a-d;for(r=0;r<l;r++){w[a]=w[q];a++;q++;if(a==37268){I();D(l-(r+1),d);return;}if(q==37268)q=0;}}
main() {T(24);o=A(8);T(48);if(o&4)T((A(8)|(A(8)<<8)));if(o&8)x(A(8));if(o&16)x(A(8));if(o&2)T(16);x(!f){f=A(1);l=A(2);if(l==0){if(g%8>0)L(g%8);T(16);x(((A(8)<<8)|A(8))>0)N(A(8));continue;}else if(l==1){o=0;x(o<144)h[o++]=8;x(o<256)h[o++]=9;x(o<280)h[o++]=7;x(o<288)h[o++]=8;E(u,h,288);o=0;x(o<32)h[o]=5;E(v,h,32);}else if(l==2){e=A(5)+257;d=A(5)+1;c=A(4)+4;for(i=0;i<c;i++)h[i[_]-97]=A(3);for(i=c;i<19;i++)h[i[_]-97]=0;E(u,h,19);i=0;x(i<e+d){o=R(u);if(o<16){h[i]=o;i++;continue;}else if(o==16){r=3;n=2;k=h[i-1];}else if(o==17){r=3;n=3;k=0;}else{r=11;n=7;k=0;}r+=A(n);for(j=0;j<r;j++){h[i]=k;i++;}}E(u,h,e);E(v,h+e,d);}x(1){o=R(u);if(o<256){N(o&0xff);continue;}else if(o==256)break;else{o-=257;if(o<9)e=o+3;else if(o==28)e=258;else{i=1;j=13;x(o>=j){j+=4;i++;}e=((1<<(i-1))*10)+3+((o-(j-4))*(1<<i));}n=0;if(o>7&&o<28)n=(o-4)/4;}if(n>0)e+=A(n);if(l==1)o=((A(5))*0x0202020202ULL&0x010884422010ULL)%1023;else o=R(v);n=0;if(o<4)d=o+1;else{n=(o>>1)-1;d=(1<<(n+1))+1+((o&1)<<n);}if(n>0)d+=A(n);D(e,d);}}I();}
