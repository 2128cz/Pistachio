workspace "Pistachio"
	architecture "x64"
	
	configurations
	{
		"Debug",
		"Release",
		"Dist"
	}

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

project "Pistachio"
	location "Pistachio"
	kind "SharedLib"
	language "C++"

	targetdir ("bin/".. outputdir .. "/%{prj.name}")
	objdir ("bin-int/".. outputdir .. "/%{prj.name}")

	files
	{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp",
	}

	includedirs
	{
		"%{prj.name}/vendor/spdlog/include"
	}

	filter "system:windows"
		cppdialect "C++17"
		staticruntime "On"
		systemversion "latest"

		defines
		{
			"CHIO_PLANTFORM_WINDOWS",
			"CHIO_BUILD_DLL"
		}

		postbuildcommands
		{
			("{COPY} %{cfg.buildtarget.relpath} ../bin/" .. outputdir .. "/Sandbox")
		}

	filter "configurations:Debug"
		defines "CHIO_DEBUG"
		symbols "On"

	filter "configurations:Release"
		defines "CHIO_RELEASE"
		symbols "On"

	filter "configurations:Dist"
		defines "CHIO_DIST"
		symbols "On"

project "Sandbox"
	location "Sandbox"
	kind "ConsoleApp"

	language "C++"

	targetdir ("bin/".. outputdir .. "/%{prj.name}")
	objdir ("bin-int/".. outputdir .. "/%{prj.name}")

	files
	{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp",
	}

	includedirs
	{
		"%{prj.name}/vendor/spdlog/include",
		"Pistachio/src"
	}

	links
	{
		"Pistachio"
	}

	filter "system:windows"
		cppdialect "C++17"
		staticruntime "On"
		systemversion "latest"

		defines
		{
			"CHIO_PLANTFORM_WINDOWS"
		}

	filter "configurations:Debug"
		defines "CHIO_DEBUG"
		symbols "On"

	filter "configurations:Release"
		defines "CHIO_RELEASE"
		symbols "On"

	filter "configurations:Dist"
		defines "CHIO_DIST"
		symbols "On"