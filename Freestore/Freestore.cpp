#include"Resource.h"
#include<string>
using std::string;

int main()
{
	{
		Resource LocalResource("Local");
		string localstring = LocalResource.Getname();
	}
	Resource* pResource = new Resource("created with new");
	string newstring = pResource->Getname();
	int j = 3;
	delete pResource;

	string string3 = pResource->Getname();

	return 0;
}