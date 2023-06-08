#pragma once

class Application
{
public:
	const wchar_t* name = L"AppTitle";
	int windowWidth = 400;
	int windowHight = 800;

	void Start();
	void PreUpdate();
	void OnGUI();
	void PostUpdate();
	void Destroy();
};

