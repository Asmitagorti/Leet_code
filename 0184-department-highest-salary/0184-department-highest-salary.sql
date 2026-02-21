/* Write your PL/SQL query statement below */
select d.name Department,e.name Employee,e.salary Salary
from employee e join Department d
on e.departmentId=d.id
where salary=(
    select max(salary) 
    from employee
    where departmentId=e.departmentId
);