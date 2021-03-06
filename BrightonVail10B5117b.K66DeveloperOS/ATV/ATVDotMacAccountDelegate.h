/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVDotMacParserDelegate.h"

@class NSArray, NSDate, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVDotMacAccountDelegate : ATVDotMacParserDelegate {
	NSArray *_albumOrder;	// 24 = 0x18
	NSArray *_videoOrder;	// 28 = 0x1c
	NSArray *_slideshowOrder;	// 32 = 0x20
	NSDate *_modDate;	// 36 = 0x24
	NSDictionary *_startSelectors;	// 40 = 0x28
	NSDictionary *_endSelectors;	// 44 = 0x2c
}
@property(readonly, retain) NSDictionary *endSelectors;	// G=0x19cf55; converted property
@property(readonly, retain) NSDate *modDate;	// G=0x19dc21; converted property
@property(readonly, retain) NSDictionary *startSelectors;	// G=0x19cf45; converted property
- (id)init;	// 0x19c1d1
- (void)__atv_end_dotmac_iMovieUserOrder;	// 0x19c8b9
- (void)__atv_end_dotmac_keyImagePath;	// 0x19cc05
- (void)__atv_end_dotmac_posterPath;	// 0x19cd85
- (void)__atv_end_dotmac_redacted;	// 0x19cc85
- (void)__atv_end_dotmac_title;	// 0x19cafd
- (void)__atv_end_dotmac_type;	// 0x19cabd
- (void)__atv_end_dotmac_userHidden;	// 0x19cd05
- (void)__atv_end_dotmac_useritemguid;	// 0x19cd45
- (void)__atv_end_dotmac_userorder;	// 0x19c7b1
- (void)__atv_end_dotmac_videoDurationLrg;	// 0x19cf05
- (void)__atv_end_dotmac_videoDurationMed;	// 0x19ce85
- (void)__atv_end_dotmac_videoDurationSmall;	// 0x19ce05
- (void)__atv_end_dotmac_videoPathLrg;	// 0x19cec5
- (void)__atv_end_dotmac_videoPathMed;	// 0x19ce45
- (void)__atv_end_dotmac_videoPathSmall;	// 0x19cdc5
- (void)__atv_end_dotmac_viewIdentifier;	// 0x19ca7d
- (void)__atv_end_dotmac_webImagePath;	// 0x19cc45
- (void)__atv_end_iphoto_userHidden;	// 0x19ccc5
- (void)__atv_end_slideshowUserOrder;	// 0x19c9c1
- (void)__atv_end_title;	// 0x19ca3d
- (void)__atv_end_updated;	// 0x19cb8d
- (void)__atv_start_link:(id)link;	// 0x19cb3d
- (id)_publicMedia;	// 0x19ddbd
- (void)_updateEntriesWithDateTaken:(id)dateTaken withType:(id)type;	// 0x19dce5
- (void)dealloc;	// 0x19c6fd
- (id)displayName;	// 0x19dc31
// converted property getter: - (id)endSelectors;	// 0x19cf55
- (id)listOfAlbumInfos;	// 0x19cfed
- (id)listOfAlbumInfosAlphabetically;	// 0x19d19d
- (id)listOfAlbumInfosUserSort;	// 0x19d271
- (id)listOfVideoInfos;	// 0x19d2fd
- (id)listOfVideoInfosAlphabetically;	// 0x19d551
- (id)listOfVideoInfosUserSort;	// 0x19d625
- (id)mediaUserSort;	// 0x19cf65
// converted property getter: - (id)modDate;	// 0x19dc21
- (id)mostRecentAlbumInfo;	// 0x19da3d
- (id)slideshowInfos;	// 0x19d6b1
- (id)slideshowInfosAlphabetically;	// 0x19d8dd
- (id)slideshowInfosUserSort;	// 0x19d9b1
// converted property getter: - (id)startSelectors;	// 0x19cf45
@end

