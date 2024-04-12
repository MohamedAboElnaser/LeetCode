-- Write your PostgreSQL query statement below
SELECT name, population ,area 
from world 
where
population >=25000000 or area >=3000000