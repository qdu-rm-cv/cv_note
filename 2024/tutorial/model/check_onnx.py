import onnx

# 读取 ONNX 模型
onnx_model = onnx.load("model.onnx")

# 检查模型格式是否正确
onnx.checker.check_model(onnx_model)

print("无报错,onnx模型载入成功")
