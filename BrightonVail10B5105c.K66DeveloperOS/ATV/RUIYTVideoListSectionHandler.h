/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RUIYTListSectionHandling.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "RUIYTVideoPlaybackAspectDelegate.h"

@class NSDictionary, RUIYTListDataSourceAspect, RUIYTVideoPlaybackAspect;

__attribute__((visibility("hidden")))
@interface RUIYTVideoListSectionHandler : XXUnknownSuperclass <RUIYTListSectionHandling, RUIYTVideoPlaybackAspectDelegate> {
	RUIYTVideoPlaybackAspect *_videoPlaybackAspect;	// 4 = 0x4
	RUIYTListDataSourceAspect *_listDataSourceAspect;	// 8 = 0x8
	NSDictionary *_likesBadgeTextAttributes;	// 12 = 0xc
}
@property(retain, nonatomic) NSDictionary *likesBadgeTextAttributes;	// G=0x267601; S=0x267671; @synthesize=_likesBadgeTextAttributes
@property(readonly, assign, nonatomic) RUIYTListDataSourceAspect *listDataSourceAspect;	// G=0x267651; @synthesize=_listDataSourceAspect
- (id)initWithListDataSourceAspect:(id)listDataSourceAspect videoPlaybackAspect:(id)aspect;	// 0x266711
- (void).cxx_destruct;	// 0x267699
- (BOOL)isItemPlayableAtIndex:(id)index;	// 0x266de1
- (id)itemForIndex:(id)index;	// 0x2667b9
- (float)itemHeightForIndex:(id)index;	// 0x266d99
- (id)itemIDForIndex:(id)index;	// 0x266c6d
- (BOOL)itemSelectedAtIndex:(id)index action:(int)action defer:(BOOL *)defer;	// 0x266f61
// declared property getter: - (id)likesBadgeTextAttributes;	// 0x267601
// declared property getter: - (id)listDataSourceAspect;	// 0x267651
- (BOOL)loadMoreAssetsForVideoPlaybackAspect:(id)videoPlaybackAspect;	// 0x26734d
- (void)moreAssetsAvailable:(id)available forSection:(unsigned)section;	// 0x26714d
- (BOOL)moreAssetsFailed:(id)failed forSection:(unsigned)section;	// 0x26729d
- (void)playbackWillEndForVideoPlaybackAspect:(id)playback;	// 0x267441
- (id)previewForIndex:(id)index defer:(BOOL *)defer;	// 0x266de5
// declared property setter: - (void)setLikesBadgeTextAttributes:(id)attributes;	// 0x267671
@end
