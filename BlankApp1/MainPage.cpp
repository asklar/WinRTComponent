#include "pch.h"
#include "MainPage.h"
#include "MainPage.g.cpp"
#include "Generated Files/winrt/RuntimeComponent1.h"

using namespace winrt;
using namespace Windows::UI::Xaml;

namespace winrt::BlankApp1::implementation
{
    MainPage::MainPage()
    {
        InitializeComponent();

        RuntimeComponent1::Class1::Foo();
    }

    int32_t MainPage::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void MainPage::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void MainPage::ClickHandler(IInspectable const&, RoutedEventArgs const&)
    {
        myButton().Content(box_value(L"Clicked"));
    }
}
