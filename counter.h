class Counter{
  private:
    int count;
    int highestCount;
    bool overflowReached;

  public:
    Counter(int g_highestCount);
    void reset();
    void incr1(int times);
    void incr10(int times);
    void incr100(int times);
    void incr1000(int times);
    bool overflow();
};
