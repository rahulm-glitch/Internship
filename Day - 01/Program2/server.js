const http = require('http');

// 10 Employee Data Objects
let employees = [
  { emp: 1, name: "Shivakant", email: "shivakant@gmail.com", contact: "9876543210", salry: 10000, pf_per: 10 },
  { emp: 2, name: "Raj", email: "raj@gmail.com", contact: "9876543211", salry: 12000, pf_per: 10 },
  { emp: 3, name: "Rajshri", email: "rajshri@gmail.com", contact: "9876543212", salry: 15000, pf_per: 12 },
  { emp: 4, name: "Om", email: "om@gmail.com", contact: "9876543213", salry: 20000, pf_per: 10 },
  { emp: 5, name: "Amit", email: "amit@gmail.com", contact: "9876543214", salry: 18000, pf_per: 8 },
  { emp: 6, name: "Priya", email: "priya@gmail.com", contact: "9876543215", salry: 22000, pf_per: 10 },
  { emp: 7, name: "Karan", email: "karan@gmail.com", contact: "9876543216", salry: 25000, pf_per: 12 },
  { emp: 8, name: "Neha", email: "neha@gmail.com", contact: "9876543217", salry: 30000, pf_per: 10 },
  { emp: 9, name: "Rohan", email: "rohan@gmail.com", contact: "9876543218", salry: 16000, pf_per: 5 },
  { emp: 10, name: "Vikas", email: "vikas@gmail.com", contact: "9876543219", salry: 28000, pf_per: 10 }
];

// Net Salary calculate kar ke data modify karna (netsal = salry - (salry * pf_per / 100))
let data = employees.map(emp => {
  let netsal = emp.salry - (emp.salry * emp.pf_per / 100);
  return {
    ...emp,
    netsal: netsal
  };
});

// Server Create karna
const server = http.createServer((req, res) => {
  // HTTP Header set karna
  res.writeHead(200, { 'Content-Type': 'application/json' });

  // JSON format me Response send karna
  res.end(JSON.stringify({
    status: true,
    msg: "data get successfully",
    data: data
  }));
});

// Port Define karna
const PORT = 3000;

// Server start karna
server.listen(PORT, 'localhost', () => {
  console.log(`Server running at http://localhost:${PORT}/`);
});