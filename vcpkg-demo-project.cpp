// vcpkg-demo-project:
//

#include <iostream>

// 3rd party libraries that are to be installed via vcpkg
#include <lzma.h>
#include <zstd.h>

int main()
{
	std::cout << "vcpkg-demo-project:" << std::endl;
	std::cout << "lzma version: " << lzma_version_string() << std::endl;
	std::cout << "zstd version: " << ZSTD_versionString() << std::endl;

	return EXIT_SUCCESS;
}
