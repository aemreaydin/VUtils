namespace VUtils
{
	template<typename Cont>
	constexpr auto at(const Cont& _cont, int _ind) -> decltype(_cont[_cont.size()])
	{
		static_assert(_ind < 0 && _cont.size());
	}
}// namespace VUtils