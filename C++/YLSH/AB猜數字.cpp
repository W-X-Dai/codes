#include<bits/stdc++.h> 
/*using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
*/
namespace WindowsFormsApplication1
{
public partial class Form1 : Form
{
private int[] ans = new int[10];//���T����
private String[] gnum = new string[10];//�q�����׼Ʀr
private int tmp, r;
private Random ran = new Random();

public Form1()
{
InitializeComponent();
}

private void Form1_Load(object sender, EventArgs e)
{
label1.Text = "�Ʀr���L�C��";//[�ե�]���ӬO�q�Ʀr�C���A
label2.Text = "";
label3.Text ="�ثe��J" +textBox1.TextLength.ToString()+"�Ӧr";
label4.Text = "";
button1.Text = "�T�w";
button2.Text = "�ݵ���";
button3.Text = "����";
textBox1.MaxLength = 4;
for (int i = 0; i < 10; i++) 
{
ans[i] = i; 
}
for (int i = 0; i < 10; i++) {//�M�w����
r = ran.Next(0,10-i);
tmp= ans[r];
ans[r] = ans[9-i];
ans[9-i] = tmp;
}
}


//�q�Ʀr�C���P�_
private void button1_Click(object sender, EventArgs e)
{
string num;
int a = 0, b = 0;
if (textBox1.TextLength != 4) {
MessageBox.Show("�п�J4�Ӥ��@�˼Ʀr");
}

else { 
for (int j = 1; j <= 4; j++) 
{ 
gnum[j] = textBox1.Text.Substring(j - 1, 1);
num+=gnum[j]; 
} 
if ((gnum[1] == gnum[2] || gnum[1] == gnum[3] 
|| gnum[1] == gnum[4] || gnum[2] == gnum[3] 
|| gnum[2] == gnum[4] || gnum[3] == gnum[4])) 
{ 
MessageBox.Show("�Ф��n��J�@�˪�"); 
} 
else 
{ 
for (int k = 1; k <= 4; k++) { 
for (int l = 1; l <= 4; l++) { 
if (gnum[k] == ans[l].ToString()) 
{ 
if (k == l) { a++; } 
else if (k != l) { b++; } 
} 
} 
} 

textBox2.Text +=num+"--" a.ToString() + "A" + b.ToString() + "B" + "\r\n"; 
label4.Text = "�A�w�g�q�F" + (textBox2.Lines.Length - 1) + "���F"; 
textBox1.Focus(); textBox1.SelectAll(); 
} 
if (a == 4 && b == 0) { 
MessageBox.Show("���ߧA�q��F"); 
button1.Enabled = false; 
} 
else if (textBox2.Lines.Length == 11) { 
MessageBox.Show("�A�w�gGG�F"); 
button1.Enabled = false; 
} 
} 
} 


private void textBox1_TextChanged(object sender, EventArgs e) 
{ 
label3.Text = "�ثe��J" + textBox1.TextLength.ToString() + "�Ӧr"; 
} 


//���}�s�� 
private void button3_Click(object sender, EventArgs e) { 
label2.Text = ""; 
textBox1.Text = ""; 
textBox2.Text = ""; 
button1.Enabled = true; 
for (int i = 0; i < 10; i++) 
{ 
r = ran.Next(0, 10 - i); 
tmp = ans[r]; 
ans[r] = ans[9 - i]; 
ans[9 - i] = tmp; 
} 
for (int j = 1; j <= 4; j++) 
{ gnum[j] = ""; } 
} 


//��ܵ���(ans[i]) 
private void button2_Click(object sender, EventArgs e) 
{ 
label2.Text = ""; 
for (int i = 1; i <= 4; i++) { label2.Text += ans[i]; } 
} 


//����L��J�Ʀr�btextBox1�W���ɡA���U��LENTER���ƥ� 
private void textBox1_KeyDown(object sender, KeyEventArgs e) 
{ 
if (e.KeyCode == Keys.Enter&&button1.Enabled==true) {  
button1_Click(sender, e); 
textBox1.Focus(); 
textBox1.SelectAll(); 
e.SuppressKeyPress = true; //���{�����n�o�X"�m"�@�n } 
} 

} 
}
