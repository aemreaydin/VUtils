#include <utility>
#include <string>

namespace VUtils
{
	constexpr auto ThrowIfFail(bool _operation, const char* _message) -> void
	{
		if (_operation)
		{
			return;
		}
		throw std::runtime_error(_message);
	}
	
	template<typename Cont>
	constexpr auto At(Cont& _cont, const size_t _ind) -> decltype(_cont[_cont.size()])
	{
		ThrowIfFail(_ind < _cont.size(), "Index out of bounds for container.");
		return _cont[_ind];
	}
}// namespace VUtils