# 單字測驗網站的架設

## 緣起

學測的英文相當重要，其中，單字量算是最重要的一環。為了能讓我們有更好的成績，班導師幫我們製作了一本「英文行事曆」，每天規劃了三十左右的單字進度。但是只有用看的很難將單字背下來，因此我決定架設一個能夠協助測驗單字(中翻英)的網站。

參考了許多資料，最終我使用了js+html成功在github上面架設。

## 內容

單字測驗總共有分成兩個版本，第一個算是實驗版本，較為簡陋，題目的內容固定。確定好基本框架後，我製作了第二個版本，能夠隨機出題。

### 版本1

#### 想法

直接利用html顯示出題幹，再利用javascript驗證答案

#### Source Code
``` html
<!DOCTYPE html>
<html>
	<head>
		<meta charset="utf-8">
	  <title>七月一日單字測驗</title>
	</head>
	
	<body>
		<article>
		<h2>七月一日單字測驗</h2>
		<h3>給定對應的中文，請輸入英文</h3><br>
		<script>
			
			var id;
			var correct=[];

			var ansl=["achievement","affordable","explorer","decease","emotionalism",
					"fashionable","jeopardize","background","fascinate","adverse"];

					function check(){
				var score=0;
				for(var i=0;i<10;++i){
					var id="ans"+(i+1);
					var x=document.getElementById(id).value;
					if(ansl[i]==x)++score,correct[i]=1;
					else correct[i]=0;
				}
				var out="scroe:"+score*10+"/100<br>";
				for(var i=0;i<10;++i){
					if(i!=9)out+="0";
						out+=(i+1)+":";
					
						if(correct[i])out+="correct";
					else out+="incorrect,the answer is:"+ansl[i];
					out+="<br>";
				}
				out+='<a href="https://josh930908.github.io/july01.html">back</a>';
			//	alert(out);
			document.write(out);
			}
		</script>

		1.名詞_成就，成功(a_____t)<br>
		<input type="text" input id="ans1"><br><br>
		2.形容詞_可負擔的(a_____e)<br>
		<input type="text" input id="ans2"><br><br>
		3.名詞_勘探者(e_____r)<br>
		<input type="text" input id="ans3"><br><br>
		4.動詞_死亡，終止(d_____e)<br>
		<input type="text" input id="ans4"><br><br>
		5.名詞_多愁善感(e_____m)<br>
		<input type="text" input id="ans5"><br><br>
		6.形容詞_時尚的(f_____e)<br>
		<input type="text" input id="ans6"><br><br>
		7.動詞_危急，損害(j_____e)<br>
		<input type="text" input id="ans7"><br><br>
		8.名詞_背景(b_____d)<br>
		<input type="text" input id="ans8"><br><br>
		9.動詞_吸引，迷住(f_____e)<br>
		<input type="text" input id="ans9"><br><br>
		10.形容詞_不利的(a_____e)<br>
		<input type="text" input id="ans10"><br><br>
		<button name="submit" onClick="check()">Submit</button>
		</article>
	</body>
	
</html>

```

題幹的部份就是普通的html表單而已，比較複雜的在驗證的部份。我事先將答案建表，利用迴圈判斷是否正確。

### 版本2

#### 想法

利用js將html的內容輸出，每次會有不一樣的題幹

#### Source Code

