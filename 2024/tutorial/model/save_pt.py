"""
################################################################

# pytorch保存模型的两种方式

################################################################


# 第一种，直接保存整个模型并读取,可导出为onnx

## 创建你的模型实例对象: model
model = net()

## 保存模型
torch.save(model, 'model_name.pth')

## 读取模型
model = torch.load('model_name.pth')



# 第二种，只保存模型的参数，不可导出为onnx

## 保存模型
torch.save({'model': model.state_dict()}, 'model_name.pth')

## 读取模型
model = net()
state_dict = torch.load('model_name.pth')
model.load_state_dict(state_dict['model'])

"""
