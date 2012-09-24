/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedRootElement.h"

@class NSArray, NSString, NSDate, BRXMLElement;

__attribute__((visibility("hidden")))
@interface ATVFeedEventGroupElement : ATVFeedRootElement {
	NSString *_title;	// 8 = 0x8
	int _refreshIntervalSec;	// 12 = 0xc
	NSDate *_startDate;	// 16 = 0x10
	BOOL _beginPlaybackAtStartDate;	// 20 = 0x14
	NSArray *_events;	// 24 = 0x18
	BOOL _showChapterMarkers;	// 28 = 0x1c
	BOOL _showDescriptionOnChapterSkip;	// 29 = 0x1d
	BRXMLElement *_xml;	// 32 = 0x20
}
@property(assign, nonatomic) BOOL beginPlaybackAtStartDate;	// G=0x159245; S=0x159255; @synthesize=_beginPlaybackAtStartDate
@property(retain, nonatomic) NSArray *events;	// G=0x159265; S=0x159275; @synthesize=_events
@property(assign, nonatomic) int refreshIntervalSec;	// G=0x159205; S=0x159215; @synthesize=_refreshIntervalSec
@property(assign, nonatomic) BOOL showChapterMarkers;	// G=0x159285; S=0x159295; @synthesize=_showChapterMarkers
@property(assign, nonatomic) BOOL showDescriptionOnChapterSkip;	// G=0x1592a5; S=0x1592b5; @synthesize=_showDescriptionOnChapterSkip
@property(retain, nonatomic) NSDate *startDate;	// G=0x159225; S=0x159235; @synthesize=_startDate
@property(copy, nonatomic) NSString *title;	// G=0x1591e1; S=0x1591f5; @synthesize=_title
@property(readonly, assign, nonatomic) BRXMLElement *xml;	// G=0x1592c5; @synthesize=_xml
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x158de9
// declared property getter: - (BOOL)beginPlaybackAtStartDate;	// 0x159245
- (void)dealloc;	// 0x159155
// declared property getter: - (id)events;	// 0x159265
// declared property getter: - (int)refreshIntervalSec;	// 0x159205
// declared property setter: - (void)setBeginPlaybackAtStartDate:(BOOL)startDate;	// 0x159255
// declared property setter: - (void)setEvents:(id)events;	// 0x159275
// declared property setter: - (void)setRefreshIntervalSec:(int)sec;	// 0x159215
// declared property setter: - (void)setShowChapterMarkers:(BOOL)markers;	// 0x159295
// declared property setter: - (void)setShowDescriptionOnChapterSkip:(BOOL)skip;	// 0x1592b5
// declared property setter: - (void)setStartDate:(id)date;	// 0x159235
// declared property setter: - (void)setTitle:(id)title;	// 0x1591f5
// declared property getter: - (BOOL)showChapterMarkers;	// 0x159285
// declared property getter: - (BOOL)showDescriptionOnChapterSkip;	// 0x1592a5
// declared property getter: - (id)startDate;	// 0x159225
// declared property getter: - (id)title;	// 0x1591e1
// declared property getter: - (id)xml;	// 0x1592c5
@end
