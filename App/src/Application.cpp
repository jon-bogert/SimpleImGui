#include "Precompiled.h"
#include "Application.h"
#include "WindowManager.h"

void Application::Start()
{
	
}

void Application::PreUpdate()
{
}

void Application::OnGUI()
{
	if (ImGui::Button("Click Me"))
	{
		ImGui::Text("Hi! XD");
	}
}

void Application::PostUpdate()
{
}

void Application::Destroy()
{
}
