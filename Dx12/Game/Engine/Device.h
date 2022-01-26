#pragma once

// GPU�� �����ϴ� �η� �繫��
// Dx: GPU�� �����ϰ� ���α׷��� �ϴµ� ���̴� ������ API
class Device
{
public:
	void Init();

	ComPtr<IDXGIFactory> GetDXGI() { return _dxgi; }
	ComPtr<ID3D12Device> GetDevice() { return _device; }

private:
	// COM(Component Object Model)
	// - DX�� ���α׷��� ��� �������� ���� ȣȯ���� �����ϰ� �ϴ� ���
	// - COM ��ü(COM �������̽�)�� ���, ���λ����� �츮���� ������
	// - COM ��ü�� �ٷ�� ComPtr ������ ����Ʈ ������
	ComPtr<ID3D12Debug> _debugController;
	ComPtr<IDXGIFactory> _dxgi; // ȭ�� ���� ��ɵ�
	ComPtr<ID3D12Device> _device; // ���� ��ü ����
};
