-- Write your PostgreSQL query statement below
select eui.unique_id, e.name
from 
    EmployeeUNI as eui
right join
    Employees as e
on 
    eui.id=e.id 