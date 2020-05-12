/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
 public:
  std::unordered_map<int, Employee*> employees_map;

  int getImportance(int id) {
    int ret = employees_map[id]->importance;
    for (int each : employees_map[id]->subordinates) {
      ret += getImportance(each);
    }
    return ret;
  }

  int getImportance(vector<Employee*> employees, int id) {
    for (Employee* each : employees) {
      employees_map[each->id] = each;
    }
    return getImportance(id);
  }
};