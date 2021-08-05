#pragma once

#include "MainPage.g.h"

using namespace winrt;
using namespace winrt::Windows;
using namespace winrt::Windows::Foundation;
using namespace winrt::Windows::UI::Xaml;

namespace WS = winrt::Windows::Storage;

namespace winrt::StorageQueryTest::implementation
{
    struct MainPage : MainPageT<MainPage>
    {
        MainPage();


    };

}

namespace winrt::StorageQueryTest::factory_implementation
{
    struct MainPage : MainPageT<MainPage, implementation::MainPage>
    {
    };
}
