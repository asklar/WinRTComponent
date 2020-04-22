# Consuming C# WinRT components from C++

This project provides a sample for how to call a C# WinRT component from a C++/WinRT UWP app.

The default out-of-the-box solution in Visual Studio is faulty in that it builds, but then fails at runtime with a cryptic exception:

```
FUSION_E_REF_DEF_MISMATCH
0x80131040  The located assembly's manifest definition does not match the assembly reference
```

Here's how to get it to work:
1. Right click on the VCXProj file ➡ Manage NuGet Packages.
2. Search for Microsoft.Net.Native.Compiler, and install it
3. Then add the following properties to the VCXProj
```
  <PropertyGroup>
    <UseDotNetNativeToolchain Condition="'$(Configuration)'=='Release'">true</UseDotNetNativeToolchain>
    <DotNetNativeVersion>2.2.3</DotNetNativeVersion>
  </PropertyGroup>
```
(Replace the `2.2.3` version above with the version from the .net native compiler NuGet Package)
