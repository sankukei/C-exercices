#include "Serializer.hpp"

int	main(void)
{
	Data	obj;
	obj.level = 15;
	Data*	OGptr = &obj;
	uintptr_t	res;

	res = Serializer::serialize(OGptr);
	std::cout << OGptr << std::endl;
	std::cout << res << std::endl;

	Data* GENZptr = Serializer::deserialize(res);

	std::cout << GENZptr << std::endl;
	std::cout << GENZptr->level << std::endl;
	return 0;
}
