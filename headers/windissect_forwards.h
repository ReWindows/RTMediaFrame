#pragma once

#include <cstdint>

// Forward declarations (automatically generated)
class WindissectOpaque;
class MF; 
namespace Microsoft { namespace WRL { class Details; } } 
class RoVariant; 
namespace Windows { namespace Internal { class Details; } } 
class AgileActivationFactoryWhenEnabled; class AudioBufferImpl; class AudioFrameFactory; class AudioFrameImpl; class AudioFrameState; class AutoStubBias; class BitmapBufferImpl; class BitmapPixelFormatInfo; class BufferReferenceImpl; class CMarshaledInterface; class CNode; class CPair; class CallStackContext; class CallStackContextNode; class CallStackInfo; class CallStackTracing; class Chunk; class ChunkElementIterator; class ChunkView; class Destroy; class EventRegistrationToken; class FEATURE_LOGGED_TRAITS; class FEATURE_STATE_CHANGE_SUBSCRIPTION__; class GPSLatLongPropertyHelper; class GeotagBrokerImpl; class HINSTANCE__; class HSTRING__; class HashFNV; class IActivationFactory; class IAudioFrameNative; class IAudioFrameNativeFactory; class IClassFactory; class IClosableByteAccess; class ID3D11Device; class ID3D11Texture2D; class IDXGISurface; class IInspectable; class IMF2DBuffer2; class IMFDXGIDeviceManager; class IMFMediaBuffer; class IMFMediaType; class IMFSample; class IMFTransform; class IMFVideoProcessorControl; class IRpcOptions; class ISoftwareBitmapInternal; class ISoftwareBitmapNative; class ISoftwareBitmapNativeFactory; class IStream; class IUnknown; class IVideoFrameNative; class IVideoFrameNativeFactory; class IWICBitmap; class IWICBitmapSource; class IWICImagingFactory; class IWICPalette; class IWeakReference; class Iterator; class KeyTraits; class MF; class MFMEDIATYPEUtils; class MediaBufferImpl; class MediaFrameHelpers; class MediaFrameImpl; class MediaFramePropertySetImpl; class PropVariant; class ReleaseSRWLockExclusive; class RoVariant; class RpcOptionsHelper; class SoftwareBitmapFactory; class SoftwareBitmapImpl; class SoftwareBitmapState; class SplitIterator; class TracingFailureCache; class TracingFailureDetails; class TracingFailureHash; class VideoFrameFactory; class VideoFrameImpl; class View; class WICRect; class WicBitmapSourceOnMF2DBuffer2; class _CONTEXT; class _EXCEPTION_RECORD; class _GUID; class _MFVideoArea; class _RO_REGISTRATION_COOKIE; class _RTL_RUN_ONCE; class _RTL_SRWLOCK; class _TP_CALLBACK_INSTANCE; class _TP_TIMER; class __WIL_RTL_FEATURE_USAGE_DATA; class __WIL__WNF_STATE_NAME; class __WilFeatureTraits_Feature_AgileActivationFactories; class _com_error; class _tlgProvider_t; class _tlgWrapperByVal; class lambda_0e64988457575224279dcb6d61e61bdd; class lambda_9c8509026b3c879a54cf28c49b74cbb6; class lambda_a9d737a0130ce47f4b8afa7a5b7870de; class lambda_af0c409a4148f18f41ee9a730b4ce69c; class lambda_be3e5d9dce35d2c8dbfa8485373731d5; class lambda_c2fd7731c5ae0d37e65ea73be67c0f1b; class lambda_cbfb90c10ccd9db5277e9aeb4e34b60e; class lambda_d06b1c1180e761be0e155e8eb352d228; class lambda_dfadb08385c0ecb100cd522a7df6a8ea; class lambda_e80c11eedd077bc1a8e15193b4b8fc43; class permission; class tagRECT; class thunk; class type_info; class wil_FeatureState; class wil_details_FeatureReportingCache; class wil_details_FeatureStateCache; class wil_details_FeatureUsageSRUM; 
namespace Concurrency { class invalid_operation; class scheduler_interface; class scheduler_ptr; class task; class task_canceled; class task_continuation_context; class task_options; } 
namespace Concurrency { namespace details { class _CancellationTokenRegistration; class _CancellationTokenState; class _ContinuationTaskHandleBase; class _ExceptionHolder; class _TaskCreationCallstack; class _TaskProcHandle; class _Task_impl; class _Task_impl_base; class _ThenImplOptions; class _TypeSelectorNoAsync; } } 
namespace Microsoft { namespace WRL { class AgileRef; class CloakedIid; class ComPtr; class Details; class DisableCausality; class EventSource; class FtmBase; class Implements; class InvokeModeOptions; class RuntimeClassFlags; class SimpleClassFactory; class SimpleSealedActivationFactory; } } 
namespace Microsoft { namespace WRL { namespace Wrappers { class Event; class HString; class HStringReference; class SRWLock; } } } 
namespace Microsoft { namespace WRL { namespace Wrappers { namespace Details { class SyncLockExclusive; } } } } 
namespace Windows { } 
namespace Windows { namespace Devices { namespace Geolocation { class BasicGeoposition; class Geopoint; class Geoposition; class IGeolocator; class IGeopoint; class IGeoposition; } } } 
namespace Windows { namespace Foundation { namespace Collections { class Detail; } } } 
namespace Windows { namespace Foundation { namespace Collections { namespace Internal { class detail; } } } } 
namespace Windows { namespace Graphics { namespace DirectX { namespace Direct3D11 { class Direct3DSurfaceDescription; class IDirect3DDevice; class IDirect3DSurface; } } } } 
namespace Windows { namespace Graphics { namespace Imaging { class BitmapBounds; class BitmapPlaneDescription; class IBitmapBuffer; class ISoftwareBitmap; class ISoftwareBitmapFactory; class ISoftwareBitmapStatics; class SoftwareBitmap; } } } 
namespace Windows { namespace Internal { class AsyncBaseFTM; class AsyncDeferral; class CNoResult; class CResultBase; class ComTaskPoolHandler; class Details; class GitPtr; class IAsyncFireCompletion; class IComPoolTask; class IGeotagBroker; class INilDelegate; } } 
namespace Windows { namespace Internal { namespace ComTaskPool { class CTaskWrapper; } } } 
namespace Windows { namespace Media { class IAudioBuffer; class IAudioFrame; class IAudioFrameFactory; class IMediaFrame; class IVideoFrame; class IVideoFrame2; class IVideoFrameFactory; class IVideoFrameStatics; } } 
namespace Windows { namespace Media { namespace Internal { class IVideoFrameInternal; class IVideoFrameInternalFactory; } } } 
namespace Windows { namespace Storage { class IStorageFile; } } 
namespace Windows { namespace Storage { namespace FileProperties { class GeotagHelper; class IStorageItemExtraProperties; } } } 
namespace Windows { namespace Storage { namespace Streams { class IBuffer; class IBufferByteAccess; } } } 
namespace Windows { namespace System { namespace Threading { class IThreadPoolTimerStatics; class ITimerElapsedHandler; } } } 
namespace XWinRT { class CElementTraits; class ComLock; class FakeStl; class InterfaceLifetimeTraits; class SerializingLockPolicy; class StringEquals; class StringHash; class TXPOSITION; class XHashMap; class XPlex; } 
namespace XWinRT { namespace SecureVersionTag { class TagManager; } } 
namespace XWinRT { namespace detail { class AcquireRead; class AcquireWrite; class GitStorageType; class LockHolder; } } 
namespace std { class _Func_base; class _Func_impl_no_alloc; class allocator; class bad_alloc; class bad_array_new_length; class exception; class exception_ptr; class function; class integral_constant; class mutex; class nothrow_t; class nullptr_t; class once_flag; class runtime_error; class shared_ptr; class vector; class weak_ptr; } 
namespace wil { class FailureInfo; class Feature; class ResultException; class process_heap_deleter; class srwlock; class unique_any_t; } 
namespace wil { namespace details { class DestroyThreadPoolTimer; class ResultStatus; class SystemThreadPoolMethods; class ThreadFailureCallbackHolder; class resource_policy; class unique_storage; } } 
namespace wil { namespace details_abi { class FeatureStateData; class ProcessLocalData; class ProcessLocalStorageData; class RawUsageIndex; class ThreadLocalData; class UsageIndexProperty; class UsageIndexes; class heap_vector; } } 
namespace wistd { class function; class integral_constant; class unique_ptr; } 
namespace wistd { namespace __function { class __base; } } 

