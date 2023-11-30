#include <iostream>
#include <ctime>
#include <onnxruntime_cxx_api.h>
#include <array>

int main()
{
    clock_t startTime, endTime;
    startTime = clock();
    // 分配 ONNXRuntime session(会话)
    auto memory_info = Ort::MemoryInfo::
        CreateCpu(OrtDeviceAllocator, OrtMemTypeCPU);
    Ort::Env env;
    const char *modelpath = "/home/song/tutorial/inference/onnx/mnist.onnx";
    // Ort::Session session_{env, ORT_TSTR("mnist.onnx"),
    // Ort::SessionOptions{nullptr}};
    Ort::Session session_{env, modelpath,
                          Ort::SessionOptions{nullptr}};

    static constexpr const int width_ = 28;
    static constexpr const int height_ = 28;

    std::array<float, width_ * height_> input{};
    std::array<float, 10> output{};
    int64_t output_{0};

    // 分配 模型 输入: fill in shape and size
    // std::array<float, ...> input{};
    std::array<int64_t, 4> input_shape_{1, 1, width_, height_};
    Ort::Value input_tensor =
        Ort::Value::CreateTensor<float>(memory_info, input.data(), input.size(),
                                        input_shape_.data(),
                                        input_shape_.size());
    const char *input_names[] = {"Input3"};

    // 分配 模型 输出: fill in shape and size
    // std::array<float, ...> output{};
    std::array<int64_t, 2> output_shape_{1, 10};
    Ort::Value output_tensor =
        Ort::Value::CreateTensor<float>(memory_info, output.data(),
                                        output.size(),
                                        output_shape_.data(),
                                        output_shape_.size());
    const char *output_names[] = {"Plus214_Output_0"};

    // 运行
    session_.Run(Ort::RunOptions{nullptr}, input_names,
                 &input_tensor, 1, output_names,
                 &output_tensor, 1);

    endTime = clock();

    std::cout << "The run time is:"
              << static_cast<double>(endTime - startTime) / CLOCKS_PER_SEC
              << "s" << std::endl;
    return 0;
}
