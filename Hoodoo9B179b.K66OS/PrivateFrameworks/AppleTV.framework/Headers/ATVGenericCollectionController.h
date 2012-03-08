/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedController.h"

@class ATVFeedDocument, NSString, NSMutableDictionary, ATVURLDocument, NSIndexPath, BRControl, BRMediaMenuView;

__attribute__((visibility("hidden")))
@interface ATVGenericCollectionController : ATVFeedController {
@private
	bool _forcePreviewRefresh;	// 124 = 0x7c
	ATVURLDocument *_documentForPreviewChange;	// 128 = 0x80
	NSString *_previousLoadPreviewURL;	// 132 = 0x84
	NSMutableDictionary *_headerCache;	// 136 = 0x88
	BRMediaMenuView *_mediaMenuView;	// 140 = 0x8c
	BRControl *_sharedPreviewControl;	// 144 = 0x90
	NSIndexPath *_lastPreviewIndexPath;	// 148 = 0x94
	ATVFeedDocument *_lastPreviewFeedDocument;	// 152 = 0x98
}
@property(retain, nonatomic) ATVFeedDocument *lastPreviewFeedDocument;	// G=0x30212465; S=0x30212475; @synthesize=_lastPreviewFeedDocument
@property(retain, nonatomic) NSIndexPath *lastPreviewIndexPath;	// G=0x30212431; S=0x30212441; @synthesize=_lastPreviewIndexPath
@property(readonly, assign) BRMediaMenuView *mediaMenuView;	// G=0x302123e9; @synthesize=_mediaMenuView
@property(retain) BRControl *sharedPreviewControl;	// G=0x302123f9; S=0x3021240d; @synthesize=_sharedPreviewControl
- (id)initWithDictionary:(id)dictionary;	// 0x30210f75
- (id)initWithFeedElement:(id)feedElement;	// 0x30210dbd
- (BOOL)_canHandleUpdateWithFeedElement:(id)feedElement loadType:(int)type;	// 0x30211639
- (BOOL)_canHandleUpdateWithPropertyList:(id)propertyList loadType:(int)type;	// 0x3021151d
- (void)_cancelAllDocumentRequests;	// 0x3021380d
- (void)_cancelDocumentRequest:(id *)request;	// 0x3021378d
- (void)_cancelPreviousLoadPreviewPerformSelector;	// 0x3021382d
- (id)_createMediaMenuView;	// 0x302138a1
- (id)_createView;	// 0x30213929
- (id)_elementAtIndexPath:(id)indexPath;	// 0x30212ebd
- (void)_handleUpdateWithFeedElement:(id)feedElement loadType:(int)type;	// 0x302116d1
- (void)_handleUpdateWithPropertyList:(id)propertyList loadType:(int)type;	// 0x302115e5
- (id)_initialSelection;	// 0x30212f4d
- (id)_itemAtIndexPath:(id)indexPath;	// 0x30212dfd
- (void)_loadPreviewForURL:(id)url;	// 0x302126d5
- (void)_previewDocumentReadyNotification:(id)notification;	// 0x30212891
- (void)_setLastPreviewIndexPath:(id)path;	// 0x30213891
- (void)_updateInternalWithLoadType:(int)loadType withPageID:(id)pageID;	// 0x30211335
- (void)_updatePreviewWithElement:(id)element;	// 0x302125d9
- (void)_updatePreviewWithPropertyList:(id)propertyList;	// 0x30212499
- (void)dealloc;	// 0x30211141
// declared property getter: - (id)lastPreviewFeedDocument;	// 0x30212465
// declared property getter: - (id)lastPreviewIndexPath;	// 0x30212431
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x30211fa9
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x30211f95
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x30211fa5
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x30211ef1
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0x30211dd1
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0x30211ce1
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x30211b35
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x30211a09
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x302117b5
- (void)listWasActivated:(id)activated;	// 0x30211eb1
// declared property getter: - (id)mediaMenuView;	// 0x302123e9
- (long)numberOfSectionsInList:(id)list;	// 0x30211715
// declared property setter: - (void)setLastPreviewFeedDocument:(id)document;	// 0x30212475
// declared property setter: - (void)setLastPreviewIndexPath:(id)path;	// 0x30212441
// declared property setter: - (void)setSharedPreviewControl:(id)control;	// 0x3021240d
// declared property getter: - (id)sharedPreviewControl;	// 0x302123f9
- (void)wasPushed;	// 0x30211271
@end
