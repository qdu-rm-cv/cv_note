import torch
from torchvision import models
import onnx

# 有 GPU 就用 GPU，没有就用 CPU
device = torch.device("cuda:0" if torch.cuda.is_available() else "cpu")

# 导入模型
model = torch.load("model.pth")

# 转换成评估模式
model = model.eval().to(device)

# 按训练时的代码构造输入张量 !重要
x = torch.randn(1, 1, 28, 28).to(device)

# 转换模型
with torch.no_grad():
    torch.onnx.export(
        model,  # 要转换的模型
        x,  # 模型的任意一组输入
        "model.onnx",  # 导出的 ONNX 文件名 自定义
        opset_version=11,  # ONNX 算子集版本
        input_names=["input"],  # 输入 Tensor 的名称（自己起名字）
        output_names=["output"],  # 输出 Tensor 的名称（自己起名字）
    )
