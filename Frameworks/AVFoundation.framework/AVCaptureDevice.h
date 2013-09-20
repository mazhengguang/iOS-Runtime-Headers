/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVCaptureDeviceFormat, AVCaptureDeviceInternal, NSArray, NSString;

@interface AVCaptureDevice : NSObject {
    AVCaptureDeviceInternal *_internal;
}

@property(retain) AVCaptureDeviceFormat * activeFormat;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } activeVideoMaxFrameDuration;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } activeVideoMinFrameDuration;
@property(getter=isConnected,readonly) BOOL connected;
@property(readonly) NSArray * formats;
@property(readonly) NSString * localizedName;
@property(readonly) NSString * modelID;
@property(readonly) NSString * uniqueID;

+ (id)_devices;
+ (int)authorizationStatusForMediaType:(id)arg1;
+ (id)defaultDeviceWithMediaType:(id)arg1;
+ (id)deviceWithUniqueID:(id)arg1;
+ (id)devices;
+ (id)devicesWithMediaType:(id)arg1;
+ (void)initialize;
+ (void)requestAccessForMediaType:(id)arg1 completionHandler:(id)arg2;

- (BOOL)HDRUsesPreBracketedFrameAsEV0;
- (void)_applyOverridesToCaptureOptions:(id)arg1;
- (void)_sessionDidStart;
- (void)_sessionWillStart;
- (void)_setActiveFormatAndFrameRatesForResolvedOptions:(id)arg1 sendingFrameRatesToFig:(BOOL)arg2;
- (void)_setActiveVideoMaxFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_setActiveVideoMinFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (BOOL)_startUsingDevice:(id*)arg1;
- (void)_stopUsingDevice;
- (id)activeFormat;
- (id)activeInput;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })activeVideoMaxFrameDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })activeVideoMinFrameDuration;
- (BOOL)addInput:(id)arg1;
- (float)autoExposureBias;
- (int)autoFocusRangeRestriction;
- (BOOL)automaticallyAdjustsImageControlMode;
- (BOOL)automaticallyEnablesLowLightBoostWhenAvailable;
- (void)cancelVideoZoomRamp;
- (void)close;
- (float)contrast;
- (void*)copyFigCaptureStreamFactoryTestProperty:(struct __CFString { }*)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)description;
- (struct OpaqueCMClock { }*)deviceClock;
- (BOOL)doesHandleNotification:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })exposureDuration;
- (float)exposureGain;
- (int)exposureMode;
- (struct CGPoint { float x1; float x2; })exposurePointOfInterest;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })faceRectangle;
- (int)faceRectangleAngle;
- (int)flashMode;
- (int)focusMode;
- (struct CGPoint { float x1; float x2; })focusPointOfInterest;
- (float)focusPosition;
- (id)formats;
- (void)handleNotification:(id)arg1 payload:(id)arg2;
- (BOOL)hasFlash;
- (BOOL)hasMediaType:(id)arg1;
- (BOOL)hasTorch;
- (int)imageControlMode;
- (id)init;
- (BOOL)isActiveVideoMaxFrameDurationSet;
- (BOOL)isActiveVideoMinFrameDurationSet;
- (BOOL)isAdjustingExposure;
- (BOOL)isAdjustingFocus;
- (BOOL)isAdjustingWhiteBalance;
- (BOOL)isAutoFocusRangeRestrictionSupported;
- (BOOL)isConnected;
- (BOOL)isExposureModeSupported:(int)arg1;
- (BOOL)isExposurePointOfInterestSupported;
- (BOOL)isFaceDetectionDebugMetadataReportingEnabled;
- (BOOL)isFaceDetectionDrivenImageProcessingEnabled;
- (BOOL)isFaceDetectionDuringVideoPreviewSupported;
- (BOOL)isFaceDetectionSupported;
- (BOOL)isFlashActive;
- (BOOL)isFlashAvailable;
- (BOOL)isFlashModeSupported:(int)arg1;
- (BOOL)isFocusModeSupported:(int)arg1;
- (BOOL)isFocusPointOfInterestSupported;
- (BOOL)isHDRSupported;
- (BOOL)isHighDynamicRangeScene;
- (BOOL)isHighDynamicRangeSceneDetectionEnabled;
- (BOOL)isHighDynamicRangeSceneDetectionSupported;
- (BOOL)isImageControlModeSupported:(int)arg1;
- (BOOL)isInUseByAnotherApplication;
- (BOOL)isLockedForConfiguration;
- (BOOL)isLowLightBoostEnabled;
- (BOOL)isLowLightBoostSupported;
- (BOOL)isMachineReadableCodeDetectionSupported;
- (BOOL)isManualExposureSupportEnabled;
- (BOOL)isManualFocusSupportEnabled;
- (BOOL)isOpen;
- (BOOL)isRampingVideoZoom;
- (BOOL)isSISSupported;
- (BOOL)isSmoothAutoFocusEnabled;
- (BOOL)isSmoothAutoFocusSupported;
- (BOOL)isSubjectAreaChangeMonitoringEnabled;
- (BOOL)isTorchActive;
- (BOOL)isTorchAvailable;
- (BOOL)isTorchModeSupported:(int)arg1;
- (BOOL)isWhiteBalanceModeSupported:(int)arg1;
- (id)localizedName;
- (BOOL)lockForConfiguration:(id*)arg1;
- (id)modelID;
- (BOOL)open:(id*)arg1;
- (int)position;
- (void)rampToVideoZoomFactor:(float)arg1 withRate:(float)arg2;
- (void)removeInput:(id)arg1;
- (float)saturation;
- (id)session;
- (void)setActiveFormat:(id)arg1;
- (void)setActiveInput:(id)arg1;
- (void)setActiveVideoMaxFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setActiveVideoMinFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setAutoExposureBias:(float)arg1;
- (void)setAutoFocusRangeRestriction:(int)arg1;
- (void)setAutomaticallyAdjustsImageControlMode:(BOOL)arg1;
- (void)setAutomaticallyEnablesLowLightBoostWhenAvailable:(BOOL)arg1;
- (void)setContrast:(float)arg1;
- (void)setExposureDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setExposureGain:(float)arg1;
- (void)setExposureMode:(int)arg1;
- (void)setExposurePointOfInterest:(struct CGPoint { float x1; float x2; })arg1;
- (void)setFaceDetectionDebugMetadataReportingEnabled:(BOOL)arg1;
- (void)setFaceDetectionDrivenImageProcessingEnabled:(BOOL)arg1;
- (void)setFigCaptureStreamFactoryTestProperty:(struct __CFString { }*)arg1 withValue:(void*)arg2 error:(id*)arg3;
- (void)setFlashMode:(int)arg1;
- (void)setFocusMode:(int)arg1;
- (void)setFocusPointOfInterest:(struct CGPoint { float x1; float x2; })arg1;
- (void)setFocusPosition:(float)arg1;
- (void)setHighDynamicRangeSceneDetectionEnabled:(BOOL)arg1;
- (void)setImageControlMode:(int)arg1;
- (void)setManualExposureSupportEnabled:(BOOL)arg1;
- (void)setManualFocusSupportEnabled:(BOOL)arg1;
- (void)setSaturation:(float)arg1;
- (void)setSmoothAutoFocusEnabled:(BOOL)arg1;
- (void)setSubjectAreaChangeMonitoringEnabled:(BOOL)arg1;
- (void)setTorchMode:(int)arg1;
- (BOOL)setTorchModeOnWithLevel:(float)arg1 error:(id*)arg2;
- (void)setVideoZoomFactor:(float)arg1;
- (void)setWhiteBalanceMode:(int)arg1;
- (void)setWhiteBalanceTemperature:(float)arg1;
- (BOOL)startUsingDevice:(id*)arg1;
- (void)stopUsingDevice;
- (BOOL)supportsAVCaptureSessionPreset:(id)arg1;
- (float)torchLevel;
- (int)torchMode;
- (id)uniqueID;
- (void)unlockForConfiguration;
- (float)videoZoomFactor;
- (int)whiteBalanceMode;
- (float)whiteBalanceTemperature;

@end