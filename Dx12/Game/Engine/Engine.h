#pragma once
// 헤더를 다 한곳에 때려박는건 안좋은 습관이지만
// 클래스를 나누는 의미가 단순히 '구분'을 위해서라면 이렇게 써도 좋아

#include "Device.h"
#include "CommandQueue.h"
#include "SwapChain.h"
#include "RootSignature.h"
#include "Mesh.h"
#include "Shader.h"

class Engine
{
public:
	void Init(const WindowInfo& info);
	void Render();

public:
	shared_ptr<Device> GetDevice() { return _device; }
	shared_ptr<CommandQueue> GetCmdQueue() { return _cmdQueue; }
	shared_ptr<SwapChain> GetSwapChain() { return _swapChain; }
	shared_ptr<RootSignature> GetRootSignature() { return _rootSignature; }

public:
	void RenderBegin();
	void RenderEnd();

	void ResizeWindow(int width, int height);

private:
	WindowInfo     _window;
	D3D12_VIEWPORT _viewport = {};
	D3D12_RECT     _scissorRect = {};

	shared_ptr<Device> _device;
	shared_ptr<CommandQueue> _cmdQueue;
	shared_ptr<SwapChain> _swapChain;
	shared_ptr<RootSignature> _rootSignature;
};

