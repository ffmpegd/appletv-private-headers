/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"
#import "BRContainerViewCell.h"

@class CATransition, BRImage, BRDotArrayControl, BRImageControl;

__attribute__((visibility("hidden")))
@interface BRPagedView : BRControl <BRContainerViewCell> {
	id _delegate;	// 84 = 0x54
	id _dataSource;	// 88 = 0x58
	unsigned _currentPage;	// 92 = 0x5c
	BRControl *_contentPanel;	// 96 = 0x60
	BRControl *_content;	// 100 = 0x64
	BRImage *_arrowImage;	// 104 = 0x68
	BRImageControl *_rightArrow;	// 108 = 0x6c
	BRImageControl *_leftArrow;	// 112 = 0x70
	BRDotArrayControl *_pageDots;	// 116 = 0x74
	CATransition *_prevPageTransition;	// 120 = 0x78
	CATransition *_nextPageTransition;	// 124 = 0x7c
	BOOL _showsArrows;	// 128 = 0x80
	BOOL _showsDots;	// 129 = 0x81
	id _loadCompletionBlock;	// 132 = 0x84
	BOOL _delegateRetained;	// 136 = 0x88
	BOOL _dataSourceRetained;	// 137 = 0x89
}
@property(readonly, assign) unsigned currentPage;	// G=0x3456d9; @synthesize=_currentPage
@property(assign) id dataSource;	// G=0x345665; S=0x345679; @synthesize=_dataSource
@property(assign) id delegate;	// G=0x344c09; S=0x344c19; 
@property(retain) CATransition *nextPageTransition;	// G=0x345691; S=0x3456a5; @synthesize=_nextPageTransition
@property(retain) CATransition *prevPageTransition;	// G=0x3456b5; S=0x3456c9; @synthesize=_prevPageTransition
@property(assign) BOOL showsArrows;	// G=0x34496d; S=0x34497d; 
@property(assign) BOOL showsDots;	// G=0x3449e9; S=0x3449f9; 
- (id)init;	// 0x3443c1
- (BOOL)brEventAction:(id)action;	// 0x344f89
- (void)cancelContainerViewLoad;	// 0x3451bd
- (void)controlWasDeactivated;	// 0x3448ad
// declared property getter: - (unsigned)currentPage;	// 0x3456d9
// declared property getter: - (id)dataSource;	// 0x345665
- (void)dealloc;	// 0x3447d1
// declared property getter: - (id)delegate;	// 0x344c09
- (void)layoutSubcontrols;	// 0x345395
- (void)loadWithCompletionBlock:(id)completionBlock;	// 0x3450a5
- (BOOL)nextPage;	// 0x344d99
// declared property getter: - (id)nextPageTransition;	// 0x345691
- (BOOL)prevPage;	// 0x344ea5
// declared property getter: - (id)prevPageTransition;	// 0x3456b5
- (void)reloadData;	// 0x344a31
- (void)removeFromParent;	// 0x344d01
// declared property setter: - (void)setDataSource:(id)source;	// 0x345679
- (void)setDatasource:(id)datasource;	// 0x344b5d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x344c19
- (void)setIgnoreLoadAndDisplayOnDemand;	// 0x34527d
- (void)setIgnoreLoadAndDisplayOnDemandDisableAnimations:(BOOL)animations;	// 0x3452cd
// declared property setter: - (void)setNextPageTransition:(id)transition;	// 0x3456a5
// declared property setter: - (void)setPrevPageTransition:(id)transition;	// 0x3456c9
- (void)setReadyToDisplay;	// 0x34522d
// declared property setter: - (void)setShowsArrows:(BOOL)arrows;	// 0x34497d
// declared property setter: - (void)setShowsDots:(BOOL)dots;	// 0x3449f9
// declared property getter: - (BOOL)showsArrows;	// 0x34496d
// declared property getter: - (BOOL)showsDots;	// 0x3449e9
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x345321
- (void)windowMaxBoundsChanged;	// 0x34491d
@end

