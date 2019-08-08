#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
//ʵ�ֿ���,�ؼ�������������ѡ��һ������,,�������������Ϊ������
//��ѡ����С�������,������ұ�
int zhaozhongjianshu(int data[], int length, int start, int end){
	//�����������
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
//�ݹ�汾ʵ�ֿ���
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
//����˾Ա���������򲢿������븨���ռ�
//ĳ����������˼��ξ�������ages�����ü���,�ó�100������������Ϊ
//�����ռ�,
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
//��ת�������С����--һ�������ʼ���ɸ�Ԫ�ذᵽ����ĩβ������ת����
//����һ���������������,��ת�������ת�������СԪ��
//12345--34512
//����ָ��һ���Ӻ���ǰһ����ǰ���,������ָ���ߵ����ں�ָ�����ָ����С����
int findmin(int a[], int length){
	if (a == nullptr || length <= 0){
		cout << "errno" << endl;
		return -1;
	}
	int indexs = 0;
	int indexe = length - 1;
	int indexmind = indexs;//����0�п��ܲ���ת
	while (a[indexs]>=a[indexe])
	{
		if (indexe - indexs ==1){//ǰ�������������С����indexend�����Ǹ�
			indexmind = indexe;
			break;
		}
		indexmind = (indexe + indexs) >> 2;
		if (a[indexmind] > a[indexs]){//����м�ֵ���ڸտ�ʼ����
			//���м�ֵ��ɿ�ʼ��ֵ
			indexs = indexmind;
		}
		else if (a[indexmind] < a[indexe]){
			indexe = indexmind;
		}
	}
	return a[indexmind];
}
//���ǲ�����������01111---  10 111---11101
//��������޷�ȷʵ1���ڵ�һ���������黹�����ڵڶ�����ַ����
//��һ��ָ��͵ڶ���ָ�붼ָ�����1---����˳�����
int findmin(int a[], int length){
	if (a == nullptr || length <= 0){
		cout << "errno" << endl;
		return -1;
	}
	int indexs = 0;
	int indexe = length - 1;
	int indexmind = indexs;//����0�п��ܲ���ת
	while (a[indexs] >= a[indexe])
	{
		if (indexe - indexs == 1){//ǰ�������������С����indexend�����Ǹ�
			indexmind = indexe;
			break;
		}
		indexmind = (indexe + indexs) >> 2;
		if (a[indexmind] > a[indexs]){//����м�ֵ���ڸտ�ʼ����
			//���м�ֵ��ɿ�ʼ��ֵ
			indexs = indexmind;
		}
		else if (a[indexmind] < a[indexe]){
// ����м�ֵ���ڸտ�ʼ������м�ֵ��ɿ�ʼ��ֵ
			indexe = indexmind;
		}
		else if ((a[indexmind] == a[indexs])&&
			(a[indexmind] == a[indexe])){
		//indexs��indexe,indexָ������������
			return shunxufind(a, indexs, indexe);
		}
	}
	return a[indexmind];
}
int shunxufind(int a[], int indexs, int indexe){
	int reslut = a[indexs];
	for (int i = indexs + 1; i <= indexe; i++){
		if (reslut > a[i]){
			//������ȸտ�ʼ��ֵ����ô���տ�ʼ��ֵ������
			reslut = a[i];
		}
	}
	return reslut;
}
//�����·��--��ƺ����ж���һ���������Ƿ����һ������ĳ���ַ�
//���������ַ���·��--
//(1)·�������ظ�--������ַ���Сһ���Ĳ��������ʶ·���Ƿ��ѽ�������ÿ������
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
//��2
class solution{
public:
	int dx[4] = { -1, 0, 1, 0 };
	int dy[4] = {0, 1, 0, -1 };
	int xsize, ysize;
bool dfs(int x,
	int y,int len,string str,vector<vector<char>>&juzhen){
	//�����������
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
//�����������һ��·�ߵ���3������n�����ж����ַŷ�
//1�ھ����е�ĳһ��״̬,��biaoji��ǵ�ǰ��״̬0Ϊ������1Ϊ�ƽ�������
//book[i]=1--��ʶ��i���Ʋ������Ϸ���ĳ���������� hezi[index]=i
//��ʾ�����±�Ϊindex��ʱ��Ϊ�ŵ��ǵ�i����
//for (int i = 1; i <= n; i++){
//	if (biaoji[i] == 0){
//		hezi[index] = i;
//		biaoji[i] = 1;
//	}
//}��ǰ���Ӵ��������������һ������һ��,����Ҫ�ѱ����Ϊ0
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
//����ʲôʱ�����,�ߵ�����Ϊ�������n���������ߵ�n+1
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
