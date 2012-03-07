/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedController.h"

@class BRMediaMenuView, BRControl, NSIndexPath, ATVFeedDocument, NSString, NSMutableDictionary, ATVURLDocument;

__attribute__((visibility("hidden")))
@interface ATVGenericCollectionController : ATVFeedController {
@private
	bool _forcePreviewRefresh;	// 112 = 0x70
	ATVURLDocument *_documentForPreviewChange;	// 116 = 0x74
	NSString *_previousLoadPreviewURL;	// 120 = 0x78
	NSMutableDictionary *_headerCache;	// 124 = 0x7c
	BRMediaMenuView *_mediaMenuView;	// 128 = 0x80
	BRControl *_sharedPreviewControl;	// 132 = 0x84
	NSIndexPath *_lastPreviewIndexPath;	// 136 = 0x88
	ATVFeedDocument *_lastPreviewFeedDocument;	// 140 = 0x8c
}
@property(retain, nonatomic) ATVFeedDocument *lastPreviewFeedDocument;	// G=0x34168bb1; S=0x34168bc1; @synthesize=_lastPreviewFeedDocument
@property(retain, nonatomic) NSIndexPath *lastPreviewIndexPath;	// G=0x34168b7d; S=0x34168b8d; @synthesize=_lastPreviewIndexPath
@property(readonly, assign) BRMediaMenuView *mediaMenuView;	// G=0x34168b35; @synthesize=_mediaMenuView
@property(retain) BRControl *sharedPreviewControl;	// G=0x34168b45; S=0x34168b59; @synthesize=_sharedPreviewControl
- (id)initWithDictionary:(id)dictionary;	// 0x34167a21
- (id)initWithFeedElement:(id)feedElement;	// 0x3416790d
- (BOOL)_canHandleUpdateWithFeedElement:(id)feedElement loadType:(int)type;	// 0x3416803d
- (BOOL)_canHandleUpdateWithPropertyList:(id)propertyList loadType:(int)type;	// 0x34167f79
- (void)_cancelAllDocumentRequests;	// 0x34169b51
- (void)_cancelDocumentRequest:(id *)request;	// 0x34169ad1
- (void)_cancelPreviousLoadPreviewPerformSelector;	// 0x34169b71
- (id)_createMediaMenuView;	// 0x34169be5
- (id)_createView;	// 0x34169c6d
- (id)_elementAtIndexPath:(id)indexPath;	// 0x34169521
- (void)_handleUpdateWithFeedElement:(id)feedElement loadType:(int)type;	// 0x34168089
- (void)_handleUpdateWithPropertyList:(id)propertyList loadType:(int)type;	// 0x34167fe9
- (id)_initialSelection;	// 0x341695b1
- (id)_itemAtIndexPath:(id)indexPath;	// 0x34169461
- (void)_loadPreviewForURL:(id)url;	// 0x34168e1d
- (void)_previewDocumentReadyNotification:(id)notification;	// 0x34168fad
- (void)_setLastPreviewIndexPath:(id)path;	// 0x34169bd5
- (void)_updateInternalWithLoadType:(int)loadType withPageID:(id)pageID;	// 0x34167d91
- (void)_updatePreviewWithElement:(id)element;	// 0x34168d21
- (void)_updatePreviewWithPropertyList:(id)propertyList;	// 0x34168be5
- (void)dealloc;	// 0x34167b9d
// declared property getter: - (id)lastPreviewFeedDocument;	// 0x34168bb1
// declared property getter: - (id)lastPreviewIndexPath;	// 0x34168b7d
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x341686f9
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x341686e5
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x341686f5
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x34168641
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0x34168561
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0x341684e9
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x3416842d
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x3416831d
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x3416816d
// declared property getter: - (id)mediaMenuView;	// 0x34168b35
- (long)numberOfSectionsInList:(id)list;	// 0x341680cd
// declared property setter: - (void)setLastPreviewFeedDocument:(id)document;	// 0x34168bc1
// declared property setter: - (void)setLastPreviewIndexPath:(id)path;	// 0x34168b8d
// declared property setter: - (void)setSharedPreviewControl:(id)control;	// 0x34168b59
// declared property getter: - (id)sharedPreviewControl;	// 0x34168b45
- (void)wasPushed;	// 0x34167ccd
@end

