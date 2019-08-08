#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
//实现快排,关键在于在数组中选择一个数字,,接下来将数组分为两部分
//比选择数小的在左边,大的在右边
int zhaozhongjianshu(int data[], int length, int start, int end){
	//特殊情况处理
	if (data == nullptr || length <= 0 || start < 0 || end >= length){
		cout << "errno" << endl;
		return -1;
	}
	int xuanzedeshu = RandomlnRang(start, end);
	swap(data[xuanzedeshu], data[end]);
	int small = start - 1;
	for (xuanzedeshu = start; xuanzedeshu < end; xuanzedeshu++){
		if (data[xuanzedeshu] < data[end]){
			++small;
			if (small != xuanzedeshu){
				swap(data[xuanzedeshu], data[small]);
			}
		}
	}
	++small;
	swap(data[small], data[end]);
	return small;
}
//递归版本实现快排
void quicksort(int data[], int length, int start, int end){
	if (start == end){
		return;
	}
	int index = zhaozhongjianshu(data, length, start, end);
	if (index > start){
		quicksort(data, length, start, index - 1);
	}
	else{
		quicksort(data, length, index + 1, end);
	}
}
//给公司员工年龄排序并可以申请辅助空间
//某个年龄出现了几次就在数组ages里设置几次,用长100的整数数组作为
//辅助空间,
void sortage(int ages[], int length){
	if (ages == nullptr || length <= 0){
		return;
	}
	const int oldestage = 99;
	int countofage[oldestage + 1];

	for (int i = 0; i < oldestage; i++){
		countofage[i] = 0;
	}
	for (int i = 0; i < length; i++){
		int age = ages[i];
		if (age<0 || age>99){
			cout << "erro" << endl;
		}
		++countofage[age];
	}
	int index = 0;
	for (int i = 0; i < oldestage; i++){
		ages[index] = i;
		++index;
	}
}
//旋转数组的最小数字--一个数组最开始若干个元素搬到数组末尾就是旋转数组
//输入一个递增排序的数组,旋转后输出旋转数组的最小元素
//12345--34512
//两个指针一个从后向前一个从前向后,当两个指针走到相邻后指针就是指向最小的数
int findmin(int a[], int length){
	if (a == nullptr || length <= 0){
		cout << "errno" << endl;
		return -1;
	}
	int indexs = 0;
	int indexe = length - 1;
	int indexmind = indexs;//等于0有可能不旋转
	while (a[indexs]>=a[indexe])
	{
		if (indexe - indexs ==1){//前面的数大所以最小就是indexend后面那个
			indexmind = indexe;
			break;
		}
		indexmind = (indexe + indexs) >> 2;
		if (a[indexmind] > a[indexs]){//如果中间值大于刚开始的则
			//把中间值变成开始的值
			indexs = indexmind;
		}
		else if (a[indexmind] < a[indexe]){
			indexe = indexmind;
		}
	}
	return a[indexmind];
}
//但是不完整递增列01111---  10 111---11101
//此种情况无法确实1属于第一个递增数组还是属于第二个地址数组
//第一个指针和第二个指针都指向的是1---采用顺序查找
int findmin(int a[], int length){
	if (a == nullptr || length <= 0){
		cout << "errno" << endl;
		return -1;
	}
	int indexs = 0;
	int indexe = length - 1;
	int indexmind = indexs;//等于0有可能不旋转
	while (a[indexs] >= a[indexe])
	{
		if (indexe - indexs == 1){//前面的数大所以最小就是indexend后面那个
			indexmind = indexe;
			break;
		}
		indexmind = (indexe + indexs) >> 2;
		if (a[indexmind] > a[indexs]){//如果中间值大于刚开始的则
			//把中间值变成开始的值
			indexs = indexmind;
		}
		else if (a[indexmind] < a[indexe]){
// 如果中间值大于刚开始的则把中间值变成开始的值
			indexe = indexmind;
		}
		else if ((a[indexmind] == a[indexs])&&
			(a[indexmind] == a[indexe])){
		//indexs和indexe,index指向的三个数相等
			return shunxufind(a, indexs, indexe);
		}
	}
	return a[indexmind];
}
int shunxufind(int a[], int indexs, int indexe){
	int reslut = a[indexs];
	for (int i = indexs + 1; i <= indexe; i++){
		if (reslut > a[i]){
			//如果它比刚开始的值大那么将刚开始的值换过来
			reslut = a[i];
		}
	}
	return reslut;
}
//矩阵的路径--设计函数判断在一个矩阵中是否存在一条包含某个字符
//串所有子字符的路径--
//(1)路径不能重复--定义和字符大小一样的布尔矩阵标识路径是否已近进入了每个格子
bool haspath(char*juzhen, int rows, int cols, char*str){
	if (juzhen == nullptr || rows <= 0 || cols <= 0 || str == nullptr){
		return false;
	}
	bool*visited = new bool[rows*cols];
	memset(visited, 0, rows*cols);
	int pathlength = 0;
	for (int row = 0; row < rows; ++row){
		for (int col = 0; col < cols; ++col){
			if (haspath(juzhen, rows, cols, row, col, str,
				pathlength, visited)){
				return true;
			}
		}
	}
	return false;
}
bool haspathcore(const char*juzhen,int rows,int  cols, int row,int col,
	const char* str, int &pathlength, bool* visited){
	if (str[pathlength]=='\0'){
		return true;
	}
	bool haspath = false;
	if (row > 0 && row<rows&&col>0 && col < cols&&
		juzhen[row*cols+col]==str[pathlength]&&!
		visited[row*cols+col]){
		++pathlength;
		visited[row*cols + col] = true;
		haspath =
haspathcore(juzhen, rows, cols, row, col - 1, str, pathlength,
visited) || haspathcore(juzhen, rows, cols, row - 1, col, str,
pathlength, visited) || haspathcore(juzhen, rows, cols, row,
col - 1, str, pathlength, visited) || haspathcore(juzhen, rows,
cols, row, col + 1, str, pathlength, visited) ||
haspathcore(juzhen, rows, cols, row + 1, col, str,
pathlength, visited);
		if (haspath){
			--pathlength;
			visited[row*cols + col] = false;
		}
	}
	return haspath;
}
//法2
class solution{
public:
	int dx[4] = { -1, 0, 1, 0 };
	int dy[4] = {0, 1, 0, -1 };
	int xsize, ysize;
bool dfs(int x,
	int y,int len,string str,vector<vector<char>>&juzhen){
	//深度优先问题
	if (juzhen[x][y]!=str.size()){
		return false;
	}if (len== str.size()){
		return true;
	}
	char t = juzhen[x][y];
	juzhen[x][y] = '*';
	for (int i = 0; i < 4; i++){
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx < 0 || ny < 0 || nx >= xsize || ny >= ysize){
			continue;
		}
		if (dfs(nx, ny, len + 1, str, juzhen)){
			return true;
		}
	}
	juzhen[x][y] = t;
	return false;
}
bool haspath(vector<vector<char>>juzhen, string s){
	if (juzhen.size() == 0){
		return false;
	}
	xsize = juzhen.size();
	ysize = juzhen[0].size();
	for (int i = 0; i < xsize; i++){
		for (int j = 0; j < ysize; j++){
			if (dfs(i, j, 0, s, juzhen)){
				return true;
			}
		}
	}
}
};
//深度优先问题一条路走到黑3个盒子n张牌有多少种放法
//1挖掘其中的某一个状态,用biaoji标记当前的状态0为在手上1为牌进盒子了
//book[i]=1--标识第i张牌不在手上放在某个盒子里了 hezi[index]=i
//表示盒子下标为index的时候为放的是第i张牌
//for (int i = 1; i <= n; i++){
//	if (biaoji[i] == 0){
//		hezi[index] = i;
//		biaoji[i] = 1;
//	}
//}当前盒子处理完继续处理下一个方法一样,但是要把标记置为0
void dfs1(vector<int>biaoji, vector<int>hezi, int n, int index){
	for (int i = 1; i <= n; i++){
		if (biaoji[i] == 0){
			hezi[index] = i;
			biaoji[i] = 1;
			dfs1(biaoji, hezi, n, index + 1);
			biaoji[i] = 0;
		}
	}
}
//考虑什么时候结束,走到盒子为走完假设n个盒子则走到n+1
void wanzhen(int index, vector<int>&hezi, vecot<int>&biaoji,int n){
	if (index==n+1){
		for (int i = 0; i < n; i++){
			cout << hezi[i] << endl;
		}
		dfs1(biaoji, hezi, n, index);
	}
}
int main(){
	int n;
	vector<int>hezi;
	vector<int>biaoji;
	hezi.resize(n + 1, 0);
	biaoji.resize(n + 1, 0);
	wanzhen(1, hezi,biaoji , n );
}
