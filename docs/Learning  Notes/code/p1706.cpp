#include<iostream>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#include<cstring>
#include<stack>
#include<math.h>
#include<cctype>
#include<map>
#define LL long long
#define LD long double
#define US unsigned short
using namespace std;
template<typename _BidirectionalIterator>
    _GLIBCXX20_CONSTEXPR
inline bool next_permutation1(_BidirectionalIterator __first,
		     _BidirectionalIterator __last)
    {
      // concept requirements
      __glibcxx_function_requires(_BidirectionalIteratorConcept<
				  _BidirectionalIterator>)
      __glibcxx_function_requires(_LessThanComparableConcept<
	    typename iterator_traits<_BidirectionalIterator>::value_type>)
      __glibcxx_requires_valid_range(__first, __last);
      __glibcxx_requires_irreflexive(__first, __last);

      return std::__next_permutation1
	(__first, __last, __gnu_cxx::__ops::__iter_less_iter());
    }
int main(){
    LL n,x,a[10]={};
    cin>>n;
    for(LL i=1;i<=n;i++)a[i]=i;
    for(LL i=1;i<=n;i++)printf("%5lld",a[i]);
    printf("\n");
    while(next_permutation1(a+1,a+n+1)){
        for(LL i=1;i<=n;i++)printf("%5lld",a[i]);
        cout<<endl;
    }
}
