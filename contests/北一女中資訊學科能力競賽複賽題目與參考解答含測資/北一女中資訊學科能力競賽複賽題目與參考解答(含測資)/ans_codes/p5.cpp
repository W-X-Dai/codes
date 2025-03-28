///107-2 P5. ������Y�޳N (p5.cpp)
///�r�꡹�� uva 11541

/*
�d�ҿ�J
3
A2B4D1A2
A12
A1B1C1D1

�d�ҿ�X
AABBBBDAA
AAAAAAAAAAAA
ABCD
*/

#include <iostream>
#include <cstring>
#include <cctype>
#include <cstdio>
using namespace std;
#define MAX 250

char s1[MAX];
char s2[MAX];
void dRLE();

int main()
{
    int n;
    while (cin>>n)
    {
        for (int i=1; i<=n; i++)
        {
            cin >> s1;
            //printf("Case %d: ",i);
            dRLE();
        }
    }
    return 0;
}

void dRLE()
{
    int len_s1 = strlen(s1);
    int ct=0;
    char c;
    for (int i=0; i<len_s1; i++)
    {

        if (isalpha(s1[i]))
        {
            c = s1[i];
        }
        else
        {
            ct = ct*10 + (s1[i]-'0');
        }
         if (i!=len_s1-1 && isalpha(s1[i+1]) || i==len_s1-1)
        {
             while(ct--) cout << c;
             ct = 0;
        }
    }
    cout << endl;
}

