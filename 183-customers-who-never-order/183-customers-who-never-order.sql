# Write your MySQL query statement below
select c.name as Customers from Customers as c LEFT JOIN orders as o on c.id = o.customerId where 
o.customerid is NULL