#pragma once

enum class UIStyle { Dark, Light, Custom};

class Application
{
public:
	const wchar_t* name = L"AppTitle";
	int windowWidth = 400;
	int windowHight = 800;
	UIStyle style = UIStyle::Custom;

	void Start();
	void PreUpdate();
	void OnGUI();
	void PostUpdate();
	void Destroy();
};

