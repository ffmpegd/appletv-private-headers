/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRController.h"

@class NSString, NSMutableArray;
@protocol BRFullScreenPhotoControllerDelegate, BRPhotoProviderForCollection;

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
@property(readonly, assign) long currentIndex;	// G=0x2a9375; converted property
@property(assign) BOOL imagePrefetchDisabled;	// G=0x2a93fd; S=0x2a93e1; converted property
@property(assign) BOOL isNetworkDependent;	// G=0x2a93d1; S=0x2a93c1; converted property
@property(readonly, assign, nonatomic) id<BRPhotoProviderForCollection> provider;	// G=0x2a9805; @synthesize=_provider
+ (id)fullScreenPhotoControllerForProvider:(id)provider startIndex:(long)index;	// 0x2a8f19
- (id)initWithProvider:(id)provider startIndex:(long)index;	// 0x2a8f69
- (void)_handleSelection;	// 0x2a9a5d
- (void)_nextSlide;	// 0x2a9945
- (void)_nextSlideWithTransition;	// 0x2a99d5
- (void)_playerStateChanged:(id)changed;	// 0x2aa2e5
- (void)_prefetchImageWritten:(id)written;	// 0x2aa37d
- (void)_prefetchNextImage;	// 0x2aa065
- (void)_previousSlide;	// 0x2a998d
- (void)_previousSlideWithTransition;	// 0x2a9a19
- (void)_setImageLayerTargetBounds;	// 0x2a9815
- (long)_switchToImageControlForIndex:(long)index usingSwipeTransition:(BOOL)transition;	// 0x2a9c8d
- (id)accessibilityLabel;	// 0x2a9081
- (BOOL)brEventAction:(id)action;	// 0x2a940d
- (void)controlWasActivated;	// 0x2a9255
- (void)controlWasDeactivated;	// 0x2a92cd
// converted property getter: - (long)currentIndex;	// 0x2a9375
- (void)dealloc;	// 0x2a919d
// converted property getter: - (BOOL)imagePrefetchDisabled;	// 0x2a93fd
- (BOOL)isAccessibilityElement;	// 0x2a907d
// converted property getter: - (BOOL)isNetworkDependent;	// 0x2a93d1
- (BOOL)isValidAfterDataUpdate;	// 0x2a9329
- (void)layoutSubcontrols;	// 0x2a96bd
// declared property getter: - (id)provider;	// 0x2a9805
- (void)reload;	// 0x2a97c5
- (void)setControllerDelegate:(id)delegate;	// 0x2a9385
// converted property setter: - (void)setImagePrefetchDisabled:(BOOL)disabled;	// 0x2a93e1
// converted property setter: - (void)setIsNetworkDependent:(BOOL)dependent;	// 0x2a93c1
@end
