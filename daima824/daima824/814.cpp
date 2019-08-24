
//int main(){
//	int n;
//	int sum = 0;
//	while (cin >> n){
//		vector<int> a;
//		a.resize(3 * n);
//		for (int i = 0; i < 3 * n; i++){
//			cin >> a[i];
//		}
//		sort(a.begin(), a.end());
//		for (int i = n; i < 3 * n - 2; i+=2){
//			sum+=a[i];
//		}
//		cout << sum << endl;
//	}
//}
//删除两个字符串中的公有字符
//int main(){
//	int hastable[256] = { 0 };
//	string s1;
//	string s2;
//	string s3;
//	getline(cin, s1);
//	getline(cin, s2);
//	//遍历s2然后把它放在hastable
//	for (size_t i = 0; i < s2.size(); ++i){
//		hastable[s2[i]]++;
//	}
//	for (size_t i = 0; i < s1.size(); ++i){
//		if (hastable[s1[i]] == 0){
//			s3 += s1[i];
//		}
//	}
//	cout << s3 << endl;
//	return 0;
//}
//#include<iostream>
//#include<vector>
//using namespace std;
//
//int ArrangeNumb(vector<int> &arr, int N)
//{
//	int numb = 0;
//	int cont, cont1, cont2;
//	cont = cont1 = cont2 = 1;
//	for (int i = 0; i < N; i += cont)
//	{
//		for (int j = 0; i + j < N - 1; j++)//升序
//		{
//			if (arr[i + j + 1] < arr[i + j])
//				break;
//			cont1++;
//		}
//		for (int j = 0; i + j < N - 1; j++)//降序
//		{
//			if (arr[i + j + 1] > arr[i + j])
//				break;
//			cont2++;
//		}
//		(cont1 > cont2) ? (cont = cont1) : (cont = cont2);//取大者
//		cont1 = cont2 = 1;
//		numb++;
//	}
//	return numb;
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	vector<int> str;//vector在堆上开辟内存，避免普通数组在栈上溢出
//	for (int i = 0, tep; i < n; i++)
//	{
//		cin >> tep;
//		str.push_back(tep);
//	}
//	cout << ArrangeNumb(str, n) << endl;
//	return 0;
//}

//int main(){
//	string s1;
//	cin >> s1;
//	string cur;
//	string yihou;
//	for (size_t i = 0; i < s1.size(); i++){
//		if ('0' <= s1[i] && s1[i] <= '9'){
//			cur+=s1[i];
//		}
//		else{
//			//找到更长的
//			if (cur.size() >yihou.size()){
//				yihou = cur;
//			}
//			cur.clear();
//		}
//		cout << yihou << endl;	
//	}	
//	return 0;
//}
//n个数里出现次数大于等于n / 2的数--排序找到中间那个数就可以了
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
//int main(){
//	int n;
//	vector<int>a;
//
//	while (cin >> n){
//
//		a.push_back(n);
//		//排序
//	}
//    sort(a.begin(), a.end());
//	cout << a[a.size() / 2 - 1] << endl;
//	
//}
//int main(){
//	int n;
//	vector<int>a;
//	while (cin >> n){
//		a.push_back(n);
//	}
//	int count = 0;
//	int temp = a[0];
//	for (int i = 0; i < a.size(); i++){
//		if (a[i] == temp){
//			count++;
//		}
//		count--;
//		if (count == 0){
//			temp = a[i];
//			count = 1;
//		}
//	}
//	cout << temp;
//}
//#include<iostream> 
//using namespace std;
//int main() { 
//int a,b,c,d; 
//cin>>a>>b>>c>>d; 
//int A=(a+c)/2; 
//int C=(d-b)/2; 
//int B1=(c-a)/2;
//int B2=(b+d)/2;
//if(B1!=B2) 
//cout<<"No"; 
//else
//cout<<A<<" "<<B1<<" "<<C; 
//return 0;
//}
//n进制转换
//int main(){
//	string s;
//	string table = "0123456789ABCDEF";
//	int m, n;
//	cin >> m >> n;
//	while (m){
//		if (m<0){
//			m = -m;
//			cout << "-";
//		}
//		else{
//			s += table[m%n];
//			m /= n;
//		}
//	}
//		reverse(s.begin(), s.end());
//
//	cout << s << endl;
//	return 0;
//}
//统计回文的个数
bool ishuiwen(string s){
	size_t begin = 0;
	size_t end = s.size() - 1;
	while (begin < end){
		if (s[begin] != s[end]){
			return false;
		}
		begin++;
		end--;
	}
	return true;
}
int main(){
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	int count = 0;
	for (int i = 0; i < s1.size(); i++){
		string reslut = s1;
		reslut.insert(i, s2);
		if (ishuiwen(reslut)){
			count++;
		}

	}
	cout << count << endl;
}
//连续最大和--求哪一段字数组最大
int main(){
//	sum[i] = max(sum[i - 1], 0) + nums[i]
	int size;
	cin >> size;
	vector<int>a;
	a.reserve(size);
	for (int i = 0; i < a.size; i++){
		cin >> a[i];
	}
	int reslut = a[0];
	int sum1 = 0, sum2 = 0;
	for (int i = 0; i < a.size(); i++){
		if (sum1 = sum2 >= 0){
			sum1 = sum2 = sum1 + a[i];
		}
		else{
			sum1 = sum2 = a[i];
		}
		if (sum2>reslut){
			reslut = sum2;
		}
		if (sum2 < 0){
			sum2 = 0;
		}
		sum1 = sum2;//向后走
	}
	cout << reslut<< endl;
}
