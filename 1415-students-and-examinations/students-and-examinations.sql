SELECT Stu.student_id, Stu.student_name, Sub.subject_name, COUNT(E.subject_name) AS attended_exams
FROM Students Stu CROSS JOIN Subjects Sub 
LEFT JOIN Examinations E ON  Stu.student_id =E.student_id AND Sub.subject_name =E.subject_name
GROUP BY Stu.student_name, Sub.subject_name ORDER BY student_id, subject_name;
