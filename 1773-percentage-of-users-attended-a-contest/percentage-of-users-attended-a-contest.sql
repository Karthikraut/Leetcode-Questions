SELECT 
    R.contest_id, 
    Round((COUNT(U.user_id)/(SELECT COUNT(DISTINCT(user_id)) FROM Users))*100,2) AS percentage
FROM
    Register R
JOIN
    Users U
ON 
    R.user_id =U.user_id
GROUP BY 
    R.contest_id ORDER BY percentage DESC, contest_id;