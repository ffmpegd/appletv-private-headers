/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedVideoAssetElement.h"

@class ATVFeedTrickPlayConfigElement, NSDate, NSArray;

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
@property(assign, nonatomic) BOOL beginPlaybackAtStartDate;	// G=0x130aed; S=0x130afd; @synthesize=_beginPlaybackAtStartDate
@property(assign, nonatomic) float bookmarkNetTimeSec;	// G=0x130a95; S=0x130aa5; @synthesize=_bookmarkNetTimeSec
@property(retain, nonatomic) NSArray *eventGroups;	// G=0x130a25; S=0x130a35; @synthesize=_eventGroups
@property(assign, nonatomic) BOOL indefiniteDuration;	// G=0x1309cd; S=0x1309dd; @synthesize=_indefiniteDuration
@property(retain, nonatomic) NSArray *requiredEventGroups;	// G=0x130a5d; S=0x130a6d; @synthesize=_requiredEventGroups
@property(retain, nonatomic) NSDate *startDate;	// G=0x130ab5; S=0x130ac5; @synthesize=_startDate
@property(retain, nonatomic) ATVFeedTrickPlayConfigElement *trickPlayConfig;	// G=0x1309ed; S=0x1309fd; @synthesize=_trickPlayConfig
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x130595
- (void).cxx_destruct;	// 0x130b0d
// declared property getter: - (BOOL)beginPlaybackAtStartDate;	// 0x130aed
// declared property getter: - (float)bookmarkNetTimeSec;	// 0x130a95
// declared property getter: - (id)eventGroups;	// 0x130a25
// declared property getter: - (BOOL)indefiniteDuration;	// 0x1309cd
// declared property getter: - (id)requiredEventGroups;	// 0x130a5d
// declared property setter: - (void)setBeginPlaybackAtStartDate:(BOOL)startDate;	// 0x130afd
// declared property setter: - (void)setBookmarkNetTimeSec:(float)sec;	// 0x130aa5
// declared property setter: - (void)setEventGroups:(id)groups;	// 0x130a35
// declared property setter: - (void)setIndefiniteDuration:(BOOL)duration;	// 0x1309dd
// declared property setter: - (void)setRequiredEventGroups:(id)groups;	// 0x130a6d
// declared property setter: - (void)setStartDate:(id)date;	// 0x130ac5
// declared property setter: - (void)setTrickPlayConfig:(id)config;	// 0x1309fd
// declared property getter: - (id)startDate;	// 0x130ab5
// declared property getter: - (id)trickPlayConfig;	// 0x1309ed
@end

