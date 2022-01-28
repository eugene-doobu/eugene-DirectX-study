#pragma once
// [계약서 / 결재]
// CPU와 GPU의 공간의 구조는 상당히 다름
// 어떤 레지스터, 버퍼를 사용할 것인지 명시를 하겠다
class RootSignature
{
public:
	void Init(ComPtr<ID3D12Device> device);

	ComPtr<ID3D12RootSignature>	GetSignature() { return _signature; }

private:
	ComPtr<ID3D12RootSignature> _signature;
};

