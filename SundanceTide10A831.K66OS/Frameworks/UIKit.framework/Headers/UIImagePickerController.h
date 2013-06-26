/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UINavigationController.h"

@class NSMutableDictionary, NSArray, UIView;
@protocol UINavigationControllerDelegate, UIImagePickerControllerDelegate;

@interface UIImagePickerController : UINavigationController <NSCoding> {
	int _sourceType;	// 288 = 0x120
	id _image;	// 292 = 0x124
	CGRect _cropRect;	// 296 = 0x128
	NSArray *_mediaTypes;	// 312 = 0x138
	NSMutableDictionary *_properties;	// 316 = 0x13c
	int _previousStatusBarStyle;	// 320 = 0x140
	struct {
		unsigned visible : 1;
		unsigned isCleaningUp : 1;
		unsigned savingOptions : 3;
		unsigned didRevertStatusBar : 1;
	} _imagePickerFlags;	// 324 = 0x144
}
@property(assign, nonatomic) BOOL allowsEditing;	// G=0x31e50949; S=0x31e50961; 
@property(assign, nonatomic) BOOL allowsImageEditing;	// G=0x31e50921; S=0x31e50939; 
@property(assign, nonatomic) int cameraCaptureMode;	// G=0x31e51681; S=0x31e5174d; 
@property(assign, nonatomic) int cameraDevice;	// G=0x31e5155d; S=0x31e515e1; 
@property(assign, nonatomic) int cameraFlashMode;	// G=0x31e5188d; S=0x31e51911; 
@property(retain, nonatomic) UIView *cameraOverlayView;	// G=0x31e510c9; S=0x31e511f5; 
@property(assign, nonatomic) CGAffineTransform cameraViewTransform;	// G=0x31e51265; S=0x31e513ad; 
@property(assign, nonatomic) id<UINavigationControllerDelegate, UIImagePickerControllerDelegate> delegate;	// @dynamic
@property(copy, nonatomic) NSArray *mediaTypes;	// G=0x31e50875; S=0x31e5065d; 
@property(assign, nonatomic) BOOL showsCameraControls;	// G=0x31e50fa5; S=0x31e51029; 
@property(assign, nonatomic) int sourceType;	// G=0x31e5064d; S=0x31e50401; 
@property(assign, nonatomic) double videoMaximumDuration;	// G=0x31e50971; S=0x31e509a5; 
@property(assign, nonatomic) int videoQuality;	// G=0x31e509e9; S=0x31e50a1d; 
+ (BOOL)_isMediaTypeAvailable:(id)available forSource:(int)source;	// 0x31e4fb61
+ (BOOL)_reviewCapturedItems;	// 0x31e4fbfd
+ (id)availableCaptureModesForCameraDevice:(int)cameraDevice;	// 0x31e4fcb9
+ (id)availableMediaTypesForSourceType:(int)sourceType;	// 0x31e4fc01
+ (BOOL)isCameraDeviceAvailable:(int)available;	// 0x31e4fc89
+ (BOOL)isFlashAvailableForCameraDevice:(int)cameraDevice;	// 0x31e4fde9
+ (BOOL)isSourceTypeAvailable:(int)available;	// 0x31e4fb3d
- (id)init;	// 0x31e4fe09
- (id)initWithCoder:(id)coder;	// 0x31e4feed
- (CGSize)_adjustedContentSizeForPopover:(CGSize)popover;	// 0x31e52425
- (BOOL)_allowsImageEditing;	// 0x31e50ac5
- (BOOL)_allowsMultipleSelection;	// 0x31e508ad
- (void)_autoDismiss;	// 0x31e52431
- (id)_cameraViewController;	// 0x31e50f41
- (id)_createInitialController;	// 0x31e51fa5
- (BOOL)_didRevertStatusBar;	// 0x31e51d7d
- (void)_imagePickerDidCancel;	// 0x31e5245d
- (void)_imagePickerDidCompleteWithInfo:(id)_imagePicker;	// 0x31e524c5
- (void)_imagePickerDidCompleteWithInfoArray:(id)_imagePicker;	// 0x31e5267d
- (unsigned)_imagePickerSavingOptions;	// 0x31e50ecd
- (id)_initWithSourceImageData:(id)sourceImageData cropRect:(CGRect)rect;	// 0x31e50099
- (void)_initializeProperties;	// 0x31e50b59
- (BOOL)_isCameraCaptureModeValid:(int)valid;	// 0x31e51705
- (BOOL)_isSupportedInterfaceOrientation:(int)orientation;	// 0x31e51d91
- (void)_populateArchivedChildViewControllers:(id)controllers;	// 0x31e50261
- (id)_properties;	// 0x31e50d49
- (void)_removeAllChildren;	// 0x31e51e9d
- (void)_setAllowsImageEditing:(BOOL)editing;	// 0x31e50a61
- (void)_setAllowsMultipleSelection:(BOOL)selection;	// 0x31e508dd
- (void)_setImagePickerSavingOptions:(unsigned)options;	// 0x31e50ead
- (void)_setProperties:(id)properties;	// 0x31e50af5
- (void)_setValue:(id)value forProperty:(id)property;	// 0x31e50d99
- (void)_setupControllersForCurrentMediaTypes;	// 0x31e52319
- (void)_setupControllersForCurrentSourceType;	// 0x31e52291
- (BOOL)_sourceTypeIsCamera;	// 0x31e50ee1
- (void)_updateCameraCaptureMode;	// 0x31e5036d
- (id)_valueForProperty:(id)property;	// 0x31e50e69
// declared property getter: - (BOOL)allowsEditing;	// 0x31e50949
// declared property getter: - (BOOL)allowsImageEditing;	// 0x31e50921
// declared property getter: - (int)cameraCaptureMode;	// 0x31e51681
// declared property getter: - (int)cameraDevice;	// 0x31e5155d
// declared property getter: - (int)cameraFlashMode;	// 0x31e5188d
// declared property getter: - (id)cameraOverlayView;	// 0x31e510c9
// declared property getter: - (CGAffineTransform)cameraViewTransform;	// 0x31e51265
- (void)dealloc;	// 0x31e501e9
- (void)encodeWithCoder:(id)coder;	// 0x31e502a5
// declared property getter: - (id)mediaTypes;	// 0x31e50875
// declared property setter: - (void)setAllowsEditing:(BOOL)editing;	// 0x31e50961
// declared property setter: - (void)setAllowsImageEditing:(BOOL)editing;	// 0x31e50939
// declared property setter: - (void)setCameraCaptureMode:(int)mode;	// 0x31e5174d
// declared property setter: - (void)setCameraDevice:(int)device;	// 0x31e515e1
// declared property setter: - (void)setCameraFlashMode:(int)mode;	// 0x31e51911
// declared property setter: - (void)setCameraOverlayView:(id)view;	// 0x31e511f5
// declared property setter: - (void)setCameraViewTransform:(CGAffineTransform)transform;	// 0x31e513ad
// declared property setter: - (void)setMediaTypes:(id)types;	// 0x31e5065d
// declared property setter: - (void)setShowsCameraControls:(BOOL)controls;	// 0x31e51029
// declared property setter: - (void)setSourceType:(int)type;	// 0x31e50401
// declared property setter: - (void)setVideoMaximumDuration:(double)duration;	// 0x31e509a5
// declared property setter: - (void)setVideoQuality:(int)quality;	// 0x31e50a1d
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x31e51ded
// declared property getter: - (BOOL)showsCameraControls;	// 0x31e50fa5
// declared property getter: - (int)sourceType;	// 0x31e5064d
- (BOOL)startVideoCapture;	// 0x31e514cd
- (void)stopVideoCapture;	// 0x31e51515
- (unsigned)supportedInterfaceOrientations;	// 0x31e51e49
- (void)takePicture;	// 0x31e51485
// declared property getter: - (double)videoMaximumDuration;	// 0x31e50971
// declared property getter: - (int)videoQuality;	// 0x31e509e9
- (void)viewDidDisappear:(BOOL)view;	// 0x31e51ce9
- (void)viewWillAppear:(BOOL)view;	// 0x31e51a2d
- (void)viewWillDisappear:(BOOL)view;	// 0x31e51b39
- (void)viewWillUnload;	// 0x31e519b1
@end
