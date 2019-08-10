#include<iostream>
#include<string>
#include<vector>
using namespace std;
//在o1的时间内上传链表的结点--给定头指针和尾指针
struct listnode{
	int value;
	listnode*next;
};
void deletenode(listnode** head, listnode*tobedelete){
	//h--i--j--d要删除结点(1)找到i的前置结点将h指向j
//(2)i的下一个结点j的内容复制到i,然后把i的指针指向结点j
//的下一个结点,此时删除j效果是把i删除了
	if (head || !tobedelete){
		return;
	}
	//要删除的结点不是尾结点
	if (tobedelete->next != nullptr){
		listnode*pnext = tobedelete->next;
		tobedelete->value = pnext->value;
		tobedelete->next = pnext->next;
			delete pnext;
		pnext = nullptr;
	}
	//链表中只有一个节点(头结点/尾结点)
	else if (tobedelete ==*head){
		delete tobedelete;
		tobedelete = nullptr;
		*head = nullptr;
	}
	else{
		//链表中有多个结点删除尾结点
		listnode* node = *head;
		while (node->next != tobedelete){
			node = node->next;
		}
		node->next = nullptr;
		delete tobedelete;
		tobedelete = nullptr;
	}
}
//删除链表中重复的结点
//有可能头结点也被删除--listnode**head
//1-2-3-3-4-4-5 1-2-5
void deletejiedian(listnode** head){
	if ((head == nullptr )|| (*head == nullptr)){
		return;
	}
	//弄个前置结点
	listnode*prenode = nullptr;
	listnode*node = *head;
	while (node != nullptr){
		listnode*pnext = node->next;
		bool needdelet = false;
		if (pnext != nullptr&&pnext->value == node->value){
//判断是否需要删除
			needdelet = true;
		}
		if (!needdelet){
			//记下前结点
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
				//头结点
				*head = pnext;
			}
			else{
				prenode->next = pnext;
				node = pnext;
			}
		}
	}
}
//正规表达式匹配,实现一个函数包含.*其中.表示任意字符*表示它
//前面字符可以出现任意次(包含0次)
//匹配第一个字符如果模式字符ch为.匹配任意字符,如果模式字符不是.
//而且字符串也是ch,那么相互匹配,接着匹配下一个,如果第二个字符不是*
//第一个匹配第二个匹配继续匹配后面第二个字符是*,复杂,1向后移动两个字符
//相当于*和前面的字符被忽略了*可以匹配字符串中的0个字符-
//要么不移动要么移动
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
			//移动/不移动//忽略a*
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
	//动态规划问题
//如果moshi[j]=str[i]||moshi[j]=='.'此时dp[i-1][j-1]
//如果moshi[j]=='*'
//分两种情况1moshi[j-1]!=str[i]&&moshi[j-1]!='.'此时dp[i][j]=dp[i][j-2]//a*匹配0次
//2如果moshi[j-1]=str[i]||moshi[j-1]=='.'
//此时dp[i][j]=dp[i][j-2]a*匹配0次
	//或者dp[i][j]=dp[i][j-1]a*匹配1次
	//或者dp[i][j]=dp[i-1][j]a*匹配多次?
	bool ismatch(string s, string p){
		if (p.empty()){
			return s.empty();
		}
		return match(s, p, 0, 0);
	}
	bool match(string s, string p, int i, int j){
		//字符串匹配到末尾都满足
		if (i == s.size() && j == p.size()){
			return true;
		}
		//p匹配到最后但是s没有匹配到最后
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