#include "testlib.h"
#include<string.h>

int main(int argc, char * argv[])
{
	registerTestlibCmd(argc, argv);

	std::string ja = ans.readString();
	std::string pa = ouf.readString();

	std::string _AC="answer is "+ja+" and "+pa+" calls\n";
	std::string _WA="expected "+ja+", found "+pa+"\n";

	if (ja != pa)
		quitf(_wa, "expected %d, found %d", ja, pa);


	quitf(_ok, "answer is %d and %d calls", ja, pa);
}