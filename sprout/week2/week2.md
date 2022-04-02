<script type="text/javascript" src="http://cdn.mathjax.org/mathjax/latest/MathJax.js?config=TeX-AMS-MML_HTMLorMML"></script>
<script type="text/x-mathjax-config">
    MathJax.Hub.Config({ tex2jax: {inlineMath: [['$', '$']]}, messageStyle: "none" });
</script>

# week2手寫作業 戴偉璿
## 第一題：
> $note:\displaystyle\lim_{x\to \infty}k=k,\displaystyle\lim_{x\to \infty}\cfrac{1}{x}=0$

$\text{a}.$

$\displaystyle\lim_{n\to \infty}\cfrac{3n+1}{n-1}=\cfrac{{\displaystyle\lim_{n\to \infty}(3+\frac{1}{n}})}{{\displaystyle\lim_{n\to \infty}(1-\frac{1}{n}})}=\cfrac{3}{1}=3\\$

$\text{b}.$
$\displaystyle\lim_{n\to \infty}\cfrac{n}{n^2+1}=\cfrac{{\displaystyle\lim_{n\to \infty}1}}{{\displaystyle\lim_{n\to \infty}(n+\frac{1}{n}})}=\cfrac{1}{n}$

>$note:f(n)\in O(g(n))\Leftrightarrow$ $\exist k>0,\exist N,\forall n>N,f(n)\le k\cdot g(n)$

$\text{c}.$
$f(n)\in O(2^n)\Longleftrightarrow f(n)\in O(2^{n+1})\\$
$(1).proof\;f(n)\in O(2^n)\Longrightarrow f(n)\in O(2^{n+1})\\$
$\because f(n)\in O(2^n)\\$
$\therefore\exist k\ge 0$,$\displaystyle\lim_{n\to \infty}\cfrac{f(n)}{2^n}=k\\$

$\therefore\displaystyle\lim_{n\to \infty}\cfrac{f(n)}{2^{n+1}}=\displaystyle\lim_{n\to \infty}\cfrac{f(n)}{2^n}\cdot\cfrac{1}{2}=k\cdot\cfrac{1}{2}$，仍為一常數

$\therefore f(n)\in O(2^{n+1})$，成立

$(2).proof\;f(n)\in O(2^n)\Longleftarrow f(n)\in O(2^{n+1})\\$
$\because f(n)\in O(2^{n+1})\\$
$\therefore\exist k\ge 0$,$\displaystyle\lim_{n\to \infty}\cfrac{f(n)}{2^{n+1}}=l\\$
$\therefore\displaystyle\lim_{n\to \infty}\cfrac{f(n)}{2^n}=\displaystyle\lim_{n\to \infty}\cfrac{f(n)}{2^{n+1}}\cdot 2=l\cdot 2$，仍為一常數

$\therefore f(n)\in O(2^n)$，成立

由$(1),(2),$得證$f(n)\in O(2^n)\Longleftrightarrow f(n)\in O(2^{n+1})\\$

$\text{d}.$
$f(n)\in O(n!)\Longleftrightarrow f(n)\in O((n+1)!)\\$
$(1).proof\;f(n)\in O(n!)\Longrightarrow f(n)\in O((n+1)!)\\$
$\because f(n)\in O(n!)\\$
$\therefore\exist k\ge 0$,$\displaystyle\lim_{n\to \infty}\cfrac{f(n)}{n!}=k$

$\therefore\displaystyle\lim_{n\to \infty}\cfrac{f(n)}{(n+1)!}=\displaystyle\lim_{n\to \infty}\cfrac{f(n)}{n!}\cdot\cfrac{1}{n+1}=\displaystyle\lim_{n\to \infty}k\cdot\cfrac{1}{n+1}=0$，仍為一常數

$\therefore f(n)\in O(n!)\\$

$(2).proof\;f(n)\in O(n!)\Longleftarrow f(n)\in O((n+1)!)\\$
$\because f(n)\in O((n+1)!)\\$
$\therefore\exist k\ge 0$,$\displaystyle\lim_{n\to \infty}\cfrac{f(n)}{(n+1)!}=l\\$
$\therefore\displaystyle\lim_{n\to \infty}\cfrac{f(n)}{n!}=\displaystyle\lim_{n\to \infty}\cfrac{f(n)}{(n+1)!}\cdot (n+1)=\displaystyle\lim_{n\to \infty}l\cdot (n+1)=\infty$，無法收斂成一常數

假設命題成立，設$f(n)=(n+1)!$，則

$\displaystyle\lim_{n\to \infty}\cfrac{f(n)}{n!}=\displaystyle\lim_{n\to \infty}\cfrac{(n+1)!}{n!}=\displaystyle\lim_{n\to \infty}n+1=\infty$

此處產生矛盾，故$f(n)\in O(n!)\Longleftarrow f(n)\in O((n+1)!)$不成立，故原命題不成立。


$\therefore f(n)\in O(n!)$

由$(1),(2),$得證$f(n)\in O(n!)\Longleftrightarrow f(n)\in O((n+1)!)\\$

## 上次沒證明出來的第四題

> 題目：序列開始時只包含一個正整數 $n$，接著每次對此序列進行如下操作：在序
列中找到任意一個大於 1 的正整數 $k$，接著把此數換成任意兩個正整數 $a, b$，其中$a + b = k$，則此操作得 $a × b$ 分，且數列會多出一項。重複進行以上操作，直到序列中的數均為 1 為止。試證：所有操作的得分總和為$\cfrac{n^2-n}{2}$

假設命題成立，

$n+1=(i)+(n-i+1)$，此步驟得$i(n-i+1)=ni-i^2+i$分

$i$得分為：$\cfrac{i^2-i}{2}$，$n-i+1$得分為$\cfrac{(n-i+1)^2-(n-i+1)}{2}$

將三步驟的分數相加：$ni-i^2+i+\cfrac{i^2-i}{2}+\cfrac{(n-i+1)^2-(n-i+1)}{2}=\cfrac{n^2+n}{2}$，成立

故命題成立。




$\lim_{n\to \infty}\cfrac{3n+1}{n-1}=\cfrac{{\lim\limits_{n\to \infty}(3+\frac{1}{n}})}{{\lim_{n\to \infty}(1-\frac{1}{n}})}=\cfrac{3}{1}=3\\$


