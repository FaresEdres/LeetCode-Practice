# Write your MySQL query statement below
SELECT a.id as id
FROM Weather a JOIN Weather b 
ON a.recordDate =b.recordDate + INTERVAL 1 DAY 
WHERE a.temperature > b.temperature
