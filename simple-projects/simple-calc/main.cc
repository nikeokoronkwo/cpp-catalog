#include <cmath>
#include <iostream>

enum Operators { plus, minus, multiply, divide, power, modulus, unknown };

Operators deduce_operator(std::string oper) {
  if (oper == "+") return Operators::plus;
  if (oper == "-") return Operators::minus;
  if (oper == "*" || oper == "×" || oper == "⋅") return Operators::multiply;
  if (oper == "/" || oper == "÷") return Operators::divide;
  if (oper == "^") return Operators::power;
  if (oper == "mod" || oper == "%") return Operators::modulus;
  return Operators::unknown;
}

int main(int argc, char** argv) {
  if (argc != 4) {
    std::cerr << "Error: Too " << (argc < 4 ? "few" : "many") << " arguments - "
              << argc << "\nExpected 4 arguments" << std::endl;
    goto end;
  } else {
    goto program;
  }
end:
  std::cout << "Usage: simple-calc <lhs> <operator> <rhs>" << std::endl;
  return 1;

program:
  char* s_lhs = argv[1];
  char* s_rhs = argv[3];
  char* s_op = argv[2];

  int lhs = std::stoi(std::string(s_lhs));
  int rhs = std::stoi(std::string(s_rhs));
  Operators op = deduce_operator(s_op);

  switch (op) {
    case plus:
      std::cout << (lhs + rhs) << std::endl;
      break;
    case minus:
      std::cout << (lhs - rhs) << std::endl;
      break;
    case multiply:
      std::cout << (lhs * rhs) << std::endl;
      break;
    case divide:
      std::cout << (lhs / rhs) << std::endl;
      break;
    case power:
      std::cout << std::pow(lhs, rhs) << std::endl;
      break;
    case modulus:
      std::cout << (lhs % rhs) << std::endl;
      break;
    case unknown:
      std::cerr << "Unknown Operator: " << s_op << std::endl;
      break;
  }
  return 0;
}
