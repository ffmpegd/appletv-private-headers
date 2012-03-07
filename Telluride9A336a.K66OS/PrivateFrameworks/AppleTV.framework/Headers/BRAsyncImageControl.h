/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRImage, BRAsyncTask, NSString, BRWaitSpinnerControl, BRImageControl;
@protocol BRImageProxy;

@interface BRAsyncImageControl : BRControl {
@private
	id<BRImageProxy> _imageProxy;	// 48 = 0x30
	BRWaitSpinnerControl *_spinner;	// 52 = 0x34
	BRImage *_image;	// 56 = 0x38
	BRImage *_defaultImage;	// 60 = 0x3c
	BRAsyncTask *_imageProcessingTask;	// 64 = 0x40
	NSString *_imageID;	// 68 = 0x44
	BOOL _cropAndFill;	// 72 = 0x48
	BOOL _useLoadingSpinner;	// 73 = 0x49
	BOOL _loadFailure;	// 74 = 0x4a
	BOOL _imageLoadRequested;	// 75 = 0x4b
	BOOL _useLoadFailureImage;	// 76 = 0x4c
	BOOL _loadOnActivation;	// 77 = 0x4d
	BOOL _okToLoadImage;	// 78 = 0x4e
	BOOL _useFadeInAnimation;	// 79 = 0x4f
	int _requestedSize;	// 80 = 0x50
	BRImageControl *_badgeImageControl;	// 84 = 0x54
	float _badgeUnfocusedOpacity;	// 88 = 0x58
	float _badgeFocusedOpacity;	// 92 = 0x5c
	BOOL _upscalesImage;	// 96 = 0x60
}
@property(retain) BRImage *image;	// G=0x33a74ef5; S=0x33a74ee5; converted property
@property(retain) id imageProxy;	// G=0x33a74ead; S=0x33a74e6d; converted property
@property(assign, nonatomic) BOOL upscalesImage;	// G=0x33a759ad; S=0x33a759bd; @synthesize=_upscalesImage
+ (id)imageControlWithImage:(id)image;	// 0x33a74cd9
+ (id)imageControlWithImageProxy:(id)imageProxy;	// 0x33a74c29
- (id)initWithImage:(id)image;	// 0x33a74d31
- (id)initWithImageProxy:(id)imageProxy;	// 0x33a74c71
- (void)_checkImageSize:(id)size;	// 0x33a75d81
- (void)_cropImage:(id)image;	// 0x33a762fd
- (void)_enableFadeInAnimation;	// 0x33a759cd
- (void)_enableSpinner;	// 0x33a75a95
- (void)_fetchCachedThumbnailImage;	// 0x33a75ad1
- (void)_fetchPreferredSizeImage;	// 0x33a75c25
- (id)_getImageFromImageManagerNamed:(id)imageManagerNamed withSize:(CGSize)size;	// 0x33a76575
- (id)_imageOfSize:(int)size;	// 0x33a76171
- (void)_imageTaskComplete:(id)complete;	// 0x33a764c9
- (void)_imageUnavailable:(id)unavailable;	// 0x33a766ad
- (void)_imageUpdated:(id)updated;	// 0x33a765dd
- (void)_scaleImage:(id)image;	// 0x33a763e9
- (void)_setImage:(id)image;	// 0x33a76789
- (void)_setImageID:(id)anId;	// 0x33a7685d
- (void)_startImageProcessingTaskForImage:(id)image;	// 0x33a75ef1
- (void)_updateContents;	// 0x33a7689d
- (id)accessibilityLabel;	// 0x33a756a9
- (id)accessibilityTraits;	// 0x33a75679
- (void)cancelImageLoading;	// 0x33a74f35
- (void)controlWasActivated;	// 0x33a74ff1
- (void)controlWasDeactivated;	// 0x33a750d1
- (void)controlWasFocused;	// 0x33a75169
- (void)controlWasUnfocused;	// 0x33a751c5
- (void)dealloc;	// 0x33a74d8d
// converted property getter: - (id)image;	// 0x33a74ef5
// converted property getter: - (id)imageProxy;	// 0x33a74ead
- (BOOL)isAccessibilityElement;	// 0x33a756a5
- (void)layoutSubcontrols;	// 0x33a753f5
- (void)loadImage;	// 0x33a74f15
- (void)setBadgeImage:(id)image badgeUnfocusedOpacity:(float)opacity badgeFocusedOpacity:(float)opacity3;	// 0x33a752b5
- (void)setCropAndFill:(BOOL)fill;	// 0x33a75285
- (void)setDefaultImage:(id)image;	// 0x33a75221
// converted property setter: - (void)setImage:(id)image;	// 0x33a74ee5
// converted property setter: - (void)setImageProxy:(id)proxy;	// 0x33a74e6d
- (void)setLoadImageOnActivation:(BOOL)activation;	// 0x33a74f05
// declared property setter: - (void)setUpscalesImage:(BOOL)image;	// 0x33a759bd
- (void)setUseFadeInAnimation:(BOOL)animation;	// 0x33a752a5
- (void)setUseLoadFailureImage:(BOOL)image;	// 0x33a75295
- (void)setUseLoadingSpinner:(BOOL)spinner;	// 0x33a75275
// declared property getter: - (BOOL)upscalesImage;	// 0x33a759ad
@end

