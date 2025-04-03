#include <torch/torch.h>
#include <iostream>

// 간단한 신경망 모델 정의 (두 개의 선형 계층 사용)
struct SimpleNet : torch::nn::Module {
  SimpleNet() {
    // 첫 번째 선형 계층: 입력 10 -> 출력 5
    fc1 = register_module("fc1", torch::nn::Linear(10, 5));
    // 두 번째 선형 계층: 입력 5 -> 출력 2
    fc2 = register_module("fc2", torch::nn::Linear(5, 2));
  }

  // 순전파 함수 정의
  torch::Tensor forward(torch::Tensor x) {
    x = torch::relu(fc1->forward(x));
    x = fc2->forward(x);
    return x;
  }

  torch::nn::Linear fc1{nullptr}, fc2{nullptr};
};

int main() {
  // 모델 인스턴스 생성
  SimpleNet model;
  model.eval();  // 추론 모드

  // (배치 크기 1, 10차원) 더미 입력 데이터 생성
  torch::Tensor input = torch::randn({1, 10});
  torch::Tensor output = model.forward(input);

  // 결과 출력
  std::cout << "모델 출력:" << std::endl;
  std::cout << output << std::endl;

  return 0;
}

