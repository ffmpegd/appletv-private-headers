/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSelectionHandler.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVCatalogHandler : XXUnknownSuperclass <BRSelectionHandler> {
	NSDictionary *_catalogItem;	// 4 = 0x4
}
@property(copy, nonatomic) NSDictionary *catalogItem;	// G=0x1f2519; S=0x1f252d; @synthesize=_catalogItem
- (void)_confirmAction:(int)action withObject:(id)object;	// 0x1f2a51
- (void)_confirmActionResponse:(id)response;	// 0x1f3645
- (BOOL)_handleFavoriteListItemSelection:(id)selection listItem:(id)item;	// 0x1f27d5
- (void)_parentalControlPasscodeSuccessful:(id)successful;	// 0x1f36cd
- (void)_playOrPauseAsset:(id)asset;	// 0x1f253d
- (void)_playOrPauseAsset:(id)asset withOptions:(id)options;	// 0x1f2551
- (void)_podcastItemSelected:(id)selected;	// 0x1f272d
- (void)_presentAcquisitionController;	// 0x1f379d
- (void)_previewItemSelected:(id)selected;	// 0x1f2615
- (void)_transactionConfirmedForItem:(id)item;	// 0x1f333d
- (void)_warningForAction:(int)action withObject:(id)object;	// 0x1f28e1
- (void)_warningForActionResponse:(id)actionResponse;	// 0x1f2975
// declared property getter: - (id)catalogItem;	// 0x1f2519
- (void)dealloc;	// 0x1f1d1d
- (BOOL)handlePlayForControl:(id)control;	// 0x1f2185
- (BOOL)handleSelectionForControl:(id)control;	// 0x1f1d99
- (BOOL)handleStoreOfferItemSelection:(id)selection;	// 0x1f2379
// declared property setter: - (void)setCatalogItem:(id)item;	// 0x1f252d
@end

