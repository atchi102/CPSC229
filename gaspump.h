class GasPump{
  private:
    double gasAmount;
    double amountCharged;
    double costPerGallon;
  public:
    GasPump();
    void outputAmount();
    void outputCharge();
    void outputCost();
    void resetValues();
    void incrementValues();
    void displayCurrent();
};
