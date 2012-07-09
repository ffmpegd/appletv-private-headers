/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVCarouselViewDataSource.h"
#import "ATVCupidPhotoBrowserTemplate.h"

@class BRPhotoBrowserBannerButton, ATVPhotoBatchBrowserView, NSArray;

__attribute__((visibility("hidden")))
@interface ATVCupidPhotoBatchBrowserController : ATVCupidPhotoBrowserTemplate <ATVCarouselViewDataSource> {
	ATVPhotoBatchBrowserView *_photoBatchBrowserView;	// 100 = 0x64
	BOOL _commentButtonUpdatePending;	// 104 = 0x68
	NSArray *_photoBatches;	// 108 = 0x6c
	BRPhotoBrowserBannerButton *_commentsButton;	// 112 = 0x70
	int _selectedBatchIndex;	// 116 = 0x74
}
@property(assign, nonatomic) BOOL commentButtonUpdatePending;	// G=0x38a5a1; S=0x38a5b1; @synthesize=_commentButtonUpdatePending
@property(retain, nonatomic) BRPhotoBrowserBannerButton *commentsButton;	// G=0x38a5e5; S=0x38a5f5; @synthesize=_commentsButton
@property(retain, nonatomic) ATVPhotoBatchBrowserView *photoBatchBrowserView;	// G=0x38a569; S=0x38a579; @synthesize=_photoBatchBrowserView
@property(copy, nonatomic) NSArray *photoBatches;	// G=0x38a5c1; S=0x38a5d5; @synthesize=_photoBatches
@property(assign, nonatomic) int selectedBatchIndex;	// G=0x38a61d; S=0x38a62d; @synthesize=_selectedBatchIndex
- (void).cxx_destruct;	// 0x38a63d
- (BOOL)_dataRequiresUpdateWithNotification:(id)notification;	// 0x3894a5
- (void)_focusPhotoAtIndex:(int)index;	// 0x3889ed
- (BOOL)_handleNewCommentsSelection:(id)selection;	// 0x389cb9
- (BOOL)_handlePhotoPlay:(id)play;	// 0x389f91
- (BOOL)_handlePhotoSelection:(id)selection;	// 0x389e19
- (void)_reloadView;	// 0x388c25
- (void)_updateNewCommentsButton;	// 0x38a04d
- (id)carouselView:(id)view itemAtIndex:(unsigned)index;	// 0x388239
// declared property getter: - (BOOL)commentButtonUpdatePending;	// 0x38a5a1
// declared property getter: - (id)commentsButton;	// 0x38a5e5
- (unsigned)numberOfItemsForCarouselView:(id)carouselView;	// 0x3881fd
// declared property getter: - (id)photoBatchBrowserView;	// 0x38a569
// declared property getter: - (id)photoBatches;	// 0x38a5c1
- (id)providersForContextMenu;	// 0x38883d
// declared property getter: - (int)selectedBatchIndex;	// 0x38a61d
// declared property setter: - (void)setCommentButtonUpdatePending:(BOOL)pending;	// 0x38a5b1
// declared property setter: - (void)setCommentsButton:(id)button;	// 0x38a5f5
// declared property setter: - (void)setPhotoBatchBrowserView:(id)view;	// 0x38a579
// declared property setter: - (void)setPhotoBatches:(id)batches;	// 0x38a5d5
// declared property setter: - (void)setSelectedBatchIndex:(int)index;	// 0x38a62d
- (void)wasExhumed;	// 0x3881a5
- (void)wasPushed;	// 0x387971
@end
