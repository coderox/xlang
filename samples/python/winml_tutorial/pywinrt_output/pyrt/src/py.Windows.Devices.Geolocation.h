// WARNING: Please don't edit this file. It was generated by Python/WinRT

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#include <winrt/Windows.Devices.Geolocation.h>

namespace py
{
    template<>
    struct winrt_type<winrt::Windows::Devices::Geolocation::CivicAddress>
    {
        static PyTypeObject* python_type;
    
        static PyTypeObject* get_python_type()
        {
            return python_type;
        }
    };
    
    template<>
    struct winrt_type<winrt::Windows::Devices::Geolocation::GeoboundingBox>
    {
        static PyTypeObject* python_type;
    
        static PyTypeObject* get_python_type()
        {
            return python_type;
        }
    };
    
    template<>
    struct winrt_type<winrt::Windows::Devices::Geolocation::Geocircle>
    {
        static PyTypeObject* python_type;
    
        static PyTypeObject* get_python_type()
        {
            return python_type;
        }
    };
    
    template<>
    struct winrt_type<winrt::Windows::Devices::Geolocation::Geocoordinate>
    {
        static PyTypeObject* python_type;
    
        static PyTypeObject* get_python_type()
        {
            return python_type;
        }
    };
    
    template<>
    struct winrt_type<winrt::Windows::Devices::Geolocation::GeocoordinateSatelliteData>
    {
        static PyTypeObject* python_type;
    
        static PyTypeObject* get_python_type()
        {
            return python_type;
        }
    };
    
    template<>
    struct winrt_type<winrt::Windows::Devices::Geolocation::Geolocator>
    {
        static PyTypeObject* python_type;
    
        static PyTypeObject* get_python_type()
        {
            return python_type;
        }
    };
    
    template<>
    struct winrt_type<winrt::Windows::Devices::Geolocation::Geopath>
    {
        static PyTypeObject* python_type;
    
        static PyTypeObject* get_python_type()
        {
            return python_type;
        }
    };
    
    template<>
    struct winrt_type<winrt::Windows::Devices::Geolocation::Geopoint>
    {
        static PyTypeObject* python_type;
    
        static PyTypeObject* get_python_type()
        {
            return python_type;
        }
    };
    
    template<>
    struct winrt_type<winrt::Windows::Devices::Geolocation::Geoposition>
    {
        static PyTypeObject* python_type;
    
        static PyTypeObject* get_python_type()
        {
            return python_type;
        }
    };
    
    template<>
    struct winrt_type<winrt::Windows::Devices::Geolocation::Geovisit>
    {
        static PyTypeObject* python_type;
    
        static PyTypeObject* get_python_type()
        {
            return python_type;
        }
    };
    
    template<>
    struct winrt_type<winrt::Windows::Devices::Geolocation::GeovisitMonitor>
    {
        static PyTypeObject* python_type;
    
        static PyTypeObject* get_python_type()
        {
            return python_type;
        }
    };
    
    template<>
    struct winrt_type<winrt::Windows::Devices::Geolocation::GeovisitStateChangedEventArgs>
    {
        static PyTypeObject* python_type;
    
        static PyTypeObject* get_python_type()
        {
            return python_type;
        }
    };
    
    template<>
    struct winrt_type<winrt::Windows::Devices::Geolocation::GeovisitTriggerDetails>
    {
        static PyTypeObject* python_type;
    
        static PyTypeObject* get_python_type()
        {
            return python_type;
        }
    };
    
    template<>
    struct winrt_type<winrt::Windows::Devices::Geolocation::PositionChangedEventArgs>
    {
        static PyTypeObject* python_type;
    
        static PyTypeObject* get_python_type()
        {
            return python_type;
        }
    };
    
    template<>
    struct winrt_type<winrt::Windows::Devices::Geolocation::StatusChangedEventArgs>
    {
        static PyTypeObject* python_type;
    
        static PyTypeObject* get_python_type()
        {
            return python_type;
        }
    };
    
    template<>
    struct winrt_type<winrt::Windows::Devices::Geolocation::VenueData>
    {
        static PyTypeObject* python_type;
    
        static PyTypeObject* get_python_type()
        {
            return python_type;
        }
    };
    
    template<>
    struct winrt_type<winrt::Windows::Devices::Geolocation::IGeoshape>
    {
        static PyTypeObject* python_type;
    
        static PyTypeObject* get_python_type()
        {
            return python_type;
        }
    };
    
    template<>
    struct winrt_type<winrt::Windows::Devices::Geolocation::BasicGeoposition>
    {
        static PyTypeObject* python_type;
    
        static PyTypeObject* get_python_type()
        {
            return python_type;
        }
    };
    
    template<>
    struct converter<winrt::Windows::Devices::Geolocation::BasicGeoposition>
    {
        static PyObject* convert(winrt::Windows::Devices::Geolocation::BasicGeoposition instance) noexcept;
        static winrt::Windows::Devices::Geolocation::BasicGeoposition convert_to(PyObject* obj);
    };
    
}