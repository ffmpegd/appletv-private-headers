/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedVideoAssetElement.h"

@class NSArray, NSDate, ATVFeedTrickPlayConfigElement;

__attribute__((visibility("hidden")))
@interface ATVFeedHTTPLiveStreamingVideoElement : ATVFeedVideoAssetElement {
	BOOL _indefiniteDuration;	// 4 = 0x4
	BOOL _beginPlaybackAtStartDate;	// 5 = 0x5
	ATVFeedTrickPlayConfigElement *_trickPlayConfig;	// 8 = 0x8
	NSArray *_eventGroups;	// 12 = 0xc
	NSArray *_requiredEventGroups;	// 16 = 0x10
	float _bookmarkNetTimeSec;	// 20 = 0x14
	NSDate *_startDate;	// 24 = 0x18
}
@property(assign, nonatomic) BOOL beginPlaybackAtStartDate;	// G=0x13bb71; S=0x13bb81; @synthesize=_beginPlaybackAtStartDate
@property(assign, nonatomic) float bookmarkNetTimeSec;	// G=0x13bb19; S=0x13bb29; @synthesize=_bookmarkNetTimeSec
@property(retain, nonatomic) NSArray *eventGroups;	// G=0x13baa9; S=0x13bab9; @synthesize=_eventGroups
@property(assign, nonatomic) BOOL indefiniteDuration;	// G=0x13ba51; S=0x13ba61; @synthesize=_indefiniteDuration
@property(retain, nonatomic) NSArray *requiredEventGroups;	// G=0x13bae1; S=0x13baf1; @synthesize=_requiredEventGroups
@property(retain, nonatomic) NSDate *startDate;	// G=0x13bb39; S=0x13bb49; @synthesize=_startDate
@property(retain, nonatomic) ATVFeedTrickPlayConfigElement *trickPlayConfig;	// G=0x13ba71; S=0x13ba81; @synthesize=_trickPlayConfig
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x13b619
- (void).cxx_destruct;	// 0x13bb91
// declared property getter: - (BOOL)beginPlaybackAtStartDate;	// 0x13bb71
// declared property getter: - (float)bookmarkNetTimeSec;	// 0x13bb19
// declared property getter: - (id)eventGroups;	// 0x13baa9
// declared property getter: - (BOOL)indefiniteDuration;	// 0x13ba51
// declared property getter: - (id)requiredEventGroups;	// 0x13bae1
// declared property setter: - (void)setBeginPlaybackAtStartDate:(BOOL)startDate;	// 0x13bb81
// declared property setter: - (void)setBookmarkNetTimeSec:(float)sec;	// 0x13bb29
// declared property setter: - (void)setEventGroups:(id)groups;	// 0x13bab9
// declared property setter: - (void)setIndefiniteDuration:(BOOL)duration;	// 0x13ba61
// declared property setter: - (void)setRequiredEventGroups:(id)groups;	// 0x13baf1
// declared property setter: - (void)setStartDate:(id)date;	// 0x13bb49
// declared property setter: - (void)setTrickPlayConfig:(id)config;	// 0x13ba81
// declared property getter: - (id)startDate;	// 0x13bb39
// declared property getter: - (id)trickPlayConfig;	// 0x13ba71
@end

