#ifndef DATE_H
#define DATE_H

class Date_Class
{
public:
	struct Date_Struct
	{
		int d, m, y;
	};

	Date_Class(Date_Struct = {});

	Date_Struct GetDate();
	void SetDate(Date_Struct);

	~Date_Class();

private:
	Date_Struct Date;

};

#endif //DATE_H
