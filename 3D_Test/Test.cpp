#include<iostream>
#include<string>
#include<vector>

using namespace std;

class CVertex
{
protected:
	int m_nIndex;
	string m_strName;
	int m_nRadius;

public:
	CVertex(const int nIndex, const string& strName, const int nRadius)
		:m_nIndex(nIndex)
		, m_strName(strName)
		, m_nRadius(nRadius)
	{
		cout << "index is "<<m_nIndex << endl;
		cout << m_strName << " constructor called" << endl;
		cout << "radius is " << m_nRadius << endl;
	}

	CVertex(CVertex& item)
		:m_nIndex(item.m_nIndex)
		, m_strName(move(item.m_strName))
		, m_nRadius(item.m_nRadius)
	{
		cout << m_strName << "copy constructor called" << endl;
	}

	CVertex(CVertex&& item)
		:m_nIndex(item.m_nIndex)
		, m_strName(move(item.m_strName))
		, m_nRadius(item.m_nRadius)
	{
		cout << m_strName << "  moving constructor called" << endl;
	}

	~CVertex()
	{
		cout << m_strName << "  destructor called" << endl;
	}
};

int main()
{
	vector<CVertex> vecVertex;

	vecVertex.emplace_back(5, "first", 3);
	vecVertex.emplace_back(0, "second", 3);
	vecVertex.emplace_back(1, "third", 100);
	vecVertex.emplace_back(200, "forth", 100000);
	return 0;
}