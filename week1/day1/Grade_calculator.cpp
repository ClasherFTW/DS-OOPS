cout << "Enter grade: ";
cin >> grade;
if(grade>=90 && grade <= 100) {
    cout << "Grade: A" << endl;
} else if(grade >= 80 && grade < 90) {
    cout << "Grade: B" << endl;
} else if(grade >= 70 && grade < 80) {
    cout << "Grade: C" << endl;
} else if(grade >= 60 && grade < 70) {
    cout << "Grade: D" << endl;
} else if(grade >= 0 && grade < 60) {
    cout << "Grade: F" << endl;
} else {
    cout << "Invalid grade entered." << endl;
}
return 0;
