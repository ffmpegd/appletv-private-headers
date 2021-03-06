/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UINavigationController.h"

@class UIView, NSMutableDictionary, NSArray;
@protocol UINavigationControllerDelegate, UIImagePickerControllerDelegate;

@interface UIImagePickerController : UINavigationController <NSCoding> {
	int _sourceType;	// 284 = 0x11c
	id _image;	// 288 = 0x120
	CGRect _cropRect;	// 292 = 0x124
	NSArray *_mediaTypes;	// 308 = 0x134
	NSMutableDictionary *_properties;	// 312 = 0x138
	int _previousStatusBarStyle;	// 316 = 0x13c
	struct {
		unsigned visible : 1;
		unsigned isCleaningUp : 1;
		unsigned savingOptions : 3;
		unsigned didRevertStatusBar : 1;
	} _imagePickerFlags;	// 320 = 0x140
}
@property(assign, nonatomic) BOOL allowsEditing;	// G=0x33c3cf59; S=0x33c3cf71; 
@property(assign, nonatomic) BOOL allowsImageEditing;	// G=0x33c3cf31; S=0x33c3cf49; 
@property(assign, nonatomic) int cameraCaptureMode;	// G=0x33c3dc91; S=0x33c3dd5d; 
@property(assign, nonatomic) int cameraDevice;	// G=0x33c3db6d; S=0x33c3dbf1; 
@property(assign, nonatomic) int cameraFlashMode;	// G=0x33c3de9d; S=0x33c3df21; 
@property(retain, nonatomic) UIView *cameraOverlayView;	// G=0x33c3d6d9; S=0x33c3d805; 
@property(assign, nonatomic) CGAffineTransform cameraViewTransform;	// G=0x33c3d875; S=0x33c3d9bd; 
@property(assign, nonatomic) id<UINavigationControllerDelegate, UIImagePickerControllerDelegate> delegate;	// @dynamic
@property(copy, nonatomic) NSArray *mediaTypes;	// G=0x33c3ce85; S=0x33c3cc6d; 
@property(assign, nonatomic) BOOL showsCameraControls;	// G=0x33c3d5b5; S=0x33c3d639; 
@property(assign, nonatomic) int sourceType;	// G=0x33c3cc5d; S=0x33c3ca11; 
@property(assign, nonatomic) double videoMaximumDuration;	// G=0x33c3cf81; S=0x33c3cfb5; 
@property(assign, nonatomic) int videoQuality;	// G=0x33c3cff9; S=0x33c3d02d; 
+ (BOOL)_isMediaTypeAvailable:(id)available forSource:(int)source;	// 0x33c3c171
+ (BOOL)_reviewCapturedItems;	// 0x33c3c20d
+ (id)availableCaptureModesForCameraDevice:(int)cameraDevice;	// 0x33c3c2c9
+ (id)availableMediaTypesForSourceType:(int)sourceType;	// 0x33c3c211
+ (BOOL)isCameraDeviceAvailable:(int)available;	// 0x33c3c299
+ (BOOL)isFlashAvailableForCameraDevice:(int)cameraDevice;	// 0x33c3c3f9
+ (BOOL)isSourceTypeAvailable:(int)available;	// 0x33c3c14d
- (id)init;	// 0x33c3c419
- (id)initWithCoder:(id)coder;	// 0x33c3c4fd
- (CGSize)_adjustedContentSizeForPopover:(CGSize)popover;	// 0x33c3ea35
- (BOOL)_allowsImageEditing;	// 0x33c3d0d5
- (BOOL)_allowsMultipleSelection;	// 0x33c3cebd
- (void)_autoDismiss;	// 0x33c3ea41
- (id)_cameraViewController;	// 0x33c3d551
- (id)_createInitialController;	// 0x33c3e5b5
- (BOOL)_didRevertStatusBar;	// 0x33c3e38d
- (void)_imagePickerDidCancel;	// 0x33c3ea6d
- (void)_imagePickerDidCompleteWithInfo:(id)_imagePicker;	// 0x33c3ead5
- (void)_imagePickerDidCompleteWithInfoArray:(id)_imagePicker;	// 0x33c3ec8d
- (unsigned)_imagePickerSavingOptions;	// 0x33c3d4dd
- (id)_initWithSourceImageData:(id)sourceImageData cropRect:(CGRect)rect;	// 0x33c3c6a9
- (void)_initializeProperties;	// 0x33c3d169
- (BOOL)_isCameraCaptureModeValid:(int)valid;	// 0x33c3dd15
- (BOOL)_isSupportedInterfaceOrientation:(int)orientation;	// 0x33c3e3a1
- (void)_populateArchivedChildViewControllers:(id)controllers;	// 0x33c3c871
- (id)_properties;	// 0x33c3d359
- (void)_removeAllChildren;	// 0x33c3e4ad
- (void)_setAllowsImageEditing:(BOOL)editing;	// 0x33c3d071
- (void)_setAllowsMultipleSelection:(BOOL)selection;	// 0x33c3ceed
- (void)_setImagePickerSavingOptions:(unsigned)options;	// 0x33c3d4bd
- (void)_setProperties:(id)properties;	// 0x33c3d105
- (void)_setValue:(id)value forProperty:(id)property;	// 0x33c3d3a9
- (void)_setupControllersForCurrentMediaTypes;	// 0x33c3e929
- (void)_setupControllersForCurrentSourceType;	// 0x33c3e8a1
- (BOOL)_sourceTypeIsCamera;	// 0x33c3d4f1
- (void)_updateCameraCaptureMode;	// 0x33c3c97d
- (id)_valueForProperty:(id)property;	// 0x33c3d479
// declared property getter: - (BOOL)allowsEditing;	// 0x33c3cf59
// declared property getter: - (BOOL)allowsImageEditing;	// 0x33c3cf31
// declared property getter: - (int)cameraCaptureMode;	// 0x33c3dc91
// declared property getter: - (int)cameraDevice;	// 0x33c3db6d
// declared property getter: - (int)cameraFlashMode;	// 0x33c3de9d
// declared property getter: - (id)cameraOverlayView;	// 0x33c3d6d9
// declared property getter: - (CGAffineTransform)cameraViewTransform;	// 0x33c3d875
- (void)dealloc;	// 0x33c3c7f9
- (void)encodeWithCoder:(id)coder;	// 0x33c3c8b5
// declared property getter: - (id)mediaTypes;	// 0x33c3ce85
// declared property setter: - (void)setAllowsEditing:(BOOL)editing;	// 0x33c3cf71
// declared property setter: - (void)setAllowsImageEditing:(BOOL)editing;	// 0x33c3cf49
// declared property setter: - (void)setCameraCaptureMode:(int)mode;	// 0x33c3dd5d
// declared property setter: - (void)setCameraDevice:(int)device;	// 0x33c3dbf1
// declared property setter: - (void)setCameraFlashMode:(int)mode;	// 0x33c3df21
// declared property setter: - (void)setCameraOverlayView:(id)view;	// 0x33c3d805
// declared property setter: - (void)setCameraViewTransform:(CGAffineTransform)transform;	// 0x33c3d9bd
// declared property setter: - (void)setMediaTypes:(id)types;	// 0x33c3cc6d
// declared property setter: - (void)setShowsCameraControls:(BOOL)controls;	// 0x33c3d639
// declared property setter: - (void)setSourceType:(int)type;	// 0x33c3ca11
// declared property setter: - (void)setVideoMaximumDuration:(double)duration;	// 0x33c3cfb5
// declared property setter: - (void)setVideoQuality:(int)quality;	// 0x33c3d02d
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x33c3e3fd
// declared property getter: - (BOOL)showsCameraControls;	// 0x33c3d5b5
// declared property getter: - (int)sourceType;	// 0x33c3cc5d
- (BOOL)startVideoCapture;	// 0x33c3dadd
- (void)stopVideoCapture;	// 0x33c3db25
- (unsigned)supportedInterfaceOrientations;	// 0x33c3e459
- (void)takePicture;	// 0x33c3da95
// declared property getter: - (double)videoMaximumDuration;	// 0x33c3cf81
// declared property getter: - (int)videoQuality;	// 0x33c3cff9
- (void)viewDidDisappear:(BOOL)view;	// 0x33c3e2f9
- (void)viewWillAppear:(BOOL)view;	// 0x33c3e03d
- (void)viewWillDisappear:(BOOL)view;	// 0x33c3e149
- (void)viewWillUnload;	// 0x33c3dfc1
@end

