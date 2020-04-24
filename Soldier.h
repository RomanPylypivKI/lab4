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
};