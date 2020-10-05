#include "std_lib_facilities.h"

bool legal_unit(string unit) {

    bool good_unit = false;
    vector<string> legal_units = { "cm", "m", "in", "ft" };

    for (string u : legal_units)
        if (u == unit)
            good_unit = true;

    return good_unit;
}

double convert_to_meters(double amount, string unit)

{

    double cm_to_m = 0.01;
    double in_to_m = 0.0254;
    double ft_to_m = 0.3048;

    double meters = 0;

    if (unit == "cm")
        meters = amount * cm_to_m;
    else if (unit == "in")
        meters = amount * in_to_m;
    else if (unit == "ft")
        meters = amount * ft_to_m;
    else if (unit == "m")
        meters = amount;

    return meters;
}

int main()
{
    double a;
    double m;
    double min = 0, max = 0;
    double sum_m = 0;
    double loop_numbers = 0;

    vector<double> datas;

    string unit;

    while (cin >> a >> unit)
    {

        if (!legal_unit(unit))
            cout << "Error: illegal unit" << endl;
        else {
            m = convert_to_meters(a, unit);

            if (min == 0 && max == 0) {
                min = m;
                max = m;
            }

            if (m < min)
            {
                min = m;
                cout << "This number is the smallest so far" << endl;
            } else if (m > max)
            {
                max = m;
                cout << "This number is the largest so far" << endl;
            }

            datas.push_back(m);
            sum_m += m;
            loop_numbers ++;
        }
    }

    cout << "Final results:" << endl;

    sort(datas);
    for (double m : datas)
        cout << m << "m" << endl;

    cout << "The smallest data is: " << min << "m" << endl;
    cout << "The largest data is: " << max << "m " << endl;
    cout << loop_numbers << " values were entered" << endl;
    cout << "The sum of meters: " << sum_m << "m" << endl;
}