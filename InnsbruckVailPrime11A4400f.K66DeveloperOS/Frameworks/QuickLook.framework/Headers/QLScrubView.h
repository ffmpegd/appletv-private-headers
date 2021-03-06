/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "UIGestureRecognizerDelegate.h"
#import "QuickLook-Structs.h"
#import <UIKit/UIView.h>

@class NSMutableArray, QLPageNumberView, NSOperationQueue, QLThumbnailView, NSMutableSet, NSMutableDictionary;
@protocol QLScrubViewDataSource;

@interface QLScrubView : UIView <UIGestureRecognizerDelegate> {
	id<QLScrubViewDataSource> _dataSource;	// 96 = 0x60
	id _delegate;	// 100 = 0x64
	BOOL _runOnMainThread;	// 104 = 0x68
	BOOL _needsThumbLayout;	// 105 = 0x69
	float _thumbOrigin;	// 108 = 0x6c
	float _thumbEnd;	// 112 = 0x70
	float _thumbHeight;	// 116 = 0x74
	int _pageCount;	// 120 = 0x78
	int _selectedPage;	// 124 = 0x7c
	NSOperationQueue *_queue;	// 128 = 0x80
	NSMutableSet *_operations;	// 132 = 0x84
	NSMutableDictionary *_thumbViews;	// 136 = 0x88
	NSMutableArray *_visibleThumbIndexes;	// 140 = 0x8c
	QLThumbnailView *_selectedThumbnailView;	// 144 = 0x90
	QLPageNumberView *_pageNumberLabel;	// 148 = 0x94
}
@property(assign) id<QLScrubViewDataSource> dataSource;	// G=0x2f316ba5; S=0x2f316bb9; @synthesize=_dataSource
@property(assign) id delegate;	// G=0x2f316bd1; S=0x2f316be5; @synthesize=_delegate
@property(assign) BOOL runOnMainThread;	// G=0x2f315251; S=0x2f31517d; 
+ (float)defaultWidth;	// 0x2f31582d
- (id)initWithFrame:(CGRect)frame;	// 0x2f314cd1
- (void)_cancelAllOperations;	// 0x2f314fa9
- (void)_handleSwipAtLocation:(CGPoint)location;	// 0x2f315539
- (void)_hidePageLabel;	// 0x2f315c39
- (void)_notifyPageChanged;	// 0x2f315499
- (void)_notifyScrubingEnded;	// 0x2f3154f1
- (void)_notifyScrubingStarted;	// 0x2f315451
- (void)_removeThumbviews;	// 0x2f315261
- (void)_showPageLabel;	// 0x2f315a09
- (CGRect)_thumbnailFrameForPageAtIndex:(int)index;	// 0x2f315885
- (void)_updatePageLabelPosition;	// 0x2f315a8d
- (void)_updateSelectedThumbnailView;	// 0x2f316441
// declared property getter: - (id)dataSource;	// 0x2f316ba5
- (void)dealloc;	// 0x2f3150a5
// declared property getter: - (id)delegate;	// 0x2f316bd1
- (void)didReceiveMemoryWarning;	// 0x2f31516d
- (void)drawRect:(CGRect)rect;	// 0x2f3169a1
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;	// 0x2f315809
- (void)layoutSubviews;	// 0x2f315c59
- (void)longTapReceived:(id)received;	// 0x2f315779
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x2f3168c9
- (void)panReceived:(id)received;	// 0x2f31567d
- (void)reloadThumbnails;	// 0x2f31535d
// declared property getter: - (BOOL)runOnMainThread;	// 0x2f315251
- (void)selectPageNumber:(int)number;	// 0x2f315419
// declared property setter: - (void)setDataSource:(id)source;	// 0x2f316bb9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x2f316be5
- (void)setFrame:(CGRect)frame;	// 0x2f315835
// declared property setter: - (void)setRunOnMainThread:(BOOL)thread;	// 0x2f31517d
- (void)tapReceived:(id)received;	// 0x2f315731
@end

