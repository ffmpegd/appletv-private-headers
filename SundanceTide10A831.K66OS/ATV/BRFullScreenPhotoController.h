/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRController.h"

@class NSMutableArray, NSString;
@protocol BRPhotoProviderForCollection, BRFullScreenPhotoControllerDelegate;

__attribute__((visibility("hidden")))
@interface BRFullScreenPhotoController : BRController {
	long _startIndex;	// 100 = 0x64
	long _currentIndex;	// 104 = 0x68
	id<BRPhotoProviderForCollection> _provider;	// 108 = 0x6c
	id<BRFullScreenPhotoControllerDelegate> _delegate;	// 112 = 0x70
	BOOL _isNetworkDependent;	// 116 = 0x74
	NSMutableArray *_prefetchImageIDs;	// 120 = 0x78
	NSString *_lastPrefetchAssetID;	// 124 = 0x7c
	BOOL _initialLayoutCompleted;	// 128 = 0x80
	int _startTouchXPosition;	// 132 = 0x84
	float _curTouchOffset;	// 136 = 0x88
	BOOL _imagePrefetchDisabled;	// 140 = 0x8c
	long _numPrefetchInProgress;	// 144 = 0x90
}
@property(readonly, assign) long currentIndex;	// G=0x29da61; converted property
@property(assign) BOOL imagePrefetchDisabled;	// G=0x29dae9; S=0x29dacd; converted property
@property(assign) BOOL isNetworkDependent;	// G=0x29dabd; S=0x29daad; converted property
@property(readonly, assign, nonatomic) id<BRPhotoProviderForCollection> provider;	// G=0x29def1; @synthesize=_provider
+ (id)fullScreenPhotoControllerForProvider:(id)provider startIndex:(long)index;	// 0x29d605
- (id)initWithProvider:(id)provider startIndex:(long)index;	// 0x29d655
- (void)_handleSelection;	// 0x29e149
- (void)_nextSlide;	// 0x29e031
- (void)_nextSlideWithTransition;	// 0x29e0c1
- (void)_playerStateChanged:(id)changed;	// 0x29e9d1
- (void)_prefetchImageWritten:(id)written;	// 0x29ea69
- (void)_prefetchNextImage;	// 0x29e751
- (void)_previousSlide;	// 0x29e079
- (void)_previousSlideWithTransition;	// 0x29e105
- (void)_setImageLayerTargetBounds;	// 0x29df01
- (long)_switchToImageControlForIndex:(long)index usingSwipeTransition:(BOOL)transition;	// 0x29e379
- (id)accessibilityLabel;	// 0x29d76d
- (BOOL)brEventAction:(id)action;	// 0x29daf9
- (void)controlWasActivated;	// 0x29d941
- (void)controlWasDeactivated;	// 0x29d9b9
// converted property getter: - (long)currentIndex;	// 0x29da61
- (void)dealloc;	// 0x29d889
// converted property getter: - (BOOL)imagePrefetchDisabled;	// 0x29dae9
- (BOOL)isAccessibilityElement;	// 0x29d769
// converted property getter: - (BOOL)isNetworkDependent;	// 0x29dabd
- (BOOL)isValidAfterDataUpdate;	// 0x29da15
- (void)layoutSubcontrols;	// 0x29dda9
// declared property getter: - (id)provider;	// 0x29def1
- (void)reload;	// 0x29deb1
- (void)setControllerDelegate:(id)delegate;	// 0x29da71
// converted property setter: - (void)setImagePrefetchDisabled:(BOOL)disabled;	// 0x29dacd
// converted property setter: - (void)setIsNetworkDependent:(BOOL)dependent;	// 0x29daad
@end
