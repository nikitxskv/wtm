#include <iostream>
#include <vector>
using namespace std;
vector<string> rotate(vector<string> img);
vector<string> inverse(vector<string> img);
vector<string> zoom(vector<string> img);
int main()
{
	int w,h;
	cin>>w>>h;
	string a;
	vector<string> img;
	for(int i=0;i<h;i++)
	{
		cin>>a;
		img.push_back(a);
	}
	img=rotate(img);
	img=inverse(img);
	img=zoom(img);
	for(int i=0;i<img.size();i++) cout<<img[i]<<endl;
	return 0;
} 

vector<string> rotate(vector<string> img)
{
	vector<string> img2;
	for(int i=0;i<img[0].size();i++)
	{
		string a;
		for(int j=img.size()-1;j>=0;j--)
		{
			a.push_back(img[j][i]);
		}
		img2.push_back(a);
	}
	return img2;
}

vector<string> inverse(vector<string> img)
{
	vector<string> img2;
	for(int i=0;i<img.size();i++)
	{
		string a;
		for(int j=img[i].size()-1;j>=0;j--)
		{
			a.push_back(img[i][j]);
		}
		img2.push_back(a);
	}
	return img2;
}

vector<string> zoom(vector<string> img)
{
	vector<string> img2;
	for(int i=0;i<img.size();i++)
	{
		string a;
		for(int j=0;j<img[i].size();j++)
		{
			a.push_back(img[i][j]);
			a.push_back(img[i][j]);

		}
		img2.push_back(a);
		img2.push_back(a);
	}
	return img2;
}