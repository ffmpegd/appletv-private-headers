/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSString, NSDate, ATVFeedEventGroupElement, NSDictionary, ATVFeedDocument;

__attribute__((visibility("hidden")))
@interface BRChapterGroup : XXUnknownSuperclass {
	ATVFeedDocument *_feedDocument;	// 4 = 0x4
	NSString *_groupName;	// 8 = 0x8
	NSArray *_chapters;	// 12 = 0xc
	NSString *_refreshURL;	// 16 = 0x10
	unsigned _refreshIntervalInSeconds;	// 20 = 0x14
	NSDate *_startDate;	// 24 = 0x18
	BOOL _showChapterMarkers;	// 28 = 0x1c
	BOOL _showDescriptionOnChapterSkip;	// 29 = 0x1d
	NSDictionary *_feedDictionary;	// 32 = 0x20
	ATVFeedEventGroupElement *_feedElement;	// 36 = 0x24
}
@property(readonly, assign) NSArray *chapters;	// G=0x358c39; @synthesize=_chapters
@property(readonly, assign) NSDictionary *feedDictionary;	// G=0x358cc9; @synthesize=_feedDictionary
@property(readonly, assign) ATVFeedEventGroupElement *feedElement;	// G=0x358cdd; @synthesize=_feedElement
@property(readonly, assign) NSString *groupName;	// G=0x358c25; @synthesize=_groupName
@property(readonly, assign) unsigned refreshIntervalInSeconds;	// G=0x358c71; @synthesize=_refreshIntervalInSeconds
@property(retain) NSString *refreshURL;	// G=0x358c4d; S=0x358c61; @synthesize=_refreshURL
@property(readonly, assign) BOOL showChapterMarkers;	// G=0x358c99; @synthesize=_showChapterMarkers
@property(readonly, assign) BOOL showDescriptionOnChapterSkip;	// G=0x358cb1; @synthesize=_showDescriptionOnChapterSkip
@property(readonly, assign) NSDate *startDate;	// G=0x358c85; @synthesize=_startDate
- (id)initWithFeedDictionary:(id)feedDictionary;	// 0x358af5
- (id)initWithFeedElement:(id)feedElement;	// 0x3587e5
- (id)initWithGroupName:(id)groupName feedDictionary:(id)dictionary;	// 0x358945
- (id)_chaptersFromFeedDictionary:(id)feedDictionary;	// 0x358cf1
- (id)_chaptersFromFeedElement:(id)feedElement;	// 0x358f61
- (unsigned)chapterCount;	// 0x358bfd
// declared property getter: - (id)chapters;	// 0x358c39
- (void)dealloc;	// 0x358b35
// declared property getter: - (id)feedDictionary;	// 0x358cc9
// declared property getter: - (id)feedElement;	// 0x358cdd
// declared property getter: - (id)groupName;	// 0x358c25
// declared property getter: - (unsigned)refreshIntervalInSeconds;	// 0x358c71
// declared property getter: - (id)refreshURL;	// 0x358c4d
// declared property setter: - (void)setRefreshURL:(id)url;	// 0x358c61
// declared property getter: - (BOOL)showChapterMarkers;	// 0x358c99
// declared property getter: - (BOOL)showDescriptionOnChapterSkip;	// 0x358cb1
// declared property getter: - (id)startDate;	// 0x358c85
@end

