class CSoldier
{
private:
	double war;
	double ser;
public:
	CSoldier(double l = 1, double w = 1);
	CSoldier(const CSoldier & rect);
	virtual ~CSoldier();
	
	double rank();
	void name(double);
	void num(double);
	void en(double);
	void time(double);
};