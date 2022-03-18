///107-2 P1. 生物資訊：基因序列比對 (P1.CPP)
///DP - LCS
/*
ACCGGTGGACAATTCA
GGAAAGAGATATGCAC

9
GGGGAATCA
*/

#include <iostream>
#include <cstring>
#define MAX 1005
using namespace std;
int n1,n2;
char s1[MAX],s2[MAX];
char S1[MAX],S2[MAX];

int length[MAX][MAX];
int preev[MAX][MAX]; // 記錄每一格的的結果是從哪一格而來
int lcs[MAX];
void LCS();
void print_LCS(int,int);

int main()
{
    while(cin >> S1 >> S2)
    {
        n1 = strlen(S1);
        n2 = strlen(S2);
        for (int i=0; i<n1 ; i++) s1[i+1] = S1[i];
        for (int i=0; i<n2 ; i++) s2[i+1] = S2[i];
        LCS();
    }
    return 0;

}

void LCS()
{
    for (int i=0; i<=n1; i++) length[i][0] = 0;
    for (int j=0; j<=n2; j++) length[0][j] = 0;

    for (int i=1; i<=n1; i++)
        for (int j=1; j<=n2; j++)
            if (s1[i] == s2[j])
            {
                length[i][j] = length[i-1][j-1] + 1;
                preev[i][j] = 0; // 左上方
            }
            else
            {
                if (length[i-1][j] < length[i][j-1])
                {
                    length[i][j] = length[i][j-1];
                    preev[i][j] = 1; // 左方
                }
                else
                {
                    length[i][j] = length[i-1][j];
                    preev[i][j] = 2; // 上方
                }
            }

    cout <<length[n1][n2] << endl;
    //print_LCS(n1, n2);
    cout << endl;
}

// 遞迴版本
void print_LCS(int i, int j)
{
    // 第一個或第二個序列為空集合就停止
    if (i == 0 || j == 0) return;

    if (preev[i][j] == 0)        // 左上方
    {
        print_LCS(i-1, j-1);
        cout << s1[i];  // 印出LCS的元素
    }
    else if (preev[i][j] == 1)   // 左方
        print_LCS(i, j-1);
    else if (preev[i][j] == 2)   // 上方
        print_LCS(i-1, j);
}


/*
CTAGCGAAAG
CCCTCTTATG
5
CTCAG

CTAGCGAAAGCCCTCTTATG
TGACGACGATTATACGTT
11
TAGCGAAAGTT

CTAGCGAAAGCCCTCTTATGTGACGACGATTATACGTTTATTACCGCTCGTGACCTTCCA
GTAAGAGAGGACACAAACCGCTGAGGAGTGGTATCAAACCCTTAGACA
33
TAGGAAACCCCTAGGAGGTATAAACCCTTGACA

CTAGCGAAAGCCCTCTTATGTGACGACGATTATACGTTTATTACCGCTCGTGACCTTCCAGTAAGAGAGGACACAAACCGCTGAGGAGTGGTATCAAACCCTTAGACACACCGGACCCCGAACGTTTATGAACGAATTTCCTCTCCCACGAAAACGGTAT
ATGCGTTCAATGAGGCGTGGCACTAAGGTTGCGTTCACCACGTTGCTGATGGGCCATCCTTTATGGAAGGACCACCGAAGATACATTGGTAAGTGAAATCCAGGCAATCTCGGCTGGATCCGCCTTACACGACCGGCACCGCGGCTACCGCGACTTTGTCCCACCTCGACGATAACGTATCTCCGGGCCGCAAACGGACC
115
TGCGAAAGCCCTTTTTACACGTTATACTTTATACCCCGTACTTGTAAGAAACACAACCGCTGGAGTTACAACCGCACCCGGACCCGACTTTATGACGAATTCTCCCCCAAACGGA

CTAGCGAAAGCCCTCTTATGTGACGACGATTATACGTTTATTACCGCTCGTGACCTTCCAGTAAGAGAGGACACAAACCGCTGAGGAGTGGTATCAAACCCTTAGACACACCGGACCCCGAACGTTTATGAACGAATTTCCTCTCCCACGAAAACGGTATATGCGTTCAATGAGGCGTGGCACTAAGGTTGCGTTCACCA
CGTTGCTGATGGGCCATCCTTTATGGAAGGACCACCGAAGATACATTGGTAAGTGAAATCCAGGCAATCTCGGCTGGATCCGCCTTACACGACCGGCACCGCGGCTACCGCGACTTTGTCCCACCTCGACGATAACGTATCTCCGGGCCGCAAACGGACCTACAGTGTCGAACCACAAGATCATACCAAGAAGTCATCAC
132
CTGCGAGCCCTTTATGGACACGAATACATTGGTAAGTAAAAGGCAACCGCTGGATCCCCTTACACACCGGACCCGCTAGCGATTTCCCCCCACGAAACGTATTGCGCAAAGGCGTGGCACAAGTTGGTTCAC
*/
