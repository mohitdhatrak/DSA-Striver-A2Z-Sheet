// https://www.naukri.com/code360/problems/switch-case-statement_8357244

double areaSwitchCase(int ch, vector<double> a) {
    const double PI = 3.14159265358979323846;

	switch(ch) {
        case 1:
            return (PI * a[0] * a[0]);
            
        case 2:
            return (a[0] * a[1]);
    }
}