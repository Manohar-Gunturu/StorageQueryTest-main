#include "pch.h"
#include "MainPage.h"
#include "MainPage.g.cpp"

using namespace winrt;
using namespace Windows::UI::Xaml;
using namespace winrt::Windows::ApplicationModel::Activation;

constexpr uint32_t BulkLoadStorageFileCount{ 50 };

namespace winrt::StorageQueryTest::implementation
{
    MainPage::MainPage()
    {
        InitializeComponent();
    }

}
