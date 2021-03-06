/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RUIYTListDataSourceAspectDelegate.h"
#import "BRViewController.h"
#import "RUIYTDocumentLoaderDelegate.h"

@class RUIYTVideosDocumentSpec, RUIYTAssetsInfo, RUIYTListDataSourceAspect, RUIYTDocumentLoader, BRMediaMenuView;

__attribute__((visibility("hidden")))
@interface RUIYTVideosSubMenuController : BRViewController <RUIYTDocumentLoaderDelegate, RUIYTListDataSourceAspectDelegate> {
	BRMediaMenuView *_mediaMenuView;	// 104 = 0x68
	RUIYTDocumentLoader *_documentLoader;	// 108 = 0x6c
	RUIYTVideosDocumentSpec *_spec;	// 112 = 0x70
	RUIYTAssetsInfo *_initialAssetsInfo;	// 116 = 0x74
	BOOL _playWhenPushed;	// 120 = 0x78
	RUIYTListDataSourceAspect *_listDataSourceAspect;	// 124 = 0x7c
}
@property(assign) BOOL playWhenPushed;	// G=0x2825bd; S=0x2825d5; @synthesize=_playWhenPushed
+ (id)controllerWithSpec:(id)spec;	// 0x281a59
+ (id)controllerWithSpec:(id)spec assetsInfo:(id)info;	// 0x281aa1
- (id)initWithSpec:(id)spec assetsInfo:(id)info;	// 0x281b01
- (void).cxx_destruct;	// 0x2825ed
- (void)_invalidateFavoritesNotification:(id)notification;	// 0x282755
- (id)_sectionsWithAssetsInfo:(id)assetsInfo;	// 0x28265d
- (void)dealloc;	// 0x281dc5
- (void)documentLoader:(id)loader didLoadDocument:(id)document;	// 0x2822b1
- (id)identifier;	// 0x281e65
- (BOOL)listDataSourceAspect:(id)aspect loadMoreItemsForSection:(unsigned)section count:(unsigned)count;	// 0x282401
// declared property getter: - (BOOL)playWhenPushed;	// 0x2825bd
// declared property setter: - (void)setPlayWhenPushed:(BOOL)pushed;	// 0x2825d5
- (void)wasPushed;	// 0x281e85
@end

