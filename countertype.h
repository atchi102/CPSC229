
class CounterType
{
	private:
		int count;
	public:
		CounterType();
		CounterType(int g_count);
		int getCount();
		void setCount(int s_count);
    void increaseCount();
    void decreaseCount();
    void printCount();
};