/*
3
A2B4D1A2
A12
A1B1C1D1

--
AABBBBDAA
AAAAAAAAAAAA
ABCD

--


3
A1B199
A1B2C3D4E5F6G7H8I9J10K11L12M13N14O15P16Q17R18S19
T20U21V22W23X24Y25Z26
--
ABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB
ABBCCCDDDDEEEEEFFFFFFGGGGGGGHHHHHHHHIIIIIIIIIJJJJJJJJJJKKKKKKKKKKKLLLLLLLLLLLLMMMMMMMMMMMMMNNNNNNNNNNNNNNOOOOOOOOOOOOOOOPPPPPPPPPPPPPPPPQQQQQQQQQQQQQQQQQRRRRRRRRRRRRRRRRRRSSSSSSSSSSSSSSSSSSS
TTTTTTTTTTTTTTTTTTTTUUUUUUUUUUUUUUUUUUUUUVVVVVVVVVVVVVVVVVVVVVVWWWWWWWWWWWWWWWWWWWWWWWXXXXXXXXXXXXXXXXXXXXXXXXYYYYYYYYYYYYYYYYYYYYYYYYYZZZZZZZZZZZZZZZZZZZZZZZZZZ

---
5
A2B4D1A2
A12
A1B1C1D1
A15C15D15
A14C14Z14

--
AABBBBDAA
AAAAAAAAAAAA
ABCD
AAAAAAAAAAAAAAACCCCCCCCCCCCCCCDDDDDDDDDDDDDDD
AAAAAAAAAAAAAACCCCCCCCCCCCCCZZZZZZZZZZZZZZ

----
20
E200
Q13K2J14I9U9O9N15L9N6M15
H14W9I10F9L5Y7P1V3P5N4
R12G7R9
X12F1N14
J12C2Q4V5
L1I15Y15
C3N10O9W1
R14X12O9B15
L7C10U2V1U1
T6C3Q10I2
S8S8E7K4H10T7X2S10R5D6
W5
Y12U2H12P12
A7W5E7F11Y6U14N10
D1O9V11P9E15I2
U3J6Q6Q11K10
A8B9
F12C4G120
R8A5N3Y60

--
EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE
QQQQQQQQQQQQQKKJJJJJJJJJJJJJJIIIIIIIIIUUUUUUUUUOOOOOOOOONNNNNNNNNNNNNNNLLLLLLLLLNNNNNNMMMMMMMMMMMMMMM
HHHHHHHHHHHHHHWWWWWWWWWIIIIIIIIIIFFFFFFFFFLLLLLYYYYYYYPVVVPPPPPNNNN
RRRRRRRRRRRRGGGGGGGRRRRRRRRR
XXXXXXXXXXXXFNNNNNNNNNNNNNN
JJJJJJJJJJJJCCQQQQVVVVV
LIIIIIIIIIIIIIIIYYYYYYYYYYYYYYY
CCCNNNNNNNNNNOOOOOOOOOW
RRRRRRRRRRRRRRXXXXXXXXXXXXOOOOOOOOOBBBBBBBBBBBBBBB
LLLLLLLCCCCCCCCCCUUVU
TTTTTTCCCQQQQQQQQQQII
SSSSSSSSSSSSSSSSEEEEEEEKKKKHHHHHHHHHHTTTTTTTXXSSSSSSSSSSRRRRRDDDDDD
WWWWW
YYYYYYYYYYYYUUHHHHHHHHHHHHPPPPPPPPPPPP
AAAAAAAWWWWWEEEEEEEFFFFFFFFFFFYYYYYYUUUUUUUUUUUUUUNNNNNNNNNN
DOOOOOOOOOVVVVVVVVVVVPPPPPPPPPEEEEEEEEEEEEEEEII
UUUJJJJJJQQQQQQQQQQQQQQQQQKKKKKKKKKK
AAAAAAAABBBBBBBBB
FFFFFFFFFFFFCCCCGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG
RRRRRRRRAAAAANNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY

---
49
E8
Q13K2J14I9U9O9N15L9N6M15
H14W9I10F9L5Y7P1V3P5N4
R12G7R9
X12F1N14
J12C2Q4V5
L1I15Y15
C3N10O9W1
R14X12O9B15
L7C10U2V1U1
T6C3Q10I2
S8S8E7K4H10T7X2S10R5D6
W5
Y12U2H12P12
A7W5E7F11Y6U14N10
D1O9V11P9E15I2
U3J6Q6Q11K1
A8B9
F12C4G12
R8A5N3Y6
D15S13K7B8U4A7L15Q8R6
K9N2C7B8B13N11
D4D6K1U8T13I7
G9C4Z6Q10W5L9M6K13E4
J9Z3Q8V4
V13K8F15C8T7N14H4N15F11
N4B14Q11S12P2K15V7
M5N10E15O9G10H4Y2H12J10P7
S14E5S3F14I4U5R5P7N15Q13
X12R8I5S7V6I9O2
Z12R6S10K5C3O14M15N8A14E12
J7
B4M13P12U9H8L13
R13E4M10A8U7O2Q13
S8W11F1A13O5K12N4
L10K15V11
B1V13J12I2Z12S11N7Z10
N7F2Z12S2W9U5A9
C11U5
Z9K8X12L4J15Q11F4I3V1
W5Q5D6A2G2M15B5V5Y5
I3N6V2V8N8O10X13J15
N7Y4
S7I6V14H1S7D15M6P7M8
A3A1J11V4F12
M6X1Y2F10U3
P10S4S1X8C8P11I13U12H9X9
J14R10K10G1K3O2Q5O4B14B9
O8H5Q7L15U9


--
EEEEEEEE
QQQQQQQQQQQQQKKJJJJJJJJJJJJJJIIIIIIIIIUUUUUUUUUOOOOOOOOONNNNNNNNNNNNNNNLLLLLLLLLNNNNNNMMMMMMMMMMMMMMM
HHHHHHHHHHHHHHWWWWWWWWWIIIIIIIIIIFFFFFFFFFLLLLLYYYYYYYPVVVPPPPPNNNN
RRRRRRRRRRRRGGGGGGGRRRRRRRRR
XXXXXXXXXXXXFNNNNNNNNNNNNNN
JJJJJJJJJJJJCCQQQQVVVVV
LIIIIIIIIIIIIIIIYYYYYYYYYYYYYYY
CCCNNNNNNNNNNOOOOOOOOOW
RRRRRRRRRRRRRRXXXXXXXXXXXXOOOOOOOOOBBBBBBBBBBBBBBB
LLLLLLLCCCCCCCCCCUUVU
TTTTTTCCCQQQQQQQQQQII
SSSSSSSSSSSSSSSSEEEEEEEKKKKHHHHHHHHHHTTTTTTTXXSSSSSSSSSSRRRRRDDDDDD
WWWWW
YYYYYYYYYYYYUUHHHHHHHHHHHHPPPPPPPPPPPP
AAAAAAAWWWWWEEEEEEEFFFFFFFFFFFYYYYYYUUUUUUUUUUUUUUNNNNNNNNNN
DOOOOOOOOOVVVVVVVVVVVPPPPPPPPPEEEEEEEEEEEEEEEII
UUUJJJJJJQQQQQQQQQQQQQQQQQK
AAAAAAAABBBBBBBBB
FFFFFFFFFFFFCCCCGGGGGGGGGGGG
RRRRRRRRAAAAANNNYYYYYY
DDDDDDDDDDDDDDDSSSSSSSSSSSSSKKKKKKKBBBBBBBBUUUUAAAAAAALLLLLLLLLLLLLLLQQQQQQQQRRRRRR
KKKKKKKKKNNCCCCCCCBBBBBBBBBBBBBBBBBBBBBNNNNNNNNNNN
DDDDDDDDDDKUUUUUUUUTTTTTTTTTTTTTIIIIIII
GGGGGGGGGCCCCZZZZZZQQQQQQQQQQWWWWWLLLLLLLLLMMMMMMKKKKKKKKKKKKKEEEE
JJJJJJJJJZZZQQQQQQQQVVVV
VVVVVVVVVVVVVKKKKKKKKFFFFFFFFFFFFFFFCCCCCCCCTTTTTTTNNNNNNNNNNNNNNHHHHNNNNNNNNNNNNNNNFFFFFFFFFFF
NNNNBBBBBBBBBBBBBBQQQQQQQQQQQSSSSSSSSSSSSPPKKKKKKKKKKKKKKKVVVVVVV
MMMMMNNNNNNNNNNEEEEEEEEEEEEEEEOOOOOOOOOGGGGGGGGGGHHHHYYHHHHHHHHHHHHJJJJJJJJJJPPPPPPP
SSSSSSSSSSSSSSEEEEESSSFFFFFFFFFFFFFFIIIIUUUUURRRRRPPPPPPPNNNNNNNNNNNNNNNQQQQQQQQQQQQQ
XXXXXXXXXXXXRRRRRRRRIIIIISSSSSSSVVVVVVIIIIIIIIIOO
ZZZZZZZZZZZZRRRRRRSSSSSSSSSSKKKKKCCCOOOOOOOOOOOOOOMMMMMMMMMMMMMMMNNNNNNNNAAAAAAAAAAAAAAEEEEEEEEEEEE
JJJJJJJ
BBBBMMMMMMMMMMMMMPPPPPPPPPPPPUUUUUUUUUHHHHHHHHLLLLLLLLLLLLL
RRRRRRRRRRRRREEEEMMMMMMMMMMAAAAAAAAUUUUUUUOOQQQQQQQQQQQQQ
SSSSSSSSWWWWWWWWWWWFAAAAAAAAAAAAAOOOOOKKKKKKKKKKKKNNNN
LLLLLLLLLLKKKKKKKKKKKKKKKVVVVVVVVVVV
BVVVVVVVVVVVVVJJJJJJJJJJJJIIZZZZZZZZZZZZSSSSSSSSSSSNNNNNNNZZZZZZZZZZ
NNNNNNNFFZZZZZZZZZZZZSSWWWWWWWWWUUUUUAAAAAAAAA
CCCCCCCCCCCUUUUU
ZZZZZZZZZKKKKKKKKXXXXXXXXXXXXLLLLJJJJJJJJJJJJJJJQQQQQQQQQQQFFFFIIIV
WWWWWQQQQQDDDDDDAAGGMMMMMMMMMMMMMMMBBBBBVVVVVYYYYY
IIINNNNNNVVVVVVVVVVNNNNNNNNOOOOOOOOOOXXXXXXXXXXXXXJJJJJJJJJJJJJJJ
NNNNNNNYYYY
SSSSSSSIIIIIIVVVVVVVVVVVVVVHSSSSSSSDDDDDDDDDDDDDDDMMMMMMPPPPPPPMMMMMMMM
AAAAJJJJJJJJJJJVVVVFFFFFFFFFFFF
MMMMMMXYYFFFFFFFFFFUUU
PPPPPPPPPPSSSSSXXXXXXXXCCCCCCCCPPPPPPPPPPPIIIIIIIIIIIIIUUUUUUUUUUUUHHHHHHHHHXXXXXXXXX
JJJJJJJJJJJJJJRRRRRRRRRRKKKKKKKKKKGKKKOOQQQQQOOOOBBBBBBBBBBBBBBBBBBBBBBB
OOOOOOOOHHHHHQQQQQQQLLLLLLLLLLLLLLLUUUUUUUUU

----
*/