``` html
<!DOCTYPE html>
<html>
	<head>
		<meta charset="utf-8">
	    <title>七月二日單字測驗</title>
	</head>
	
	<body onload="build()">
		<script>

			var id,n=92;
			var correct=[],arr=[];

			for(var i=0;i<n;++i)arr[i]=i;
            arr.sort(function(){
                return (0.5-Math.random());
            });

			var ansl=["information","informative","inform","format","formation","major","mayor","maturity",
					"mass","plurality","multitude","minority","operation","operate","operational","operative",
					"operator","cooperate","manipulate","original","origin","originate","organ","aboriginal",
					"initial","prime","primitive","passage","passageway","massage","passenger","passive",
					"paragraph","perform","performance","reform","transform","execute","pollution","pollute",
					"pollutant","contaminate","foul","spot","probable","probably","probablity","portable",
					"possible","feasible","impossible","product","productive","production","productivity",
					"produce","producer","conduct","goods","react","reaction","inact","respond","release",
					"lease","discharge","freed","situation","situate","situated","condition","circumstance",
					"tend","tendency","lend","bend","vend","trend","incline","unite","unity","union","finite",
					"definite","vary","variety","various","very","alter","transform","convert","modify",];

            var q=["(i______n)名詞_資訊","(i______e)形容詞_提供資訊的；增廣見聞的","(i______m)動詞_通知",
					"(f______t)名詞_格式","(f______n)名詞_結構；形狀 動詞_形成，構成","(m______r)形容詞_較重要的；主要的；重大的",
					"(m______r)名詞_市長","(m______y)名詞_成熟","(m______s)名詞_大多數；堆","(p______y)名詞_多數",
					"(m______e)名詞_多數","(m______y)名詞_少數","(o______n)名詞_操作 ","(o______e)動詞_運作；手術",
					"(o______l)形容詞_工作上的；運作中的","(o______e)名詞_工人","(o______r)名詞_操作員；運算子",
					"(c______e)動詞_合作","(m______e)動詞_操作；操弄","(o______l)形容詞_最初的","(o______n)名詞_源頭",
					"(o______e)動詞_發生","(o______n)名詞_器官","(a_______l)形容詞_土著的","(i______l)形容詞_最初的",
					"(p______e)形容詞_最初的","(p______e)形容詞_原始的","(p______e)名詞_文章段落","(p______y)名詞_通道",
					"(m______e)動詞_按摩","(p______r)名詞_乘客","(p______e)形容詞_消極的","(p______h)名詞_文章的段落",
					"(p______m)動詞_表演；執行","(p______e)名詞_表演；表現","(r______m)動詞_改革","(t______m)動詞_轉換",
					"(e______e)動詞_執行","(p______n)名詞_汙染","(p______e)動詞_汙染","(p______t)名詞_汙染物","(c______e)動詞_污染",
					"(f______l)動詞_弄髒；玷污","(s______t)動詞_弄髒；玷汙","(p______e)形容詞_可能的","(p______ly)副詞_可能地",
					"(p______y)名詞_可能性","(p______e)形容詞_手提式的","(p______e)形容詞_可能的","(f______e)形容詞_可能的；可行的",
					"(i______e)形容詞_不可能的","(p______t)名詞_產品","(p_______e)形容詞_有生產力的","(p_______n)名詞_生產",
					"(p_______y)名詞_生產率","(p_______e)動詞_生產，名詞_乳製品","(p_______r)名詞_生產者","(c______t)動詞_組織；實施",
					"(g______s)名詞_產品、貨物","(r______t)動詞_回應","(r______n)名詞_反應","(i______t)動詞_不作為",
					"(r______d)動詞_回應","(r_______e)動詞_釋放","(l______e)動詞_租","(d______e)動詞_釋放；排放",
					"(f______d)動詞_釋放；豁免","(s_______n)名詞_情況","(s______e)動詞_使處於…境地；使坐落於","(s______d)形容詞_位於…的",
					"(c______n)名詞_(身體或外在環境的)狀況","(c______e)名詞_情況","(t______d)動詞_傾向","(t______y)名詞_趨勢；傾向",
					"(l______d)動詞_出售","(b______d)動詞_彎;曲;俯","(v______d)動詞_出售；販賣","(t______d)名詞_趨勢",
					"(i______e)動詞_趨向","(u______e)動詞_團結","(u______y)名詞_團結","(u______n)名詞_聯盟","(f_______e)形容詞_有限的",
					"(d______e)形容詞_明確的","(v______y)動詞_改變","(v______y)名詞_多樣性","(v______s)形容詞_各式各樣的",
					"(v______y)副詞_非常","(a______r)動詞_改變","(t_______m)動詞_改變","(c_______t)動詞_變換",
					"(m______y)動詞_變更"];

			function check(){
            //    document.body.innerHTML="";
				var score=0;
				for(var i=0;i<10;++i){
					var id="ans"+(i+1);
					var x=document.getElementById(id).value;
					if(ansl[arr[i]]==x)++score,correct[i]=1;
					else correct[i]=0;
				}
                var out="<h2>七月二日單字測驗</h2><h3>給定對應的中文，請輸入英文</h3>score:";
                out+=score*10+"/100<br>";
                for(var i=0;i<10;++i){
                    var id="ans"+(i+1);
                    var x=document.getElementById(id).value;
                    
                    out+=(i+1);out+="."+q[arr[i]];out+="<br>";
                    out+='<input type="text" input id="'+id+'" value="'+x+'">';
                    if(correct[i])out+='<font color="green">correct</font><br>';
                    else out+='<font color="red">incorrect</font><br>the answer is:'+ansl[arr[i]];
                    out+="<br>";
                }
                
			    out+='<a href="https://josh930908.github.io/july02.html">back</a>';
                
		    //	document.write(out2);
                document.body.innerHTML=out;
			}
            function build(){
                var out="<h2>七月二日單字測驗</h2><h3>給定對應的中文，請輸入英文</h3><br>";

                for(var i=0;i<10;++i){
                    var id="ans"+(i+1);
                    out+=(i+1);out+="."+q[arr[i]];out+="<br>";
                    out+='<input type="text" input id="'+id+'"><br><br>';
                }
                out+='<button name="submit" onClick="check()">Submit</button>&nbsp&nbsp';
                document.write(out);
                
            }
            

		</script>
		
		
	</body>
	
</html>

```

利用一個`onload="build()"`的語法，讓頁面在載入的時候會執行`build()`函式，將題幹給隨機輸出。假設共有$n$題，則`build()`函式會先建立一個陣列$x_1\sim x_n,\forall x_i=i$，接著將他打亂，取前十個就是會顯示出來的題目。這樣不僅能夠隨機出題，更能夠保證題目不會重複。

我還優化了顯示答案的模式，版本一在顯示答案時會將整個頁面洗掉，變成只有答案，不方便校正。這一個版本會將你的輸入一併輸出出去，更大程度增加記憶。

## 心得

這算是我的第一個網頁專案，以前寫網頁都只是一些完全靜態，最多運用到`<a href>`的技巧。這是我寫的第一個可以互動的網頁，在寫的過程中我也不斷的去學習語法、精鍊技巧。基本上處於一個一邊學習一邊寫網頁的狀態。

我認為，這種學習方法才是最高效率的學習法，不僅增加我解決問題的能力，更在解決玩問題後，能夠學到新的語法。