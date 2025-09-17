# Write your MySQL query statement below
WITH cte AS (
    SELECT requester_id FROM RequestAccepted
    UNION ALL 
    SELECT accepter_id FROM RequestAccepted
)
SELECT requester_id AS id ,count(*) AS num
FROM cte
-- WHERE c=MAX(SELECT count(*) FROM cte GROUP BY requester_id;)
GROUP BY requester_id
ORDER BY num DESC LIMIT 1;