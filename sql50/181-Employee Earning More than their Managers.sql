select emp.name as Employee
from Employee emp
join Employee mgr
on emp.managerid=mgr.id
where emp.salary > mgr.salary;