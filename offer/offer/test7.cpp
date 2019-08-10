#include<iostream>
#include<string>
#include<vector>
using namespace std;
//��o1��ʱ�����ϴ�����Ľ��--����ͷָ���βָ��
struct listnode{
	int value;
	listnode*next;
};
void deletenode(listnode** head, listnode*tobedelete){
	//h--i--j--dҪɾ�����(1)�ҵ�i��ǰ�ý�㽫hָ��j
//(2)i����һ�����j�����ݸ��Ƶ�i,Ȼ���i��ָ��ָ����j
//����һ�����,��ʱɾ��jЧ���ǰ�iɾ����
	if (head || !tobedelete){
		return;
	}
	//Ҫɾ���Ľ�㲻��β���
	if (tobedelete->next != nullptr){
		listnode*pnext = tobedelete->next;
		tobedelete->value = pnext->value;
		tobedelete->next = pnext->next;
			delete pnext;
		pnext = nullptr;
	}
	//������ֻ��һ���ڵ�(ͷ���/β���)
	else if (tobedelete ==*head){
		delete tobedelete;
		tobedelete = nullptr;
		*head = nullptr;
	}
	else{
		//�������ж�����ɾ��β���
		listnode* node = *head;
		while (node->next != tobedelete){
			node = node->next;
		}
		node->next = nullptr;
		delete tobedelete;
		tobedelete = nullptr;
	}
}
//ɾ���������ظ��Ľ��
//�п���ͷ���Ҳ��ɾ��--listnode**head
//1-2-3-3-4-4-5 1-2-5
void deletejiedian(listnode** head){
	if ((head == nullptr )|| (*head == nullptr)){
		return;
	}
	//Ū��ǰ�ý��
	listnode*prenode = nullptr;
	listnode*node = *head;
	while (node != nullptr){
		listnode*pnext = node->next;
		bool needdelet = false;
		if (pnext != nullptr&&pnext->value == node->value){
//�ж��Ƿ���Ҫɾ��
			needdelet = true;
		}
		if (!needdelet){
			//����ǰ���
			prenode = node;
			node = node->next;
		}
		else{
			int val = node->value;
			listnode*xuyaotodelet = node;
			while (xuyaotodelet != nullptr&&xuyaotodelet->value == val){
				pnext = xuyaotodelet->next;
				delete xuyaotodelet;
				xuyaotodelet = nullptr;
				xuyaotodelet = pnext;
			}
			if (prenode == nullptr){
				//ͷ���
				*head = pnext;
			}
			else{
				prenode->next = pnext;
				node = pnext;
			}
		}
	}
}
//������ʽƥ��,ʵ��һ����������.*����.��ʾ�����ַ�*��ʾ��
//ǰ���ַ����Գ��������(����0��)
//ƥ���һ���ַ����ģʽ�ַ�chΪ.ƥ�������ַ�,���ģʽ�ַ�����.
//�����ַ���Ҳ��ch,��ô�໥ƥ��,����ƥ����һ��,����ڶ����ַ�����*
//��һ��ƥ��ڶ���ƥ�����ƥ�����ڶ����ַ���*,����,1����ƶ������ַ�
//�൱��*��ǰ����ַ���������*����ƥ���ַ����е�0���ַ�-
//Ҫô���ƶ�Ҫô�ƶ�
bool match(char*str, char*moshi){
	if (str == nullptr || moshi == nullptr){
		return;
	}
		return matchcore(str, moshi);
	
}
bool matchcore(char*str, char*moshi){
	if (*str != '\0'&&*moshi != '\0'){
		return true;
	}
	if (*str != '\0'&&moshi == '\0'){
		return false;
	}
	if ((*moshi + 1) == '*'){
		if (*moshi == *str || (*moshi == '.'&&*str != '\0')){
			//�ƶ�/���ƶ�//����a*
			return matchcore(str + 1, moshi + 2)|| 
matchcore(str + 1, moshi) || matchcore(str , moshi + 2);
		}
		else{
			return matchcore(str, moshi + 2);
		}
	}
	if (*moshi == *str || (*moshi == '.'&&str != '\0')){
		return matchcore(str + 1, moshi + 1);
	}
	return false;
}
class solution{
public:
	//��̬�滮����
//���moshi[j]=str[i]||moshi[j]=='.'��ʱdp[i-1][j-1]
//���moshi[j]=='*'
//���������1moshi[j-1]!=str[i]&&moshi[j-1]!='.'��ʱdp[i][j]=dp[i][j-2]//a*ƥ��0��
//2���moshi[j-1]=str[i]||moshi[j-1]=='.'
//��ʱdp[i][j]=dp[i][j-2]a*ƥ��0��
	//����dp[i][j]=dp[i][j-1]a*ƥ��1��
	//����dp[i][j]=dp[i-1][j]a*ƥ����?
	bool ismatch(string s, string p){
		if (p.empty()){
			return s.empty();
		}
		return match(s, p, 0, 0);
	}
	bool match(string s, string p, int i, int j){
		//�ַ���ƥ�䵽ĩβ������
		if (i == s.size() && j == p.size()){
			return true;
		}
		//pƥ�䵽�����sû��ƥ�䵽���
		if (i != s.size() && j == p.size()){
			return false;
		}
		if (p[j + 1] == '*'){
			if (s[i] == p[j] || (i < s.size() && p[j] == '.')){
				return match(s, p, i + 1, j) || match(s, p, i, j + 2);
			}
			else{
				return match(s, p, i, j + 2);
			}
		}
		else{
			if (s[i] == p[j] || (i < s.size() && p[j] == '.')){
				return match(s, p, i+1, j + 1);
			}
			else{
				return false;
			}
		}
	}
	bool ismatch(string s, string p){
		int m = s.size, n = p.size();
		vector<vector<bool>>dp(m + 1, vector<bool>(n + 1, false));
		dp[0][0] = true;
		for (int i = 0; i <= m; i++){
			for (int j = 1; j <= n; j++){
				if (j > 1 && p[j - 1] == '*'){
					dp[i][j] = dp[i][j - 2] || (i > 0 && (s[i - 1] == p[j - 2] == '.') && dp[i - 1][j]);
				}
				else{
					dp[i][j] = i > 0 && dp[i - 1][j - 1] && (s[i - 1] == p[j - 1] || p[j - 1] == '.');
				}
			}
		}
		return dp[m][n];
	}
};
int main(){

	return 0;
}